const PREC = {
  COMMENT: -2,
  UNQUOTED_STRING: 5,
  CONTAINER: 9,
  CONNECTION: 9,
  SHAPE: 11,
  IDENTIFIER: 12,
  ARROW: 13,
};

spaces = /[ \t]/;

module.exports = grammar({
  name: "d2",

  extras: ($) => [
    /[ \f\t\v\u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/,
    $.line_comment,
  ],

  word: ($) => $._word,

  conflicts: ($) => [
    [$._connection_path, $.container],
    //[$.shape_key],
    /*
    [$._shape_path],
    [$._shape_block],
    [$._shape_block_definition],
    [$._style_attr_block],
    [$._inner_style_attribute],
    [$._emptyline],
*/
  ],

  rules: {
    source_file: ($) => repeat($._new_root_definition),

    _new_root_definition: ($) =>
      choice($._eol, seq(choice($.shape, $.container, $.connection), $._end)),

    connection: ($) =>
      seq(
        $._connection_path,
        repeat1(seq($._arrow, $._connection_path)),
        optional(seq($._colon, $.label))
      ),

    _connection_path: ($) =>
      seq(
        repeat(
          prec(
            PREC.CONNECTION,
            seq(alias($.shape_key, $.container_key), $._dot)
          )
        ),
        $.shape_key
      ),

    container: ($) =>
      prec(
        PREC.CONTAINER,
        seq(
          alias($.shape_key, $.container_key),
          choice(
            seq($._dot, choice($.shape, $.container)),
            seq(
              seq(
                optional(seq($._colon, optional($.label))),
                optional(seq(alias($._new_container_block, $.block)))
              )
            )
          )
        )
      ),

    shape: ($) =>
      prec(
        PREC.SHAPE,
        seq(
          $.shape_key,
          optional(
            seq(
              optional(seq($._colon, optional($.label))),
              optional(seq(alias($._new_shape_block, $.block)))
            )
          )
        )
      ),

    shape_key: ($) =>
      choice(
        $.string,
        seq(
          token(prec(PREC.IDENTIFIER, /\-?([\w\d]+|([\w\d]+( +|\-)[\w\d]+)+)/)),
          optional($._dash)
        )
      ),

    _new_shape_block: ($) =>
      prec(PREC.SHAPE, seq("{", repeat($._new_shape_block_definition), "}")),

    _new_shape_block_definition: ($) => prec(PREC.SHAPE, choice($._eol)),

    _new_container_block: ($) =>
      prec(
        PREC.CONTAINER,
        seq("{", repeat($._new_container_block_definition), "}")
      ),

    _new_container_block_definition: ($) =>
      prec(
        PREC.CONTAINER,
        choice($._eol, seq(choice($.shape, $.container), $._end))
      ),

    // --------------------------------------------

    // source_file: ($) => repeat($._root_definition),

    _root_definition: ($) =>
      choice(
        $._emptyline,
        $._root_attribute,
        $.connection,
        $._shape_definition
      ),

    _shape_definition: ($) =>
      seq(
        $._shape_path,
        optional(
          choice(
            seq($.dot, $._shape_attribute),
            seq(
              optional(seq($._colon, optional(seq(spaces, $.label)))),
              optional(alias($._shape_block, $.block))
            )
          )
        ),
        $._end
      ),

    _shape_path: ($) =>
      seq(
        spaces,
        repeat(seq(alias($.shape_key, $.container_key), spaces, $.dot, spaces)),
        $.shape_key
      ),

    _dash: ($) => token.immediate("-"),

    label: ($) => choice($.string, $._unquoted_string),

    attr_value: ($) => seq(spaces, choice($.string, $._unquoted_string)),

    _root_attribute: ($) =>
      choice(
        seq(
          alias($._root_attr_key, $.attr_key),
          $._colon,
          $.attr_value,
          $._end
        ),
        alias(seq($._shape_attribute, $._end), $.invalid)
      ),

    _root_attr_key: ($) => "direction",

    _shape_block: ($) =>
      seq(
        spaces,
        "{",
        repeat(choice($._emptyline, seq(spaces, $._shape_block_definition))),
        optional(seq($._shape_block_definition, optional($._end))),
        spaces,
        "}"
      ),

    _shape_block_definition: ($) =>
      choice($.connection, $._shape_definition, $._shape_attribute),

    _shape_attribute: ($) =>
      choice(
        seq(alias($._shape_attr_key, $.attr_key), $._colon, $.attr_value),
        $._style_attribute
      ),

    _style_attribute: ($) =>
      seq(
        alias("style", $.attr_key),
        choice(
          seq($.dot, $._inner_style_attribute),
          seq($._colon, alias($._style_attr_block, $.block))
        )
      ),

    _style_attr_block: ($) =>
      seq(
        spaces,
        "{",
        spaces,
        repeat(choice($._emptyline, seq($._inner_style_attribute, $._end))),
        optional(seq($._inner_style_attribute, optional($._end))),
        spaces,
        "}"
      ),

    _inner_style_attribute: ($) =>
      seq(spaces, alias($._style_attr_key, $.attr_key), $._colon, $.attr_value),

    _connection_attribute: ($) =>
      seq(alias($._connection_attr_key, $.attr_key), $._colon, $.attr_value),

    _shape_attr_key: ($) =>
      choice(
        "shape",
        "label",
        // sql
        "constraint",
        // image
        "icon",
        "width",
        "height"
      ),

    _style_attr_key: ($) =>
      choice(
        "opacity",
        "fill",
        "stroke",
        "stroke-width",
        "stroke-dash",
        "border-radius",
        "font-color",
        "shadow",
        "multiple",
        "animated",
        "3d",
        "link"
      ),

    _text_attr_key: ($) => "near",

    _connection_attr_key: ($) => choice("source-arrowhead", "target-arrowhead"),

    _colon: ($) => seq(":"),

    _arrow: ($) => seq($.arrow),

    arrow: ($) => token(prec(PREC.ARROW, choice(/-+>/, /--+/, /<-+/, /<-+>/))),

    _dot: ($) => seq($.dot),
    dot: ($) => token("."),

    _unquoted_string: ($) =>
      token(prec(PREC.UNQUOTED_STRING, /[\w\-?!]([^'"`\n;{}]*[\w\-?!])?/)),

    string: ($) =>
      choice(
        seq("'", repeat(token.immediate(/[^'\n]+/)), "'"),
        seq('"', repeat(token.immediate(/[^"\n]+/)), '"'),
        seq("`", repeat(token.immediate(/[^`\n]+/)), "`")
      ),

    line_comment: ($) => token(prec(PREC.COMMENT, seq("#", /.*/))),

    _word: ($) => /[\w\d]+/,

    _emptyline: ($) => prec(-1, seq(spaces, $._eol)),
    _eol: ($) => choice("\n", "\0"),
    _end: ($) => seq(choice(";", $._eol)),
  },
});

const PREC = {
  COMMENT: -2,
  EOL: -1,
  TEXT_BLOCK_CONTENT: -1,
  UNQUOTED_STRING: -1,
  CONTAINER: 2,
  CONNECTION: 2,
  SHAPE: 3,
  CLASSES: 4,
  IDENTIFIER: 0,
  ARROW: 0,
  ATTRIBUTE: 0,
  ATTRIBUTE_KEY: 0,
};

// mkWrapCont :: string -> string -> ($ -> Rule) -> $ -> Rule
const mkWrapCont = (start, end) => (onDefinition) => ($) =>
  seq(
    start,
    repeat(choice($._eol, seq(onDefinition($), $._end))),
    optional(seq(onDefinition($), optional($._end))),
    end
  );
const mkBlock = mkWrapCont("{", "}");
const mkList = mkWrapCont("[", "]");

// mkAlias :: ($ -> Rule) -> ($ -> Rule) -> $ -> Rule
const mkAlias = (onAlias) => (onValue) => ($) => alias(onValue($), onAlias($));
const attrKeyAlias = mkAlias(($) => $.attr_key);
const attrAlias = mkAlias(($) => $.attribute);

// mkAttrCont :: ($ -> Rule) -> ($ -> Rule) -> $ -> Rule
const mkAttrCont = (onValue) => (onKey) => ($) =>
  seq(onKey($), $._colon, onValue($));
const mkAttr = (onKey) => mkAttrCont(($) => $.attr_value)(attrKeyAlias(onKey));
const mkListAttr = (onKey) =>
  mkAttrCont(
    either(
      ($) => $.attr_value_list,
      ($) => $.attr_value
    )
  )(attrKeyAlias(onKey));

const either = (onLeft, onRight) => ($) => choice(onLeft($), onRight($));

module.exports = grammar({
  name: "d2",

  externals: ($) => [
    $._text_block_start,
    $._text_block_end,
    $._text_block_raw_text,
    $.block_comment,
  ],

  extras: ($) => [
    /[ \f\t\v\u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/,
    $.line_comment,
    $.block_comment,
  ],

  conflicts: ($) => [
    [$._connection_path, $.container],
    [$._container_block],
    [$._connection_block],
    [$._style_attribute_block],
    [$._classes_block],
    [$._classes_item_block],
    [$.class_list],
    [$.attr_value_list],
    [$._text_block_attrs],
    [$._identifier],
  ],

  rules: {
    source_file: ($) => repeat($._root_definition),

    _root_definition: ($) =>
      choice(
        $._eol,
        seq(
          choice(
            alias($._root_attribute, $.attribute),
            $.classes,
            $.shape,
            $.container,
            $.connection
          ),
          choice($._end, "\0")
        )
      ),

    // connections

    connection: ($) =>
      seq(
        choice(
          $._full_connection_path,
          alias($._referencing_full_connection_path, $.referencing)
        ),
        optional(seq($._colon, optional($.label))),
        optional(seq(alias($._connection_block, $.block)))
      ),

    _referencing_full_connection_path: ($) =>
      seq("(", $._full_connection_path, $._referencing_end, optional($.index)),

    _referencing_end: ($) => token(prec(PREC.IDENTIFIER + 1, ")")),

    index: ($) => seq("[", $.integer, "]"),

    _full_connection_path: ($) =>
      seq($._connection_path, repeat1(seq($.arrow, $._connection_path))),

    _connection_path: ($) =>
      seq(
        repeat(
          prec(PREC.CONNECTION, seq(alias($.shape_key, $.container_key), $.dot))
        ),
        $.shape_key
      ),

    _connection_block: mkBlock(($) => $._connection_attribute),

    // classes

    classes: ($) =>
      prec(
        PREC.CLASSES,
        seq(
          $.keyword_classes,
          choice(
            optional(seq($.dot, $._classes_item)),
            seq(
              optional(seq($._colon, optional($.label))),
              optional(alias($._classes_block, $.block))
            )
          )
        )
      ),

    _classes_block: mkBlock(($) => $._classes_item),

    _classes_item: ($) =>
      seq(
        $._class_name,
        choice(
          optional(seq($.dot, $._shape_attribute)),
          seq(
            optional(seq($._colon, optional($.label))),
            optional(alias($._classes_item_block, $.class_block))
          )
        )
      ),

    _classes_item_block: mkBlock(($) => $._classes_item_attribute),

    _classes_item_attribute: attrAlias(($) =>
      choice($._base_shape_attribute, $._style_attribute)
    ),

    // containers

    container: ($) =>
      prec(
        PREC.CONTAINER,
        seq(
          alias($.shape_key, $.container_key),
          choice(
            seq($.dot, choice($.shape, $.container)),
            seq(
              optional(seq($._colon, optional($.label))),
              optional(alias($._container_block, $.block))
            )
          )
        )
      ),

    _container_block: mkBlock(($) => $._container_block_definition),

    _container_block_definition: ($) =>
      choice($.shape, $.container, $.connection, $._shape_attribute),

    // shapes

    shape: ($) =>
      prec(
        PREC.SHAPE,
        seq(
          $.shape_key,
          optional(
            choice(
              seq($.dot, $._shape_attribute),
              seq(
                $._colon,
                choice(
                  $.label,
                  seq(
                    $.text_block,
                    optional(alias($._text_block_attrs, $.block))
                  )
                )
              )
            )
          )
        )
      ),

    shape_key: ($) => choice($.keyword_underscore, $.string, $._identifier),

    _identifier: ($) =>
      seq(
        choice(token(prec(PREC.IDENTIFIER, /[\w\d$-]/)), $.escape_sequence),
        repeat(
          choice(
            $.escape_sequence,
            token(prec(PREC.IDENTIFIER, /[\w\d'"$(,]+/)),
            token(prec(PREC.IDENTIFIER, /( +|-)[\w\d'"$(]+/)),
            token(prec(PREC.IDENTIFIER, ")"))
          )
        ),
        optional(
          choice(
            token(prec(PREC.IDENTIFIER, /[\w\d'"$(]+/)),
            token(prec(PREC.IDENTIFIER + 1, ")"))
          )
        ),
        optional($._dash)
      ),

    text_block: ($) =>
      seq(
        alias($._text_block_start, "|"),
        optional($.language),
        /\s/,
        alias($._text_block_raw_text, $.raw_text),
        alias($._text_block_end, "|")
      ),

    _text_block_attrs: mkBlock(attrAlias(($) => $._text_shape_attribute)),

    language: ($) => /\w+/,

    // attributes

    _root_attribute: mkAttr(($) => $._root_attr_key),

    _root_attr_key: ($) =>
      choice(
        "direction",
        $._grid_attr_key,
        // reserved but doesn't affected for root
        alias(
          choice(
            "shape",
            "label",
            "constraint",
            "icon",
            $.keyword_style,
            $._common_style_attr_key,
            $._text_attr_key
          ),
          $.reserved
        )
      ),

    _shape_attribute: attrAlias(($) =>
      choice($._class_attribute, $._base_shape_attribute, $._style_attribute)
    ),

    _class_attribute: mkAttrCont(($) => choice($.class_list, $._class_name))(
      ($) => $.keyword_class
    ),

    class_list: mkList(($) => $._class_name),

    _class_name: ($) => alias($.shape_key, $.class_name),

    _base_shape_attribute: either(
      mkListAttr(($) => $._shape_list_attr_key),
      mkAttr(($) => $._shape_attr_key)
    ),

    _shape_attr_key: ($) =>
      prec(
        PREC.ATTRIBUTE_KEY,
        choice(
          "direction",
          "shape",
          "label",
          "link",
          "tooltip",
          "icon",
          "width",
          "height",
          $._text_attr_key,
          $._grid_attr_key
        )
      ),

    _shape_list_attr_key: ($) => prec(PREC.ATTRIBUTE_KEY, "constraint"),

    _style_attribute: ($) =>
      prec(
        PREC.ATTRIBUTE,
        seq(
          $.keyword_style,
          choice(
            seq($.dot, alias($._inner_style_attribute, $.attribute)),
            seq($._colon, alias($._style_attribute_block, $.block))
          )
        )
      ),

    _style_attribute_block: mkBlock(attrAlias(($) => $._inner_style_attribute)),

    _inner_style_attribute: mkAttr(($) => $._style_attr_key),

    _grid_attr_key: ($) =>
      choice(
        "vertical-gap",
        "horizontal-gap",
        "grid-gap",
        "grid-columns",
        "grid-rows"
      ),

    _style_attr_key: ($) => choice($._common_style_attr_key, "3d"),

    _common_style_attr_key: ($) =>
      choice(
        "opacity",
        "fill",
        "fill-pattern",
        "stroke",
        "stroke-width",
        "stroke-dash",
        "border-radius",
        "double-border",
        "font",
        "font-size",
        "font-color",
        "shadow",
        "multiple",
        "animated",
        "link",
        "italic",
        "bold",
        "underline",
        "text-transform"
      ),

    _text_shape_attribute: mkAttr(($) => $._text_attr_key),

    _text_attr_key: ($) => "near",

    _connection_attribute: attrAlias(($) =>
      choice($._connection_arrowhead_attribute, $._style_attribute)
    ),

    _connection_arrowhead_attribute: ($) =>
      seq(
        alias($._connection_arrowhead_attr_key, $.attr_key),
        choice(
          seq($.dot, alias($._style_attribute, $.attribute)),
          seq(
            optional(seq($._colon, optional($.label))),
            optional(seq(alias($._container_block, $.block)))
          )
        )
      ),

    _connection_arrowhead_block: mkBlock(($) => $._shape_attribute),

    _connection_arrowhead_attr_key: ($) =>
      choice("source-arrowhead", "target-arrowhead"),

    keyword_underscore: (_) => "_",
    keyword_classes: (_) => "classes",
    keyword_class: (_) => "class",
    keyword_style: (_) => "style",

    //

    label: ($) => choice($.string, $._unquoted_string),

    attr_value_list: mkList(($) => $.attr_value),

    attr_value: ($) =>
      choice($.boolean, $.integer, $.float, $.string, $._unquoted_string),

    // --------------------------------------------

    _dash: ($) => token.immediate("-"),

    _colon: ($) => token(":"),

    arrow: ($) => token(prec(PREC.ARROW, choice(/-+>/, /--+/, /<-+/, /<-+>/))),

    dot: ($) => token("."),

    _unquoted_string: ($) =>
      repeat1(
        choice(
          $.escape_sequence,
          token(
            prec(
              PREC.UNQUOTED_STRING,
              /[^'"`\\|\n\s;{}\[\]][^\\\n;{}\[\]]*[^\\\n\s;{}\[\]]?/
            )
          )
        )
      ),

    string: ($) =>
      choice(
        seq(
          "'",
          alias($._unescaped_single_string_fragment, $.string_fragment),
          "'"
        ),
        seq(
          '"',
          repeat(
            choice(
              alias($._unescaped_double_string_fragment, $.string_fragment),
              $.escape_sequence
            )
          ),
          '"'
        )
      ),

    _unescaped_single_string_fragment: ($) => token.immediate(/[^'\n]+/),

    _unescaped_double_string_fragment: ($) => token.immediate(/[^"\\\n]+/),

    escape_sequence: ($) =>
      token(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u{[0-9a-fA-F]+}/
          )
        )
      ),

    boolean: ($) => choice("true", "false"),

    integer: ($) => /[0-9]+/,

    float: ($) => /[0-9]+\.[0-9]+/,

    line_comment: ($) => token(prec(PREC.COMMENT, seq("#", /.*/))),

    _eol: ($) => token(prec(PREC.EOL, "\n")),
    _end: ($) => choice(";", $._eol),
  },
});

module.exports = grammar({
  name: "d2",

  externals: ($) => [$._identifier],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.connection, $.shape),

    _end: ($) => choice(";", "\n"),

    connection: ($) =>
      seq(
        $.identifier,
        choice(
          seq(seq($.arrow, $.identifier, ":", $.label)),
          seq(repeat1(seq($.arrow, $.identifier)))
        ),
        $._end
      ),

    shape: ($) =>
      seq(
        $.identifier,
        repeat(seq($.dot, $.identifier)),
        optional(seq(":", $.label)),
        $._end
      ),

    dot: ($) => ".",

    label: ($) => choice($.string, $._unquoted_string),

    identifier: ($) => $._identifier,

    arrow: ($) =>
      choice(
        seq("--", repeat("-")),
        seq("<-", repeat("-")),
        seq("<-", repeat("-"), ">"),
        seq(repeat("-"), "->")
      ),

    _unquoted_string: ($) => /[^\n;{]+/,

    string: ($) =>
      choice(
        seq("'", repeat(token(/[^'\n]+/)), "'"),
        seq('"', repeat(token(/[^'\n]+/)), '"'),
        seq("`", repeat(token(/[^'\n]+/)), "`")
      ),
  },
});

module.exports = grammar({
  name: 'tinylisp',

  rules: {
    source_file: $ => $.list,

    list : $ => seq(
      '(',
      repeat($._expression),
      optional(seq(
        $._expression,
        $.dot,
        $._expression,
      )),
      ')',
    ),

    _expression : $ => choice(
      $.number,
      $.list,
      $.comment,
      $.builtin,
      $.slib,
      $.identifier,
    ),

    builtin : $ => choice(
      "λ",
      "macro",
      "'",
      "eval",
      "define",
      "#env",
      "+",
      "×",
      "neg",
      "inv",
      "<",
      "floor",
      "cond",
    ),

    // Standard library functions
    slib : $ => choice(
      "list",
      "defun",
      "cons",
      "apply",
      "not",
      "head",
      "tail",
      "-",
      "/",
      "or₂",
      "and₂",
      ">",
      "=",
      "abs",
      "each",
      "is_even",
      "is_odd",
    ),

    number : $ => /-?\d+(\/\d+)?|\d+\.\d+/,

    identifier : $ => /[^\s\(\)⋮]+/,

    dot : $ => //,

    comment: $ => token(seq(';', /.*/,'\n')),
  }
});

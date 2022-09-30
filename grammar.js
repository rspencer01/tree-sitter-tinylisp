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
      $.identifier,
    ),

    // These are not actually all builtins. Some of these are defined in the
    // standard library, but they may as well be builtin.
    builtin : $ => choice(
      // Actual builtins
      "#t",
      "λ",
      "macro",
      "+",
      "*",
      "neg",
      "inv",
      "<",
      "cond",
      "'",
      "eval",
      "define",
      "list",
      "#env",
      // Standard library functions
      "defun", "list", "not", "head", "cons", "-", "/", "or₂", "and₂", ">", "=", "tail"
    ),

    number : $ => /\d+(\/\d+)?|\d+\.\d+/,

    identifier : $ => /[^\s\(\)\.]+/,

    dot : $ => /\./,

    comment: $ => token(seq(';', /.*/,'\n')),
  }
});

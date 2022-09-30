#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_POUNDt = 3,
  anon_sym_ = 4,
  anon_sym_macro = 5,
  anon_sym_PLUS = 6,
  anon_sym_STAR = 7,
  anon_sym_neg = 8,
  anon_sym_inv = 9,
  anon_sym_LT = 10,
  anon_sym_cond = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_eval = 13,
  anon_sym_define = 14,
  anon_sym_list = 15,
  anon_sym_POUNDenv = 16,
  anon_sym_defun = 17,
  anon_sym_not = 18,
  anon_sym_head = 19,
  anon_sym_cons = 20,
  anon_sym_DASH = 21,
  anon_sym_SLASH = 22,
  anon_sym_or = 23,
  anon_sym_and = 24,
  anon_sym_GT = 25,
  anon_sym_EQ = 26,
  anon_sym_tail = 27,
  sym_number = 28,
  sym_identifier = 29,
  sym_dot = 30,
  sym_comment = 31,
  sym_source_file = 32,
  sym_list = 33,
  sym__expression = 34,
  sym_builtin = 35,
  aux_sym_list_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUNDt] = "#t",
  [anon_sym_] = "λ",
  [anon_sym_macro] = "macro",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_neg] = "neg",
  [anon_sym_inv] = "inv",
  [anon_sym_LT] = "<",
  [anon_sym_cond] = "cond",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_eval] = "eval",
  [anon_sym_define] = "define",
  [anon_sym_list] = "list",
  [anon_sym_POUNDenv] = "#env",
  [anon_sym_defun] = "defun",
  [anon_sym_not] = "not",
  [anon_sym_head] = "head",
  [anon_sym_cons] = "cons",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_or] = "or₂",
  [anon_sym_and] = "and₂",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_tail] = "tail",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_dot] = "dot",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_list] = "list",
  [sym__expression] = "_expression",
  [sym_builtin] = "builtin",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_] = anon_sym_,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_inv] = anon_sym_inv,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_POUNDenv] = anon_sym_POUNDenv,
  [anon_sym_defun] = anon_sym_defun,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_cons] = anon_sym_cons,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_tail] = anon_sym_tail,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_dot] = sym_dot,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_list] = sym_list,
  [sym__expression] = sym__expression,
  [sym_builtin] = sym_builtin,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tail] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 955) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_inv);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUNDenv);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_defun);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_cons);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_tail);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '/') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(74);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.') ADVANCE(1);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 8322) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 8322) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_inv] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_POUNDenv] = ACTIONS(1),
    [anon_sym_defun] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_cons] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_tail] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_list] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [2] = {
    [sym_list] = STATE(12),
    [sym__expression] = STATE(12),
    [sym_builtin] = STATE(12),
    [aux_sym_list_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(5),
    [anon_sym_POUNDt] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(7),
    [anon_sym_cons] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_tail] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym_list] = STATE(13),
    [sym__expression] = STATE(13),
    [sym_builtin] = STATE(13),
    [aux_sym_list_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_POUNDt] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(7),
    [anon_sym_cons] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_tail] = ACTIONS(7),
    [sym_number] = ACTIONS(15),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [4] = {
    [sym_list] = STATE(4),
    [sym__expression] = STATE(4),
    [sym_builtin] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(22),
    [anon_sym_POUNDt] = ACTIONS(24),
    [anon_sym_] = ACTIONS(24),
    [anon_sym_macro] = ACTIONS(24),
    [anon_sym_PLUS] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(24),
    [anon_sym_neg] = ACTIONS(24),
    [anon_sym_inv] = ACTIONS(24),
    [anon_sym_LT] = ACTIONS(24),
    [anon_sym_cond] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_eval] = ACTIONS(24),
    [anon_sym_define] = ACTIONS(24),
    [anon_sym_list] = ACTIONS(24),
    [anon_sym_POUNDenv] = ACTIONS(24),
    [anon_sym_defun] = ACTIONS(24),
    [anon_sym_not] = ACTIONS(24),
    [anon_sym_head] = ACTIONS(24),
    [anon_sym_cons] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(24),
    [anon_sym_SLASH] = ACTIONS(24),
    [anon_sym_or] = ACTIONS(24),
    [anon_sym_and] = ACTIONS(24),
    [anon_sym_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_tail] = ACTIONS(24),
    [sym_number] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(30),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_POUNDt] = ACTIONS(35),
    [anon_sym_] = ACTIONS(35),
    [anon_sym_macro] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_neg] = ACTIONS(35),
    [anon_sym_inv] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_cond] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_eval] = ACTIONS(35),
    [anon_sym_define] = ACTIONS(35),
    [anon_sym_list] = ACTIONS(35),
    [anon_sym_POUNDenv] = ACTIONS(35),
    [anon_sym_defun] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_head] = ACTIONS(35),
    [anon_sym_cons] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_EQ] = ACTIONS(35),
    [anon_sym_tail] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [sym_dot] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
  },
  [6] = {
    [sym_list] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_builtin] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_POUNDt] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(7),
    [anon_sym_cons] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_tail] = ACTIONS(7),
    [sym_number] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_POUNDt] = ACTIONS(43),
    [anon_sym_] = ACTIONS(43),
    [anon_sym_macro] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_neg] = ACTIONS(43),
    [anon_sym_inv] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_cond] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_eval] = ACTIONS(43),
    [anon_sym_define] = ACTIONS(43),
    [anon_sym_list] = ACTIONS(43),
    [anon_sym_POUNDenv] = ACTIONS(43),
    [anon_sym_defun] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(43),
    [anon_sym_head] = ACTIONS(43),
    [anon_sym_cons] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_or] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_tail] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [sym_identifier] = ACTIONS(43),
    [sym_dot] = ACTIONS(41),
    [sym_comment] = ACTIONS(41),
  },
  [8] = {
    [sym_list] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_builtin] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_POUNDt] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(7),
    [anon_sym_cons] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_tail] = ACTIONS(7),
    [sym_number] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_POUNDt] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
    [anon_sym_macro] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_neg] = ACTIONS(51),
    [anon_sym_inv] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_cond] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_eval] = ACTIONS(51),
    [anon_sym_define] = ACTIONS(51),
    [anon_sym_list] = ACTIONS(51),
    [anon_sym_POUNDenv] = ACTIONS(51),
    [anon_sym_defun] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_head] = ACTIONS(51),
    [anon_sym_cons] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_tail] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [sym_dot] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_POUNDt] = ACTIONS(55),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_macro] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_neg] = ACTIONS(55),
    [anon_sym_inv] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_cond] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_eval] = ACTIONS(55),
    [anon_sym_define] = ACTIONS(55),
    [anon_sym_list] = ACTIONS(55),
    [anon_sym_POUNDenv] = ACTIONS(55),
    [anon_sym_defun] = ACTIONS(55),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_head] = ACTIONS(55),
    [anon_sym_cons] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(55),
    [anon_sym_and] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(55),
    [anon_sym_tail] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
    [sym_identifier] = ACTIONS(55),
    [sym_dot] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_POUNDt] = ACTIONS(59),
    [anon_sym_] = ACTIONS(59),
    [anon_sym_macro] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_neg] = ACTIONS(59),
    [anon_sym_inv] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_cond] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_eval] = ACTIONS(59),
    [anon_sym_define] = ACTIONS(59),
    [anon_sym_list] = ACTIONS(59),
    [anon_sym_POUNDenv] = ACTIONS(59),
    [anon_sym_defun] = ACTIONS(59),
    [anon_sym_not] = ACTIONS(59),
    [anon_sym_head] = ACTIONS(59),
    [anon_sym_cons] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_tail] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [sym_identifier] = ACTIONS(59),
    [sym_dot] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
  },
  [12] = {
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_POUNDt] = ACTIONS(63),
    [anon_sym_] = ACTIONS(63),
    [anon_sym_macro] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_neg] = ACTIONS(63),
    [anon_sym_inv] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_cond] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_eval] = ACTIONS(63),
    [anon_sym_define] = ACTIONS(63),
    [anon_sym_list] = ACTIONS(63),
    [anon_sym_POUNDenv] = ACTIONS(63),
    [anon_sym_defun] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_head] = ACTIONS(63),
    [anon_sym_cons] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_tail] = ACTIONS(63),
    [sym_number] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [sym_dot] = ACTIONS(65),
    [sym_comment] = ACTIONS(61),
  },
  [13] = {
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_POUNDt] = ACTIONS(63),
    [anon_sym_] = ACTIONS(63),
    [anon_sym_macro] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_neg] = ACTIONS(63),
    [anon_sym_inv] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_cond] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_eval] = ACTIONS(63),
    [anon_sym_define] = ACTIONS(63),
    [anon_sym_list] = ACTIONS(63),
    [anon_sym_POUNDenv] = ACTIONS(63),
    [anon_sym_defun] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_head] = ACTIONS(63),
    [anon_sym_cons] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_tail] = ACTIONS(63),
    [sym_number] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [sym_dot] = ACTIONS(67),
    [sym_comment] = ACTIONS(61),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
  [12] = 1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 4,
  [SMALL_STATE(16)] = 8,
  [SMALL_STATE(17)] = 12,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tinylisp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

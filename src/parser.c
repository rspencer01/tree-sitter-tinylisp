#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_ = 3,
  anon_sym_macro = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_eval = 6,
  anon_sym_define = 7,
  anon_sym_POUNDenv = 8,
  anon_sym_PLUS = 9,
  anon_sym_2 = 10,
  anon_sym_neg = 11,
  anon_sym_inv = 12,
  anon_sym_LT = 13,
  anon_sym_floor = 14,
  anon_sym_cond = 15,
  anon_sym_list = 16,
  anon_sym_defun = 17,
  anon_sym_cons = 18,
  anon_sym_apply = 19,
  anon_sym_not = 20,
  anon_sym_head = 21,
  anon_sym_tail = 22,
  anon_sym_DASH = 23,
  anon_sym_SLASH = 24,
  anon_sym_or = 25,
  anon_sym_and = 26,
  anon_sym_GT = 27,
  anon_sym_EQ = 28,
  anon_sym_abs = 29,
  anon_sym_each = 30,
  anon_sym_is_even = 31,
  anon_sym_is_odd = 32,
  sym_number = 33,
  sym_identifier = 34,
  sym_dot = 35,
  sym_comment = 36,
  sym_source_file = 37,
  sym_list = 38,
  sym__expression = 39,
  sym_builtin = 40,
  sym_slib = 41,
  aux_sym_list_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_] = "λ",
  [anon_sym_macro] = "macro",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_eval] = "eval",
  [anon_sym_define] = "define",
  [anon_sym_POUNDenv] = "#env",
  [anon_sym_PLUS] = "+",
  [anon_sym_2] = "×",
  [anon_sym_neg] = "neg",
  [anon_sym_inv] = "inv",
  [anon_sym_LT] = "<",
  [anon_sym_floor] = "floor",
  [anon_sym_cond] = "cond",
  [anon_sym_list] = "list",
  [anon_sym_defun] = "defun",
  [anon_sym_cons] = "cons",
  [anon_sym_apply] = "apply",
  [anon_sym_not] = "not",
  [anon_sym_head] = "head",
  [anon_sym_tail] = "tail",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_or] = "or₂",
  [anon_sym_and] = "and₂",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_abs] = "abs",
  [anon_sym_each] = "each",
  [anon_sym_is_even] = "is_even",
  [anon_sym_is_odd] = "is_odd",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_dot] = "dot",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_list] = "list",
  [sym__expression] = "_expression",
  [sym_builtin] = "builtin",
  [sym_slib] = "slib",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_] = anon_sym_,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_POUNDenv] = anon_sym_POUNDenv,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_inv] = anon_sym_inv,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_floor] = anon_sym_floor,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_defun] = anon_sym_defun,
  [anon_sym_cons] = anon_sym_cons,
  [anon_sym_apply] = anon_sym_apply,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_tail] = anon_sym_tail,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_abs] = anon_sym_abs,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_is_even] = anon_sym_is_even,
  [anon_sym_is_odd] = anon_sym_is_odd,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_dot] = sym_dot,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_list] = sym_list,
  [sym__expression] = sym__expression,
  [sym_builtin] = sym_builtin,
  [sym_slib] = sym_slib,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
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
  [anon_sym_POUNDenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
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
  [anon_sym_floor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apply] = {
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
  [anon_sym_tail] = {
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
  [anon_sym_abs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_even] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_odd] = {
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
  [sym_slib] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 215) ADVANCE(12);
      if (lookahead == 955) ADVANCE(5);
      if (lookahead == 63192) ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUNDenv);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_inv);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_floor);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
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
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_defun);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_cons);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_apply);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_tail);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_abs);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_each);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_is_even);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_is_odd);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == 8942) ADVANCE(1);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 8322) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 8322) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 8942) ADVANCE(95);
      END_STATE();
    case 96:
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
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_POUNDenv] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_inv] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_floor] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_defun] = ACTIONS(1),
    [anon_sym_cons] = ACTIONS(1),
    [anon_sym_apply] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_tail] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_abs] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_is_even] = ACTIONS(1),
    [anon_sym_is_odd] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_list] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(3),
  },
  [2] = {
    [sym_list] = STATE(13),
    [sym__expression] = STATE(13),
    [sym_builtin] = STATE(13),
    [sym_slib] = STATE(13),
    [aux_sym_list_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_floor] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(9),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_cons] = ACTIONS(9),
    [anon_sym_apply] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_tail] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_or] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_abs] = ACTIONS(9),
    [anon_sym_each] = ACTIONS(9),
    [anon_sym_is_even] = ACTIONS(9),
    [anon_sym_is_odd] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [sym_list] = STATE(14),
    [sym__expression] = STATE(14),
    [sym_builtin] = STATE(14),
    [sym_slib] = STATE(14),
    [aux_sym_list_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_floor] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(9),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_cons] = ACTIONS(9),
    [anon_sym_apply] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_tail] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_or] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_abs] = ACTIONS(9),
    [anon_sym_each] = ACTIONS(9),
    [anon_sym_is_even] = ACTIONS(9),
    [anon_sym_is_odd] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
  [4] = {
    [sym_list] = STATE(4),
    [sym__expression] = STATE(4),
    [sym_builtin] = STATE(4),
    [sym_slib] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_] = ACTIONS(26),
    [anon_sym_macro] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_eval] = ACTIONS(26),
    [anon_sym_define] = ACTIONS(26),
    [anon_sym_POUNDenv] = ACTIONS(26),
    [anon_sym_PLUS] = ACTIONS(26),
    [anon_sym_2] = ACTIONS(26),
    [anon_sym_neg] = ACTIONS(26),
    [anon_sym_inv] = ACTIONS(26),
    [anon_sym_LT] = ACTIONS(26),
    [anon_sym_floor] = ACTIONS(26),
    [anon_sym_cond] = ACTIONS(26),
    [anon_sym_list] = ACTIONS(29),
    [anon_sym_defun] = ACTIONS(29),
    [anon_sym_cons] = ACTIONS(29),
    [anon_sym_apply] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_head] = ACTIONS(29),
    [anon_sym_tail] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_abs] = ACTIONS(29),
    [anon_sym_each] = ACTIONS(29),
    [anon_sym_is_even] = ACTIONS(29),
    [anon_sym_is_odd] = ACTIONS(29),
    [sym_number] = ACTIONS(32),
    [sym_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [sym_list] = STATE(17),
    [sym__expression] = STATE(17),
    [sym_builtin] = STATE(17),
    [sym_slib] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_floor] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(9),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_cons] = ACTIONS(9),
    [anon_sym_apply] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_tail] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_or] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_abs] = ACTIONS(9),
    [anon_sym_each] = ACTIONS(9),
    [anon_sym_is_even] = ACTIONS(9),
    [anon_sym_is_odd] = ACTIONS(9),
    [sym_number] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [6] = {
    [sym_list] = STATE(18),
    [sym__expression] = STATE(18),
    [sym_builtin] = STATE(18),
    [sym_slib] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_macro] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_POUNDenv] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_neg] = ACTIONS(7),
    [anon_sym_inv] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_floor] = ACTIONS(7),
    [anon_sym_cond] = ACTIONS(7),
    [anon_sym_list] = ACTIONS(9),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_cons] = ACTIONS(9),
    [anon_sym_apply] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_tail] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_or] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_abs] = ACTIONS(9),
    [anon_sym_each] = ACTIONS(9),
    [anon_sym_is_even] = ACTIONS(9),
    [anon_sym_is_odd] = ACTIONS(9),
    [sym_number] = ACTIONS(42),
    [sym_identifier] = ACTIONS(42),
    [sym_comment] = ACTIONS(44),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_] = ACTIONS(48),
    [anon_sym_macro] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [anon_sym_eval] = ACTIONS(48),
    [anon_sym_define] = ACTIONS(48),
    [anon_sym_POUNDenv] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_2] = ACTIONS(48),
    [anon_sym_neg] = ACTIONS(48),
    [anon_sym_inv] = ACTIONS(48),
    [anon_sym_LT] = ACTIONS(48),
    [anon_sym_floor] = ACTIONS(48),
    [anon_sym_cond] = ACTIONS(48),
    [anon_sym_list] = ACTIONS(48),
    [anon_sym_defun] = ACTIONS(48),
    [anon_sym_cons] = ACTIONS(48),
    [anon_sym_apply] = ACTIONS(48),
    [anon_sym_not] = ACTIONS(48),
    [anon_sym_head] = ACTIONS(48),
    [anon_sym_tail] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_SLASH] = ACTIONS(48),
    [anon_sym_or] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(48),
    [anon_sym_GT] = ACTIONS(48),
    [anon_sym_EQ] = ACTIONS(48),
    [anon_sym_abs] = ACTIONS(48),
    [anon_sym_each] = ACTIONS(48),
    [anon_sym_is_even] = ACTIONS(48),
    [anon_sym_is_odd] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_identifier] = ACTIONS(48),
    [sym_dot] = ACTIONS(48),
    [sym_comment] = ACTIONS(46),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_] = ACTIONS(52),
    [anon_sym_macro] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_eval] = ACTIONS(52),
    [anon_sym_define] = ACTIONS(52),
    [anon_sym_POUNDenv] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_2] = ACTIONS(52),
    [anon_sym_neg] = ACTIONS(52),
    [anon_sym_inv] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(52),
    [anon_sym_floor] = ACTIONS(52),
    [anon_sym_cond] = ACTIONS(52),
    [anon_sym_list] = ACTIONS(52),
    [anon_sym_defun] = ACTIONS(52),
    [anon_sym_cons] = ACTIONS(52),
    [anon_sym_apply] = ACTIONS(52),
    [anon_sym_not] = ACTIONS(52),
    [anon_sym_head] = ACTIONS(52),
    [anon_sym_tail] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [anon_sym_SLASH] = ACTIONS(52),
    [anon_sym_or] = ACTIONS(52),
    [anon_sym_and] = ACTIONS(52),
    [anon_sym_GT] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_abs] = ACTIONS(52),
    [anon_sym_each] = ACTIONS(52),
    [anon_sym_is_even] = ACTIONS(52),
    [anon_sym_is_odd] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_identifier] = ACTIONS(52),
    [sym_dot] = ACTIONS(52),
    [sym_comment] = ACTIONS(50),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_] = ACTIONS(56),
    [anon_sym_macro] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_eval] = ACTIONS(56),
    [anon_sym_define] = ACTIONS(56),
    [anon_sym_POUNDenv] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(56),
    [anon_sym_2] = ACTIONS(56),
    [anon_sym_neg] = ACTIONS(56),
    [anon_sym_inv] = ACTIONS(56),
    [anon_sym_LT] = ACTIONS(56),
    [anon_sym_floor] = ACTIONS(56),
    [anon_sym_cond] = ACTIONS(56),
    [anon_sym_list] = ACTIONS(56),
    [anon_sym_defun] = ACTIONS(56),
    [anon_sym_cons] = ACTIONS(56),
    [anon_sym_apply] = ACTIONS(56),
    [anon_sym_not] = ACTIONS(56),
    [anon_sym_head] = ACTIONS(56),
    [anon_sym_tail] = ACTIONS(56),
    [anon_sym_DASH] = ACTIONS(56),
    [anon_sym_SLASH] = ACTIONS(56),
    [anon_sym_or] = ACTIONS(56),
    [anon_sym_and] = ACTIONS(56),
    [anon_sym_GT] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_abs] = ACTIONS(56),
    [anon_sym_each] = ACTIONS(56),
    [anon_sym_is_even] = ACTIONS(56),
    [anon_sym_is_odd] = ACTIONS(56),
    [sym_number] = ACTIONS(56),
    [sym_identifier] = ACTIONS(56),
    [sym_dot] = ACTIONS(56),
    [sym_comment] = ACTIONS(54),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_] = ACTIONS(60),
    [anon_sym_macro] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_eval] = ACTIONS(60),
    [anon_sym_define] = ACTIONS(60),
    [anon_sym_POUNDenv] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_2] = ACTIONS(60),
    [anon_sym_neg] = ACTIONS(60),
    [anon_sym_inv] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_floor] = ACTIONS(60),
    [anon_sym_cond] = ACTIONS(60),
    [anon_sym_list] = ACTIONS(60),
    [anon_sym_defun] = ACTIONS(60),
    [anon_sym_cons] = ACTIONS(60),
    [anon_sym_apply] = ACTIONS(60),
    [anon_sym_not] = ACTIONS(60),
    [anon_sym_head] = ACTIONS(60),
    [anon_sym_tail] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_or] = ACTIONS(60),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_abs] = ACTIONS(60),
    [anon_sym_each] = ACTIONS(60),
    [anon_sym_is_even] = ACTIONS(60),
    [anon_sym_is_odd] = ACTIONS(60),
    [sym_number] = ACTIONS(60),
    [sym_identifier] = ACTIONS(60),
    [sym_dot] = ACTIONS(60),
    [sym_comment] = ACTIONS(58),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_macro] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_eval] = ACTIONS(64),
    [anon_sym_define] = ACTIONS(64),
    [anon_sym_POUNDenv] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_2] = ACTIONS(64),
    [anon_sym_neg] = ACTIONS(64),
    [anon_sym_inv] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_floor] = ACTIONS(64),
    [anon_sym_cond] = ACTIONS(64),
    [anon_sym_list] = ACTIONS(64),
    [anon_sym_defun] = ACTIONS(64),
    [anon_sym_cons] = ACTIONS(64),
    [anon_sym_apply] = ACTIONS(64),
    [anon_sym_not] = ACTIONS(64),
    [anon_sym_head] = ACTIONS(64),
    [anon_sym_tail] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_or] = ACTIONS(64),
    [anon_sym_and] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_abs] = ACTIONS(64),
    [anon_sym_each] = ACTIONS(64),
    [anon_sym_is_even] = ACTIONS(64),
    [anon_sym_is_odd] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_identifier] = ACTIONS(64),
    [sym_dot] = ACTIONS(64),
    [sym_comment] = ACTIONS(62),
  },
  [12] = {
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_] = ACTIONS(68),
    [anon_sym_macro] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [anon_sym_eval] = ACTIONS(68),
    [anon_sym_define] = ACTIONS(68),
    [anon_sym_POUNDenv] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_2] = ACTIONS(68),
    [anon_sym_neg] = ACTIONS(68),
    [anon_sym_inv] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_floor] = ACTIONS(68),
    [anon_sym_cond] = ACTIONS(68),
    [anon_sym_list] = ACTIONS(68),
    [anon_sym_defun] = ACTIONS(68),
    [anon_sym_cons] = ACTIONS(68),
    [anon_sym_apply] = ACTIONS(68),
    [anon_sym_not] = ACTIONS(68),
    [anon_sym_head] = ACTIONS(68),
    [anon_sym_tail] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_or] = ACTIONS(68),
    [anon_sym_and] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_abs] = ACTIONS(68),
    [anon_sym_each] = ACTIONS(68),
    [anon_sym_is_even] = ACTIONS(68),
    [anon_sym_is_odd] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_identifier] = ACTIONS(68),
    [sym_dot] = ACTIONS(68),
    [sym_comment] = ACTIONS(66),
  },
  [13] = {
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_] = ACTIONS(72),
    [anon_sym_macro] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_eval] = ACTIONS(72),
    [anon_sym_define] = ACTIONS(72),
    [anon_sym_POUNDenv] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_neg] = ACTIONS(72),
    [anon_sym_inv] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_floor] = ACTIONS(72),
    [anon_sym_cond] = ACTIONS(72),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_defun] = ACTIONS(72),
    [anon_sym_cons] = ACTIONS(72),
    [anon_sym_apply] = ACTIONS(72),
    [anon_sym_not] = ACTIONS(72),
    [anon_sym_head] = ACTIONS(72),
    [anon_sym_tail] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_or] = ACTIONS(72),
    [anon_sym_and] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_abs] = ACTIONS(72),
    [anon_sym_each] = ACTIONS(72),
    [anon_sym_is_even] = ACTIONS(72),
    [anon_sym_is_odd] = ACTIONS(72),
    [sym_number] = ACTIONS(72),
    [sym_identifier] = ACTIONS(72),
    [sym_dot] = ACTIONS(74),
    [sym_comment] = ACTIONS(70),
  },
  [14] = {
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_] = ACTIONS(72),
    [anon_sym_macro] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_eval] = ACTIONS(72),
    [anon_sym_define] = ACTIONS(72),
    [anon_sym_POUNDenv] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_neg] = ACTIONS(72),
    [anon_sym_inv] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(72),
    [anon_sym_floor] = ACTIONS(72),
    [anon_sym_cond] = ACTIONS(72),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_defun] = ACTIONS(72),
    [anon_sym_cons] = ACTIONS(72),
    [anon_sym_apply] = ACTIONS(72),
    [anon_sym_not] = ACTIONS(72),
    [anon_sym_head] = ACTIONS(72),
    [anon_sym_tail] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_or] = ACTIONS(72),
    [anon_sym_and] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(72),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_abs] = ACTIONS(72),
    [anon_sym_each] = ACTIONS(72),
    [anon_sym_is_even] = ACTIONS(72),
    [anon_sym_is_odd] = ACTIONS(72),
    [sym_number] = ACTIONS(72),
    [sym_identifier] = ACTIONS(72),
    [sym_dot] = ACTIONS(76),
    [sym_comment] = ACTIONS(70),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
  [12] = 1,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 4,
  [SMALL_STATE(17)] = 8,
  [SMALL_STATE(18)] = 12,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 6),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slib, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slib, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

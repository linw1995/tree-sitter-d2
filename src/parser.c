#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 1
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym__word = 1,
  anon_sym_SEMI = 2,
  anon_sym_LF = 3,
  anon_sym_ = 4,
  anon_sym_COLON = 5,
  sym_dot = 6,
  anon_sym_direction = 7,
  anon_sym_2 = 8,
  sym__dash = 9,
  anon_sym_DASH_DASH = 10,
  anon_sym_LT_DASH = 11,
  anon_sym_GT = 12,
  anon_sym_DASH_GT = 13,
  sym__unquoted_string = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_string_token1 = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_BQUOTE = 18,
  sym_source_file = 19,
  sym__definition = 20,
  sym__end = 21,
  sym_attribute = 22,
  sym_connection = 23,
  sym_shape = 24,
  sym_label = 25,
  sym_identifier = 26,
  sym_keyword = 27,
  sym__identifier = 28,
  sym_arrow = 29,
  sym_string = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_attribute_repeat1 = 32,
  aux_sym_connection_repeat1 = 33,
  aux_sym_shape_repeat1 = 34,
  aux_sym__identifier_repeat1 = 35,
  aux_sym__identifier_repeat2 = 36,
  aux_sym_arrow_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
  alias_sym_attribute_value = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_] = " ",
  [anon_sym_COLON] = ":",
  [sym_dot] = "dot",
  [anon_sym_direction] = "direction",
  [anon_sym_2] = " ",
  [sym__dash] = "_dash",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__end] = "_end",
  [sym_attribute] = "attribute",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym__identifier] = "_identifier",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__identifier_repeat2] = "_identifier_repeat2",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_attribute_value] = "attribute_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_] = anon_sym_,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_dot] = sym_dot,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_2] = anon_sym_2,
  [sym__dash] = sym__dash,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__end] = sym__end,
  [sym_attribute] = sym_attribute,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym__identifier] = sym__identifier,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__identifier_repeat2] = aux_sym__identifier_repeat2,
  [aux_sym_arrow_repeat1] = aux_sym_arrow_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_attribute_value] = alias_sym_attribute_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_connection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_attribute_value,
  },
  [2] = {
    [3] = alias_sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_label, 2,
    sym_label,
    alias_sym_attribute_value,
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 7,
  [30] = 30,
  [31] = 6,
  [32] = 5,
  [33] = 14,
  [34] = 10,
  [35] = 35,
  [36] = 36,
  [37] = 18,
  [38] = 13,
  [39] = 16,
  [40] = 15,
  [41] = 17,
  [42] = 23,
  [43] = 12,
  [44] = 44,
  [45] = 27,
  [46] = 11,
  [47] = 8,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 66,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 9,
  [77] = 77,
  [78] = 78,
  [79] = 74,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 67,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 85,
  [103] = 94,
  [104] = 94,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 106,
  [111] = 107,
  [112] = 112,
  [113] = 112,
  [114] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '`') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(37);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(37);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'i') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(114),
    [sym__definition] = STATE(3),
    [sym_attribute] = STATE(3),
    [sym_connection] = STATE(3),
    [sym_shape] = STATE(3),
    [sym_identifier] = STATE(2),
    [sym_keyword] = STATE(91),
    [sym__identifier] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__identifier_repeat1] = STATE(66),
    [aux_sym__identifier_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [anon_sym_direction] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      anon_sym_COLON,
    ACTIONS(19), 1,
      sym_dot,
    ACTIONS(21), 1,
      sym__dash,
    ACTIONS(23), 1,
      anon_sym_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LT_DASH,
    ACTIONS(27), 1,
      anon_sym_DASH_GT,
    STATE(19), 1,
      aux_sym_connection_repeat1,
    STATE(49), 1,
      sym_arrow,
    STATE(50), 1,
      aux_sym_shape_repeat1,
    STATE(71), 1,
      sym__end,
    STATE(83), 1,
      aux_sym_arrow_repeat1,
    STATE(97), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(13), 2,
      anon_sym_SEMI,
      anon_sym_,
  [44] = 11,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      anon_sym_direction,
    ACTIONS(9), 1,
      anon_sym_2,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
    STATE(91), 1,
      sym_keyword,
    STATE(4), 5,
      sym__definition,
      sym_attribute,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [82] = 11,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__word,
    ACTIONS(36), 1,
      anon_sym_direction,
    ACTIONS(39), 1,
      anon_sym_2,
    ACTIONS(42), 1,
      sym__dash,
    STATE(2), 1,
      sym_identifier,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
    STATE(91), 1,
      sym_keyword,
    STATE(4), 5,
      sym__definition,
      sym_attribute,
      sym_connection,
      sym_shape,
      aux_sym_source_file_repeat1,
  [120] = 6,
    ACTIONS(45), 1,
      sym__word,
    ACTIONS(49), 1,
      anon_sym_2,
    ACTIONS(51), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [146] = 6,
    ACTIONS(45), 1,
      sym__word,
    ACTIONS(55), 1,
      anon_sym_2,
    ACTIONS(57), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(53), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [172] = 6,
    ACTIONS(45), 1,
      sym__word,
    ACTIONS(61), 1,
      anon_sym_2,
    ACTIONS(63), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [198] = 4,
    ACTIONS(65), 1,
      sym__word,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [219] = 3,
    ACTIONS(73), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 10,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [238] = 5,
    ACTIONS(76), 1,
      sym__word,
    ACTIONS(78), 1,
      anon_sym_2,
    ACTIONS(80), 1,
      sym__dash,
    STATE(17), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(53), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [261] = 4,
    ACTIONS(65), 1,
      sym__word,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [282] = 4,
    ACTIONS(49), 1,
      anon_sym_2,
    ACTIONS(65), 1,
      sym__word,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [303] = 3,
    ACTIONS(82), 1,
      sym__word,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(85), 10,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_2,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [322] = 5,
    ACTIONS(76), 1,
      sym__word,
    ACTIONS(87), 1,
      anon_sym_2,
    ACTIONS(89), 1,
      sym__dash,
    STATE(11), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [345] = 4,
    ACTIONS(61), 1,
      anon_sym_2,
    ACTIONS(65), 1,
      sym__word,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [366] = 4,
    ACTIONS(65), 1,
      sym__word,
    ACTIONS(91), 1,
      anon_sym_2,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [387] = 4,
    ACTIONS(65), 1,
      sym__word,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [408] = 5,
    ACTIONS(76), 1,
      sym__word,
    ACTIONS(93), 1,
      anon_sym_2,
    ACTIONS(95), 1,
      sym__dash,
    STATE(8), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 8,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [431] = 10,
    ACTIONS(21), 1,
      sym__dash,
    ACTIONS(23), 1,
      anon_sym_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LT_DASH,
    ACTIONS(27), 1,
      anon_sym_DASH_GT,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(60), 1,
      sym__end,
    STATE(83), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(97), 2,
      anon_sym_SEMI,
      anon_sym_,
  [463] = 3,
    ACTIONS(61), 1,
      anon_sym_2,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [481] = 3,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(101), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [499] = 3,
    ACTIONS(91), 1,
      anon_sym_2,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [517] = 1,
    ACTIONS(103), 11,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_2,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [531] = 3,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [549] = 3,
    ACTIONS(49), 1,
      anon_sym_2,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [567] = 3,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [585] = 1,
    ACTIONS(85), 11,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_2,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [599] = 3,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 9,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [617] = 6,
    ACTIONS(61), 1,
      anon_sym_2,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(107), 1,
      sym__dash,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [640] = 9,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 1,
      sym__dash,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH,
    ACTIONS(119), 1,
      anon_sym_LT_DASH,
    ACTIONS(122), 1,
      anon_sym_DASH_GT,
    STATE(30), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(83), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(109), 2,
      anon_sym_SEMI,
      anon_sym_,
  [669] = 6,
    ACTIONS(55), 1,
      anon_sym_2,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(125), 1,
      sym__dash,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(53), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [692] = 6,
    ACTIONS(49), 1,
      anon_sym_2,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(127), 1,
      sym__dash,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(47), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [715] = 5,
    ACTIONS(129), 1,
      sym__word,
    ACTIONS(131), 1,
      anon_sym_2,
    ACTIONS(133), 1,
      sym__dash,
    STATE(46), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [735] = 5,
    ACTIONS(129), 1,
      sym__word,
    ACTIONS(135), 1,
      anon_sym_2,
    ACTIONS(137), 1,
      sym__dash,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(53), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [755] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(139), 8,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [769] = 9,
    ACTIONS(7), 1,
      anon_sym_direction,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(145), 1,
      anon_sym_2,
    ACTIONS(147), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
    STATE(108), 1,
      sym_keyword,
  [797] = 5,
    ACTIONS(129), 1,
      sym__word,
    ACTIONS(149), 1,
      anon_sym_2,
    ACTIONS(151), 1,
      sym__dash,
    STATE(47), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [817] = 4,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(156), 1,
      sym__dash,
    STATE(38), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(85), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_2,
  [835] = 4,
    ACTIONS(91), 1,
      anon_sym_2,
    ACTIONS(158), 1,
      sym__word,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [852] = 4,
    ACTIONS(61), 1,
      anon_sym_2,
    ACTIONS(158), 1,
      sym__word,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [869] = 4,
    ACTIONS(69), 1,
      anon_sym_2,
    ACTIONS(158), 1,
      sym__word,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(59), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [886] = 2,
    ACTIONS(160), 1,
      sym__dash,
    ACTIONS(103), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_2,
      sym__word,
  [899] = 4,
    ACTIONS(49), 1,
      anon_sym_2,
    ACTIONS(158), 1,
      sym__word,
    STATE(26), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [916] = 3,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      anon_sym_COLON,
    ACTIONS(109), 6,
      anon_sym_SEMI,
      anon_sym_,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [931] = 2,
    ACTIONS(156), 1,
      sym__dash,
    ACTIONS(85), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_2,
      sym__word,
  [944] = 4,
    ACTIONS(69), 1,
      anon_sym_2,
    ACTIONS(158), 1,
      sym__word,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(47), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [961] = 4,
    ACTIONS(69), 1,
      anon_sym_2,
    ACTIONS(158), 1,
      sym__word,
    STATE(9), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(67), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [978] = 2,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(109), 6,
      anon_sym_SEMI,
      anon_sym_,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
  [990] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_2,
    ACTIONS(11), 1,
      sym__dash,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(44), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1012] = 6,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      sym_dot,
    STATE(53), 1,
      aux_sym_shape_repeat1,
    STATE(63), 1,
      sym__end,
    ACTIONS(164), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1032] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_2,
    ACTIONS(11), 1,
      sym__dash,
    STATE(6), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(48), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1054] = 7,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(145), 1,
      anon_sym_2,
    ACTIONS(147), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1076] = 4,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      sym_dot,
    STATE(53), 1,
      aux_sym_shape_repeat1,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COLON,
  [1091] = 6,
    ACTIONS(179), 1,
      sym__unquoted_string,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    STATE(82), 1,
      sym_label,
    STATE(101), 1,
      sym_string,
  [1110] = 6,
    ACTIONS(179), 1,
      sym__unquoted_string,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    STATE(77), 1,
      sym_label,
    STATE(101), 1,
      sym_string,
  [1129] = 6,
    ACTIONS(179), 1,
      sym__unquoted_string,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    STATE(73), 1,
      sym_label,
    STATE(101), 1,
      sym_string,
  [1148] = 6,
    ACTIONS(179), 1,
      sym__unquoted_string,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    STATE(75), 1,
      sym_label,
    STATE(101), 1,
      sym_string,
  [1167] = 6,
    ACTIONS(179), 1,
      sym__unquoted_string,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      anon_sym_BQUOTE,
    STATE(80), 1,
      sym_label,
    STATE(101), 1,
      sym_string,
  [1186] = 2,
    ACTIONS(189), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1196] = 2,
    ACTIONS(193), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1206] = 4,
    ACTIONS(195), 1,
      sym__word,
    ACTIONS(199), 1,
      anon_sym_GT,
    STATE(62), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(197), 2,
      anon_sym_2,
      sym__dash,
  [1220] = 4,
    ACTIONS(201), 1,
      sym__word,
    ACTIONS(205), 1,
      anon_sym_GT,
    STATE(67), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(203), 2,
      anon_sym_2,
      sym__dash,
  [1234] = 2,
    ACTIONS(209), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1244] = 2,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
  [1254] = 2,
    ACTIONS(213), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1264] = 5,
    ACTIONS(215), 1,
      sym__word,
    ACTIONS(217), 1,
      anon_sym_2,
    ACTIONS(219), 1,
      sym__dash,
    STATE(7), 1,
      aux_sym__identifier_repeat2,
    STATE(76), 1,
      aux_sym__identifier_repeat1,
  [1280] = 4,
    ACTIONS(223), 1,
      anon_sym_2,
    ACTIONS(225), 1,
      sym__dash,
    STATE(67), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(221), 2,
      sym__word,
      anon_sym_GT,
  [1294] = 2,
    ACTIONS(230), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1304] = 5,
    ACTIONS(217), 1,
      anon_sym_2,
    ACTIONS(232), 1,
      sym__word,
    ACTIONS(234), 1,
      sym__dash,
    STATE(29), 1,
      aux_sym__identifier_repeat2,
    STATE(76), 1,
      aux_sym__identifier_repeat1,
  [1320] = 2,
    ACTIONS(238), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1330] = 2,
    ACTIONS(242), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1340] = 2,
    ACTIONS(246), 2,
      anon_sym_direction,
      sym__word,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_2,
      sym__dash,
  [1350] = 3,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym__end,
    ACTIONS(248), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1361] = 4,
    ACTIONS(76), 1,
      sym__word,
    ACTIONS(252), 1,
      anon_sym_2,
    ACTIONS(254), 1,
      sym__dash,
    STATE(85), 1,
      aux_sym__identifier_repeat1,
  [1374] = 3,
    ACTIONS(258), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__end,
    ACTIONS(256), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1385] = 4,
    ACTIONS(71), 1,
      sym__word,
    ACTIONS(260), 1,
      anon_sym_2,
    ACTIONS(263), 1,
      sym__dash,
    STATE(76), 1,
      aux_sym__identifier_repeat1,
  [1398] = 3,
    ACTIONS(267), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym__end,
    ACTIONS(265), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1409] = 3,
    ACTIONS(201), 1,
      sym__word,
    STATE(67), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(203), 2,
      anon_sym_2,
      sym__dash,
  [1420] = 4,
    ACTIONS(129), 1,
      sym__word,
    ACTIONS(269), 1,
      anon_sym_2,
    ACTIONS(271), 1,
      sym__dash,
    STATE(102), 1,
      aux_sym__identifier_repeat1,
  [1433] = 3,
    ACTIONS(275), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym__end,
    ACTIONS(273), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1444] = 3,
    ACTIONS(195), 1,
      sym__word,
    STATE(78), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(197), 2,
      anon_sym_2,
      sym__dash,
  [1455] = 3,
    ACTIONS(279), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym__end,
    ACTIONS(277), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1466] = 3,
    ACTIONS(281), 1,
      sym__dash,
    ACTIONS(283), 1,
      anon_sym_DASH_GT,
    STATE(86), 1,
      aux_sym_arrow_repeat1,
  [1476] = 2,
    ACTIONS(195), 1,
      sym__word,
    ACTIONS(197), 2,
      anon_sym_2,
      sym__dash,
  [1484] = 3,
    ACTIONS(65), 1,
      sym__word,
    ACTIONS(217), 1,
      anon_sym_2,
    STATE(76), 1,
      aux_sym__identifier_repeat1,
  [1494] = 3,
    ACTIONS(223), 1,
      anon_sym_DASH_GT,
    ACTIONS(285), 1,
      sym__dash,
    STATE(86), 1,
      aux_sym_arrow_repeat1,
  [1504] = 2,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(288), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1512] = 3,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      aux_sym_string_token1,
    STATE(103), 1,
      aux_sym_string_repeat1,
  [1522] = 3,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      aux_sym_string_token1,
    STATE(104), 1,
      aux_sym_string_repeat1,
  [1532] = 3,
    ACTIONS(292), 1,
      anon_sym_BQUOTE,
    ACTIONS(298), 1,
      aux_sym_string_token1,
    STATE(94), 1,
      aux_sym_string_repeat1,
  [1542] = 3,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(302), 1,
      sym_dot,
    STATE(97), 1,
      aux_sym_attribute_repeat1,
  [1552] = 2,
    ACTIONS(304), 1,
      sym__word,
    ACTIONS(306), 2,
      anon_sym_2,
      sym__dash,
  [1560] = 2,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(308), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1568] = 3,
    ACTIONS(312), 1,
      aux_sym_string_token1,
    ACTIONS(315), 1,
      anon_sym_BQUOTE,
    STATE(94), 1,
      aux_sym_string_repeat1,
  [1578] = 3,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      sym_dot,
    STATE(95), 1,
      aux_sym_attribute_repeat1,
  [1588] = 2,
    ACTIONS(201), 1,
      sym__word,
    ACTIONS(203), 2,
      anon_sym_2,
      sym__dash,
  [1596] = 3,
    ACTIONS(302), 1,
      sym_dot,
    ACTIONS(322), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym_attribute_repeat1,
  [1606] = 3,
    ACTIONS(324), 1,
      aux_sym_string_token1,
    ACTIONS(326), 1,
      anon_sym_BQUOTE,
    STATE(90), 1,
      aux_sym_string_repeat1,
  [1616] = 3,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [1626] = 3,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_string_token1,
    STATE(88), 1,
      aux_sym_string_repeat1,
  [1636] = 2,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(332), 2,
      anon_sym_SEMI,
      anon_sym_,
  [1644] = 3,
    ACTIONS(158), 1,
      sym__word,
    ACTIONS(217), 1,
      anon_sym_2,
    STATE(76), 1,
      aux_sym__identifier_repeat1,
  [1654] = 3,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    ACTIONS(336), 1,
      aux_sym_string_token1,
    STATE(103), 1,
      aux_sym_string_repeat1,
  [1664] = 3,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      aux_sym_string_token1,
    STATE(104), 1,
      aux_sym_string_repeat1,
  [1674] = 2,
    ACTIONS(342), 1,
      anon_sym_direction,
    STATE(108), 1,
      sym_keyword,
  [1681] = 2,
    ACTIONS(344), 1,
      sym__word,
    STATE(5), 1,
      aux_sym__identifier_repeat2,
  [1688] = 2,
    ACTIONS(346), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__identifier_repeat2,
  [1695] = 1,
    ACTIONS(317), 2,
      anon_sym_COLON,
      sym_dot,
  [1700] = 1,
    ACTIONS(348), 2,
      anon_sym_COLON,
      sym_dot,
  [1705] = 2,
    ACTIONS(350), 1,
      sym__word,
    STATE(32), 1,
      aux_sym__identifier_repeat2,
  [1712] = 2,
    ACTIONS(352), 1,
      sym__word,
    STATE(7), 1,
      aux_sym__identifier_repeat2,
  [1719] = 1,
    ACTIONS(354), 1,
      sym__word,
  [1723] = 1,
    ACTIONS(356), 1,
      sym__word,
  [1727] = 1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 303,
  [SMALL_STATE(14)] = 322,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 431,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 517,
  [SMALL_STATE(24)] = 531,
  [SMALL_STATE(25)] = 549,
  [SMALL_STATE(26)] = 567,
  [SMALL_STATE(27)] = 585,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 617,
  [SMALL_STATE(30)] = 640,
  [SMALL_STATE(31)] = 669,
  [SMALL_STATE(32)] = 692,
  [SMALL_STATE(33)] = 715,
  [SMALL_STATE(34)] = 735,
  [SMALL_STATE(35)] = 755,
  [SMALL_STATE(36)] = 769,
  [SMALL_STATE(37)] = 797,
  [SMALL_STATE(38)] = 817,
  [SMALL_STATE(39)] = 835,
  [SMALL_STATE(40)] = 852,
  [SMALL_STATE(41)] = 869,
  [SMALL_STATE(42)] = 886,
  [SMALL_STATE(43)] = 899,
  [SMALL_STATE(44)] = 916,
  [SMALL_STATE(45)] = 931,
  [SMALL_STATE(46)] = 944,
  [SMALL_STATE(47)] = 961,
  [SMALL_STATE(48)] = 978,
  [SMALL_STATE(49)] = 990,
  [SMALL_STATE(50)] = 1012,
  [SMALL_STATE(51)] = 1032,
  [SMALL_STATE(52)] = 1054,
  [SMALL_STATE(53)] = 1076,
  [SMALL_STATE(54)] = 1091,
  [SMALL_STATE(55)] = 1110,
  [SMALL_STATE(56)] = 1129,
  [SMALL_STATE(57)] = 1148,
  [SMALL_STATE(58)] = 1167,
  [SMALL_STATE(59)] = 1186,
  [SMALL_STATE(60)] = 1196,
  [SMALL_STATE(61)] = 1206,
  [SMALL_STATE(62)] = 1220,
  [SMALL_STATE(63)] = 1234,
  [SMALL_STATE(64)] = 1244,
  [SMALL_STATE(65)] = 1254,
  [SMALL_STATE(66)] = 1264,
  [SMALL_STATE(67)] = 1280,
  [SMALL_STATE(68)] = 1294,
  [SMALL_STATE(69)] = 1304,
  [SMALL_STATE(70)] = 1320,
  [SMALL_STATE(71)] = 1330,
  [SMALL_STATE(72)] = 1340,
  [SMALL_STATE(73)] = 1350,
  [SMALL_STATE(74)] = 1361,
  [SMALL_STATE(75)] = 1374,
  [SMALL_STATE(76)] = 1385,
  [SMALL_STATE(77)] = 1398,
  [SMALL_STATE(78)] = 1409,
  [SMALL_STATE(79)] = 1420,
  [SMALL_STATE(80)] = 1433,
  [SMALL_STATE(81)] = 1444,
  [SMALL_STATE(82)] = 1455,
  [SMALL_STATE(83)] = 1466,
  [SMALL_STATE(84)] = 1476,
  [SMALL_STATE(85)] = 1484,
  [SMALL_STATE(86)] = 1494,
  [SMALL_STATE(87)] = 1504,
  [SMALL_STATE(88)] = 1512,
  [SMALL_STATE(89)] = 1522,
  [SMALL_STATE(90)] = 1532,
  [SMALL_STATE(91)] = 1542,
  [SMALL_STATE(92)] = 1552,
  [SMALL_STATE(93)] = 1560,
  [SMALL_STATE(94)] = 1568,
  [SMALL_STATE(95)] = 1578,
  [SMALL_STATE(96)] = 1588,
  [SMALL_STATE(97)] = 1596,
  [SMALL_STATE(98)] = 1606,
  [SMALL_STATE(99)] = 1616,
  [SMALL_STATE(100)] = 1626,
  [SMALL_STATE(101)] = 1636,
  [SMALL_STATE(102)] = 1644,
  [SMALL_STATE(103)] = 1654,
  [SMALL_STATE(104)] = 1664,
  [SMALL_STATE(105)] = 1674,
  [SMALL_STATE(106)] = 1681,
  [SMALL_STATE(107)] = 1688,
  [SMALL_STATE(108)] = 1695,
  [SMALL_STATE(109)] = 1700,
  [SMALL_STATE(110)] = 1705,
  [SMALL_STATE(111)] = 1712,
  [SMALL_STATE(112)] = 1719,
  [SMALL_STATE(113)] = 1723,
  [SMALL_STATE(114)] = 1727,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(74),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(83),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(81),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(61),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(84),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(79),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(52),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(67),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5, .production_id = 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5, .production_id = 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(76),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(86),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(94),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(105),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(103),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(104),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_d2(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

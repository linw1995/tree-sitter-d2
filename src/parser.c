#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  sym__word = 1,
  aux_sym_shape_key_token1 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym__dash = 5,
  sym__root_attr_key = 6,
  anon_sym_style = 7,
  anon_sym_shape = 8,
  anon_sym_label = 9,
  anon_sym_constraint = 10,
  anon_sym_icon = 11,
  anon_sym_width = 12,
  anon_sym_height = 13,
  anon_sym_opacity = 14,
  anon_sym_fill = 15,
  anon_sym_stroke = 16,
  anon_sym_shadow = 17,
  anon_sym_multiple = 18,
  anon_sym_animated = 19,
  anon_sym_3d = 20,
  anon_sym_link = 21,
  sym__text_attr_key = 22,
  anon_sym_COLON = 23,
  aux_sym_arrow_token3 = 24,
  aux_sym_arrow_token4 = 25,
  sym_dot = 26,
  sym__unquoted_string = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_string_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_string_token2 = 31,
  anon_sym_BQUOTE = 32,
  aux_sym_string_token3 = 33,
  sym_line_comment = 34,
  anon_sym_LF = 35,
  anon_sym_ = 36,
  anon_sym_SEMI = 37,
  sym_source_file = 38,
  sym__new_root_definition = 39,
  sym_container = 40,
  sym_shape = 41,
  sym_shape_key = 42,
  sym__new_shape_block = 43,
  sym__new_shape_block_definition = 44,
  sym__new_container_block = 45,
  sym__new_container_block_definition = 46,
  sym_label = 47,
  sym__colon = 48,
  sym__dot = 49,
  sym_string = 50,
  sym__eol = 51,
  sym__end = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym__new_shape_block_repeat1 = 54,
  aux_sym__new_container_block_repeat1 = 55,
  aux_sym_string_repeat1 = 56,
  aux_sym_string_repeat2 = 57,
  aux_sym_string_repeat3 = 58,
  alias_sym_container_key = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [aux_sym_shape_key_token1] = "shape_key_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__dash] = "_dash",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_style] = "attr_key",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_stroke] = "stroke",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_3d] = "3d",
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "_text_attr_key",
  [anon_sym_COLON] = ":",
  [aux_sym_arrow_token3] = "arrow_token3",
  [aux_sym_arrow_token4] = "arrow_token4",
  [sym_dot] = "dot",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [sym_line_comment] = "line_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_] = " ",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__new_root_definition] = "_new_root_definition",
  [sym_container] = "container",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__new_shape_block] = "block",
  [sym__new_shape_block_definition] = "_new_shape_block_definition",
  [sym__new_container_block] = "block",
  [sym__new_container_block_definition] = "_new_container_block_definition",
  [sym_label] = "label",
  [sym__colon] = "_colon",
  [sym__dot] = "_dot",
  [sym_string] = "string",
  [sym__eol] = "_eol",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__new_shape_block_repeat1] = "_new_shape_block_repeat1",
  [aux_sym__new_container_block_repeat1] = "_new_container_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [aux_sym_shape_key_token1] = aux_sym_shape_key_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__dash] = sym__dash,
  [sym__root_attr_key] = sym__root_attr_key,
  [anon_sym_style] = sym__root_attr_key,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_arrow_token3] = aux_sym_arrow_token3,
  [aux_sym_arrow_token4] = aux_sym_arrow_token4,
  [sym_dot] = sym_dot,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_] = anon_sym_,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__new_root_definition] = sym__new_root_definition,
  [sym_container] = sym_container,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__new_shape_block] = sym__new_shape_block,
  [sym__new_shape_block_definition] = sym__new_shape_block_definition,
  [sym__new_container_block] = sym__new_shape_block,
  [sym__new_container_block_definition] = sym__new_container_block_definition,
  [sym_label] = sym_label,
  [sym__colon] = sym__colon,
  [sym__dot] = sym__dot,
  [sym_string] = sym_string,
  [sym__eol] = sym__eol,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__new_shape_block_repeat1] = aux_sym__new_shape_block_repeat1,
  [aux_sym__new_container_block_repeat1] = aux_sym__new_container_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
  [alias_sym_container_key] = alias_sym_container_key,
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
  [aux_sym_shape_key_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arrow_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
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
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__new_root_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_container] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_key] = {
    .visible = true,
    .named = true,
  },
  [sym__new_shape_block] = {
    .visible = true,
    .named = true,
  },
  [sym__new_shape_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__new_container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__new_container_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__new_shape_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__new_container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_container_key] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_container_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 2,
    sym_shape_key,
    alias_sym_container_key,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 21,
  [23] = 15,
  [24] = 24,
  [25] = 16,
  [26] = 18,
  [27] = 27,
  [28] = 19,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 34,
  [43] = 33,
  [44] = 44,
  [45] = 44,
  [46] = 37,
  [47] = 41,
  [48] = 40,
  [49] = 39,
  [50] = 38,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 35,
  [55] = 51,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 15,
  [62] = 21,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 65,
  [68] = 64,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 69,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 75,
  [81] = 79,
  [82] = 76,
  [83] = 78,
  [84] = 84,
  [85] = 77,
  [86] = 86,
  [87] = 86,
  [88] = 86,
  [89] = 89,
};

static inline bool aux_sym_string_token2_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\f')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool anon_sym__character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '{') ADVANCE(19);
      if (anon_sym__character_set_1(lookahead)) SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(35);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '`') ADVANCE(36);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(30);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 10:
      if (eof) ADVANCE(14);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_shape_key_token1);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_shape_key_token1);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_shape_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_shape_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_arrow_token3);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_arrow_token4);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(32);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(35);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '#') ADVANCE(38);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8232 ||
          lookahead == 8233 ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_stroke);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__root_attr_key);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_arrow_token3] = ACTIONS(1),
    [aux_sym_arrow_token4] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(89),
    [sym__new_root_definition] = STATE(10),
    [sym_container] = STATE(10),
    [sym_shape] = STATE(10),
    [sym_shape_key] = STATE(2),
    [sym_string] = STATE(28),
    [sym__eol] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [aux_sym_shape_key_token1] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym__word,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      sym_dot,
    STATE(6), 1,
      sym__colon,
    STATE(46), 1,
      sym__eol,
    STATE(53), 1,
      sym__end,
    STATE(54), 1,
      sym__dot,
    STATE(55), 1,
      sym__new_container_block,
    STATE(67), 1,
      sym__new_shape_block,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [47] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      sym__word,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_COLON,
    ACTIONS(37), 1,
      sym_dot,
    STATE(4), 1,
      sym__colon,
    STATE(35), 1,
      sym__dot,
    STATE(37), 1,
      sym__eol,
    STATE(51), 1,
      sym__new_container_block,
    STATE(52), 1,
      sym__end,
    STATE(65), 1,
      sym__new_shape_block,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
    ACTIONS(21), 6,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [94] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym__unquoted_string,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    STATE(13), 1,
      sym_label,
    STATE(30), 1,
      sym_string,
    STATE(37), 1,
      sym__eol,
    STATE(48), 1,
      sym__new_container_block,
    STATE(50), 1,
      sym__end,
    STATE(63), 1,
      sym__new_shape_block,
    ACTIONS(41), 2,
      sym__dash,
      sym__word,
    ACTIONS(43), 2,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [144] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      aux_sym_shape_key_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym__dash,
    STATE(3), 1,
      sym_shape_key,
    STATE(19), 1,
      sym_string,
    STATE(36), 1,
      sym__eol,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(60), 2,
      sym__new_shape_block_definition,
      aux_sym__new_shape_block_repeat1,
    STATE(12), 4,
      sym_container,
      sym_shape,
      sym__new_container_block_definition,
      aux_sym__new_container_block_repeat1,
  [192] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__unquoted_string,
    STATE(14), 1,
      sym_label,
    STATE(29), 1,
      sym_string,
    STATE(38), 1,
      sym__end,
    STATE(40), 1,
      sym__new_container_block,
    STATE(46), 1,
      sym__eol,
    STATE(66), 1,
      sym__new_shape_block,
    ACTIONS(41), 2,
      sym__dash,
      sym__word,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [242] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      aux_sym_shape_key_token1,
    ACTIONS(59), 1,
      sym__dash,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_shape_key,
    STATE(19), 1,
      sym_string,
    STATE(36), 1,
      sym__eol,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(60), 2,
      sym__new_shape_block_definition,
      aux_sym__new_shape_block_repeat1,
    STATE(8), 4,
      sym_container,
      sym_shape,
      sym__new_container_block_definition,
      aux_sym__new_container_block_repeat1,
  [290] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      aux_sym_shape_key_token1,
    ACTIONS(59), 1,
      sym__dash,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_shape_key,
    STATE(19), 1,
      sym_string,
    ACTIONS(69), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(9), 5,
      sym_container,
      sym_shape,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
  [332] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      sym__word,
    ACTIONS(74), 1,
      aux_sym_shape_key_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym__dash,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_BQUOTE,
    STATE(3), 1,
      sym_shape_key,
    STATE(19), 1,
      sym_string,
    ACTIONS(91), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(9), 5,
      sym_container,
      sym_shape,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
  [374] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(9), 1,
      aux_sym_shape_key_token1,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    ACTIONS(96), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(11), 5,
      sym__new_root_definition,
      sym_container,
      sym_shape,
      sym__eol,
      aux_sym_source_file_repeat1,
  [416] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__word,
    ACTIONS(103), 1,
      aux_sym_shape_key_token1,
    ACTIONS(106), 1,
      sym__dash,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_BQUOTE,
    STATE(2), 1,
      sym_shape_key,
    STATE(28), 1,
      sym_string,
    ACTIONS(118), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(11), 5,
      sym__new_root_definition,
      sym_container,
      sym_shape,
      sym__eol,
      aux_sym_source_file_repeat1,
  [458] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      aux_sym_shape_key_token1,
    ACTIONS(59), 1,
      sym__dash,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_shape_key,
    STATE(19), 1,
      sym_string,
    ACTIONS(69), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(9), 5,
      sym_container,
      sym_shape,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
  [500] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      sym__word,
    STATE(37), 1,
      sym__eol,
    STATE(42), 1,
      sym__new_container_block,
    STATE(43), 1,
      sym__end,
    STATE(68), 1,
      sym__new_shape_block,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
    ACTIONS(125), 6,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [535] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      sym__word,
    STATE(33), 1,
      sym__end,
    STATE(34), 1,
      sym__new_container_block,
    STATE(46), 1,
      sym__eol,
    STATE(64), 1,
      sym__new_shape_block,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(129), 12,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [591] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(133), 12,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [612] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym__word,
    ACTIONS(137), 12,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [633] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym__unquoted_string,
    STATE(29), 1,
      sym_string,
    STATE(37), 1,
      sym__eol,
    STATE(50), 1,
      sym__end,
    STATE(57), 1,
      sym_label,
    STATE(63), 1,
      sym__new_shape_block,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [672] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(145), 12,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [693] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym__word,
    ACTIONS(137), 12,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(145), 12,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [735] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(145), 12,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [756] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(129), 12,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [777] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      sym__word,
    ACTIONS(147), 12,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(133), 12,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [819] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym__unquoted_string,
    STATE(29), 1,
      sym_string,
    STATE(38), 1,
      sym__end,
    STATE(46), 1,
      sym__eol,
    STATE(56), 1,
      sym_label,
    STATE(66), 1,
      sym__new_shape_block,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [858] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(129), 12,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [879] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      sym__word,
    ACTIONS(145), 12,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_COLON,
      sym_dot,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [900] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(151), 10,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [919] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      sym__word,
    ACTIONS(151), 10,
      aux_sym_shape_key_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [938] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      sym__word,
    ACTIONS(159), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
    ACTIONS(157), 6,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [958] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      sym__word,
    ACTIONS(159), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [978] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      sym__word,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [995] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym__word,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1012] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      sym__word,
    ACTIONS(171), 1,
      aux_sym_shape_key_token1,
    ACTIONS(173), 1,
      sym__dash,
    STATE(28), 1,
      sym_string,
    STATE(47), 1,
      sym_shape_key,
    STATE(48), 1,
      sym_shape,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      sym__word,
    ACTIONS(179), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_,
    ACTIONS(177), 5,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      sym__word,
    ACTIONS(183), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1079] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym__word,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1096] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(191), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      sym__word,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1130] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym__colon,
    STATE(46), 1,
      sym__eol,
    STATE(53), 1,
      sym__end,
    STATE(67), 1,
      sym__new_shape_block,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym__word,
    ACTIONS(165), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      sym__word,
    ACTIONS(161), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1191] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      sym__word,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1208] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      sym__word,
    ACTIONS(195), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      sym__word,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1242] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym__colon,
    STATE(37), 1,
      sym__eol,
    STATE(52), 1,
      sym__end,
    STATE(65), 1,
      sym__new_shape_block,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      sym__word,
    ACTIONS(125), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1286] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      sym__word,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1303] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      sym__word,
    ACTIONS(185), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1320] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym__word,
    ACTIONS(43), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      sym__word,
    ACTIONS(203), 8,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1354] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      sym__word,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1371] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      sym__word,
    ACTIONS(171), 1,
      aux_sym_shape_key_token1,
    ACTIONS(173), 1,
      sym__dash,
    STATE(28), 1,
      sym_string,
    STATE(40), 1,
      sym_shape,
    STATE(41), 1,
      sym_shape_key,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      sym__word,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      sym__dash,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [1419] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym__end,
    STATE(46), 1,
      sym__eol,
    STATE(64), 1,
      sym__new_shape_block,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1440] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym__eol,
    STATE(43), 1,
      sym__end,
    STATE(68), 1,
      sym__new_shape_block,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1461] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(60), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [1477] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(59), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [1493] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(59), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      sym__dash,
    ACTIONS(129), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      sym__dash,
    ACTIONS(145), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1537] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(37), 1,
      sym__eol,
    STATE(43), 1,
      sym__end,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1552] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(46), 1,
      sym__eol,
    STATE(49), 1,
      sym__end,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(37), 1,
      sym__eol,
    STATE(50), 1,
      sym__end,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1582] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(33), 1,
      sym__end,
    STATE(46), 1,
      sym__eol,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1597] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(38), 1,
      sym__end,
    STATE(46), 1,
      sym__eol,
    ACTIONS(31), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1612] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(37), 1,
      sym__eol,
    STATE(39), 1,
      sym__end,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1627] = 4,
    ACTIONS(222), 1,
      anon_sym_BQUOTE,
    ACTIONS(224), 1,
      aux_sym_string_token3,
    ACTIONS(226), 1,
      sym_line_comment,
    STATE(82), 1,
      aux_sym_string_repeat3,
  [1640] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      aux_sym_string_token2,
    STATE(70), 1,
      aux_sym_string_repeat2,
  [1653] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_string_token1,
    STATE(71), 1,
      aux_sym_string_repeat1,
  [1666] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_BQUOTE,
    ACTIONS(240), 1,
      aux_sym_string_token3,
    STATE(76), 1,
      aux_sym_string_repeat3,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1697] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      aux_sym_string_token1,
    STATE(71), 1,
      aux_sym_string_repeat1,
  [1710] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    ACTIONS(248), 1,
      aux_sym_string_token3,
    STATE(84), 1,
      aux_sym_string_repeat3,
  [1723] = 4,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      aux_sym_string_token1,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1736] = 4,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      aux_sym_string_token2,
    STATE(81), 1,
      aux_sym_string_repeat2,
  [1749] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      aux_sym_string_token2,
    STATE(70), 1,
      aux_sym_string_repeat2,
  [1762] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      aux_sym_string_token1,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      aux_sym_string_repeat1,
  [1775] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(254), 1,
      aux_sym_string_token2,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_string_repeat2,
  [1788] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      aux_sym_string_token3,
    ACTIONS(256), 1,
      anon_sym_BQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat3,
  [1801] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      aux_sym_string_token2,
    STATE(79), 1,
      aux_sym_string_repeat2,
  [1814] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(260), 1,
      anon_sym_BQUOTE,
    ACTIONS(262), 1,
      aux_sym_string_token3,
    STATE(84), 1,
      aux_sym_string_repeat3,
  [1827] = 4,
    ACTIONS(226), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      aux_sym_string_token1,
    STATE(75), 1,
      aux_sym_string_repeat1,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      sym__word,
    ACTIONS(269), 1,
      aux_sym_shape_key_token1,
  [1850] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 1,
      sym__word,
    ACTIONS(273), 1,
      aux_sym_shape_key_token1,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      sym__word,
    ACTIONS(277), 1,
      aux_sym_shape_key_token1,
  [1870] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 332,
  [SMALL_STATE(10)] = 374,
  [SMALL_STATE(11)] = 416,
  [SMALL_STATE(12)] = 458,
  [SMALL_STATE(13)] = 500,
  [SMALL_STATE(14)] = 535,
  [SMALL_STATE(15)] = 570,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 612,
  [SMALL_STATE(18)] = 633,
  [SMALL_STATE(19)] = 672,
  [SMALL_STATE(20)] = 693,
  [SMALL_STATE(21)] = 714,
  [SMALL_STATE(22)] = 735,
  [SMALL_STATE(23)] = 756,
  [SMALL_STATE(24)] = 777,
  [SMALL_STATE(25)] = 798,
  [SMALL_STATE(26)] = 819,
  [SMALL_STATE(27)] = 858,
  [SMALL_STATE(28)] = 879,
  [SMALL_STATE(29)] = 900,
  [SMALL_STATE(30)] = 919,
  [SMALL_STATE(31)] = 938,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 978,
  [SMALL_STATE(34)] = 995,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1043,
  [SMALL_STATE(37)] = 1062,
  [SMALL_STATE(38)] = 1079,
  [SMALL_STATE(39)] = 1096,
  [SMALL_STATE(40)] = 1113,
  [SMALL_STATE(41)] = 1130,
  [SMALL_STATE(42)] = 1157,
  [SMALL_STATE(43)] = 1174,
  [SMALL_STATE(44)] = 1191,
  [SMALL_STATE(45)] = 1208,
  [SMALL_STATE(46)] = 1225,
  [SMALL_STATE(47)] = 1242,
  [SMALL_STATE(48)] = 1269,
  [SMALL_STATE(49)] = 1286,
  [SMALL_STATE(50)] = 1303,
  [SMALL_STATE(51)] = 1320,
  [SMALL_STATE(52)] = 1337,
  [SMALL_STATE(53)] = 1354,
  [SMALL_STATE(54)] = 1371,
  [SMALL_STATE(55)] = 1402,
  [SMALL_STATE(56)] = 1419,
  [SMALL_STATE(57)] = 1440,
  [SMALL_STATE(58)] = 1461,
  [SMALL_STATE(59)] = 1477,
  [SMALL_STATE(60)] = 1493,
  [SMALL_STATE(61)] = 1509,
  [SMALL_STATE(62)] = 1523,
  [SMALL_STATE(63)] = 1537,
  [SMALL_STATE(64)] = 1552,
  [SMALL_STATE(65)] = 1567,
  [SMALL_STATE(66)] = 1582,
  [SMALL_STATE(67)] = 1597,
  [SMALL_STATE(68)] = 1612,
  [SMALL_STATE(69)] = 1627,
  [SMALL_STATE(70)] = 1640,
  [SMALL_STATE(71)] = 1653,
  [SMALL_STATE(72)] = 1666,
  [SMALL_STATE(73)] = 1679,
  [SMALL_STATE(74)] = 1688,
  [SMALL_STATE(75)] = 1697,
  [SMALL_STATE(76)] = 1710,
  [SMALL_STATE(77)] = 1723,
  [SMALL_STATE(78)] = 1736,
  [SMALL_STATE(79)] = 1749,
  [SMALL_STATE(80)] = 1762,
  [SMALL_STATE(81)] = 1775,
  [SMALL_STATE(82)] = 1788,
  [SMALL_STATE(83)] = 1801,
  [SMALL_STATE(84)] = 1814,
  [SMALL_STATE(85)] = 1827,
  [SMALL_STATE(86)] = 1840,
  [SMALL_STATE(87)] = 1850,
  [SMALL_STATE(88)] = 1860,
  [SMALL_STATE(89)] = 1870,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(22),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(87),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(77),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(78),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(69),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 3, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_key, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_key, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_key, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_container_block, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 4, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_container_block_definition, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block_definition, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block_definition, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_container_block, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2), SHIFT_REPEAT(59),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(70),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(71),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(84),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

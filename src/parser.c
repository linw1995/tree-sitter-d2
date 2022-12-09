#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 1
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  anon_sym_stroke_DASHwidth = 17,
  anon_sym_stroke_DASHdash = 18,
  anon_sym_border_DASHradius = 19,
  anon_sym_font_DASHcolor = 20,
  anon_sym_shadow = 21,
  anon_sym_multiple = 22,
  anon_sym_animated = 23,
  anon_sym_3d = 24,
  anon_sym_link = 25,
  sym__text_attr_key = 26,
  anon_sym_source_DASHarrowhead = 27,
  anon_sym_target_DASHarrowhead = 28,
  anon_sym_COLON = 29,
  sym_arrow = 30,
  sym_dot = 31,
  sym__unquoted_string = 32,
  anon_sym_SQUOTE = 33,
  aux_sym_string_token1 = 34,
  anon_sym_DQUOTE = 35,
  aux_sym_string_token2 = 36,
  anon_sym_BQUOTE = 37,
  aux_sym_string_token3 = 38,
  sym_line_comment = 39,
  anon_sym_LF = 40,
  anon_sym_ = 41,
  anon_sym_SEMI = 42,
  sym_source_file = 43,
  sym__new_root_definition = 44,
  sym_connection = 45,
  sym__connection_path = 46,
  sym_container = 47,
  sym_shape = 48,
  sym_shape_key = 49,
  sym__new_shape_block = 50,
  sym__new_shape_block_definition = 51,
  sym__new_container_block = 52,
  sym__new_container_block_definition = 53,
  sym_label = 54,
  sym__colon = 55,
  sym__arrow = 56,
  sym__dot = 57,
  sym_string = 58,
  sym__eol = 59,
  sym__end = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_connection_repeat1 = 62,
  aux_sym__connection_path_repeat1 = 63,
  aux_sym__new_shape_block_repeat1 = 64,
  aux_sym__new_container_block_repeat1 = 65,
  aux_sym_string_repeat1 = 66,
  aux_sym_string_repeat2 = 67,
  aux_sym_string_repeat3 = 68,
  alias_sym_container_key = 69,
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
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_3d] = "3d",
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "_text_attr_key",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [anon_sym_COLON] = ":",
  [sym_arrow] = "arrow",
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
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym_container] = "container",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__new_shape_block] = "block",
  [sym__new_shape_block_definition] = "_new_shape_block_definition",
  [sym__new_container_block] = "block",
  [sym__new_container_block_definition] = "_new_container_block_definition",
  [sym_label] = "label",
  [sym__colon] = "_colon",
  [sym__arrow] = "_arrow",
  [sym__dot] = "_dot",
  [sym_string] = "string",
  [sym__eol] = "_eol",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
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
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arrow] = sym_arrow,
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
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym_container] = sym_container,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__new_shape_block] = sym__new_shape_block,
  [sym__new_shape_block_definition] = sym__new_shape_block_definition,
  [sym__new_container_block] = sym__new_shape_block,
  [sym__new_container_block_definition] = sym__new_container_block_definition,
  [sym_label] = sym_label,
  [sym__colon] = sym__colon,
  [sym__arrow] = sym__arrow,
  [sym__dot] = sym__dot,
  [sym_string] = sym_string,
  [sym__eol] = sym__eol,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
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
  [anon_sym_stroke_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHdash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHradius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHcolor] = {
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
  [anon_sym_source_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
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
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_path] = {
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
  [sym__arrow] = {
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
  [aux_sym_connection_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_path_repeat1] = {
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
  [27] = 10,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
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
      if (eof) ADVANCE(17);
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(84);
      if (anon_sym__character_set_1(lookahead)) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(1)
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '{') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '{') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '{') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '{') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(90);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(85);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '`') ADVANCE(91);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(84);
      if (anon_sym__character_set_1(lookahead)) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == 0) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (anon_sym__character_set_1(lookahead)) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_shape_key_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_shape_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'g') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'w') ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(87);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(90);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '#') ADVANCE(93);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 97:
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
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
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
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [anon_sym_source_DASHarrowhead] = ACTIONS(1),
    [anon_sym_target_DASHarrowhead] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym__unquoted_string] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__new_root_definition] = STATE(3),
    [sym_connection] = STATE(34),
    [sym__connection_path] = STATE(53),
    [sym_container] = STATE(34),
    [sym_shape] = STATE(34),
    [sym_shape_key] = STATE(8),
    [sym_string] = STATE(18),
    [sym__eol] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_shape_key_token1] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      aux_sym_shape_key_token1,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_shape_key,
    STATE(18), 1,
      sym_string,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(22), 1,
      sym__eol,
    STATE(53), 1,
      sym__connection_path,
    ACTIONS(19), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(6), 2,
      sym__new_container_block_definition,
      aux_sym__new_container_block_repeat1,
    STATE(32), 2,
      sym__new_shape_block_definition,
      aux_sym__new_shape_block_repeat1,
    STATE(35), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [51] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      aux_sym_shape_key_token1,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_shape_key,
    STATE(18), 1,
      sym_string,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(53), 1,
      sym__connection_path,
    ACTIONS(23), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(4), 3,
      sym__new_root_definition,
      sym__eol,
      aux_sym_source_file_repeat1,
    STATE(34), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [96] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_shape_key_token1,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_BQUOTE,
    STATE(8), 1,
      sym_shape_key,
    STATE(18), 1,
      sym_string,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(53), 1,
      sym__connection_path,
    ACTIONS(39), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(4), 3,
      sym__new_root_definition,
      sym__eol,
      aux_sym_source_file_repeat1,
    STATE(34), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [141] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(42), 1,
      aux_sym_shape_key_token1,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    STATE(8), 1,
      sym_shape_key,
    STATE(18), 1,
      sym_string,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(53), 1,
      sym__connection_path,
    ACTIONS(56), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(5), 3,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
    STATE(35), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [186] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      aux_sym_shape_key_token1,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_shape_key,
    STATE(18), 1,
      sym_string,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(53), 1,
      sym__connection_path,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(5), 3,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
    STATE(35), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [231] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym__unquoted_string,
    STATE(29), 1,
      sym_label,
    STATE(37), 1,
      sym_string,
    STATE(44), 1,
      sym__new_shape_block,
    STATE(45), 1,
      sym__new_container_block,
    ACTIONS(67), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [267] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_COLON,
    ACTIONS(71), 1,
      sym_arrow,
    ACTIONS(73), 1,
      sym_dot,
    STATE(7), 1,
      sym__colon,
    STATE(15), 1,
      sym__dot,
    STATE(46), 1,
      sym__new_container_block,
    STATE(47), 1,
      sym__new_shape_block,
    ACTIONS(75), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [300] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      sym_dot,
    STATE(7), 1,
      sym__colon,
    STATE(14), 1,
      sym__dot,
    STATE(46), 1,
      sym__new_container_block,
    STATE(47), 1,
      sym__new_shape_block,
    ACTIONS(75), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [330] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      sym__dash,
    ACTIONS(79), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [360] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      aux_sym_shape_key_token1,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(25), 1,
      sym_shape_key,
    STATE(33), 1,
      sym__connection_path,
  [388] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(87), 1,
      sym_arrow,
    STATE(12), 1,
      sym__arrow,
    STATE(24), 1,
      aux_sym_connection_repeat1,
    STATE(30), 1,
      sym__colon,
    ACTIONS(89), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [412] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(91), 1,
      aux_sym_shape_key_token1,
    STATE(9), 1,
      sym_shape_key,
    STATE(18), 1,
      sym_string,
    STATE(45), 2,
      sym_container,
      sym_shape,
  [438] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      aux_sym_shape_key_token1,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_BQUOTE,
    STATE(9), 1,
      sym_shape_key,
    STATE(18), 1,
      sym_string,
    STATE(45), 2,
      sym_container,
      sym_shape,
  [464] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      aux_sym_shape_key_token1,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_BQUOTE,
    STATE(16), 1,
      aux_sym__connection_path_repeat1,
    STATE(18), 1,
      sym_string,
    STATE(58), 1,
      sym_shape_key,
  [489] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 7,
      aux_sym_shape_key_token1,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [502] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [515] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      aux_sym_shape_key_token1,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    STATE(16), 1,
      aux_sym__connection_path_repeat1,
    STATE(18), 1,
      sym_string,
    STATE(28), 1,
      sym_shape_key,
  [540] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(119), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [553] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [566] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_,
    ACTIONS(123), 4,
      aux_sym_shape_key_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [581] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      aux_sym_shape_key_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [594] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      sym_arrow,
    STATE(12), 1,
      sym__arrow,
    STATE(24), 1,
      aux_sym_connection_repeat1,
    ACTIONS(129), 4,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [613] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      sym_dot,
    STATE(36), 1,
      sym__dot,
    ACTIONS(71), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [630] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [643] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      sym__dash,
    ACTIONS(79), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [658] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      sym_dot,
    STATE(36), 1,
      sym__dot,
    ACTIONS(140), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [675] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym__new_shape_block,
    STATE(57), 1,
      sym__new_container_block,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [693] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(65), 1,
      sym__unquoted_string,
    STATE(37), 1,
      sym_string,
    STATE(50), 1,
      sym_label,
  [715] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(31), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [731] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(31), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [747] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [758] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(11), 1,
      sym__eol,
    STATE(23), 1,
      sym__end,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [773] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(11), 1,
      sym__eol,
    STATE(17), 1,
      sym__end,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 4,
      aux_sym_shape_key_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [798] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 4,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [808] = 4,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      aux_sym_string_token1,
    ACTIONS(163), 1,
      sym_line_comment,
    STATE(41), 1,
      aux_sym_string_repeat1,
  [821] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [830] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      aux_sym_string_token3,
    STATE(40), 1,
      aux_sym_string_repeat3,
  [843] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      aux_sym_string_token1,
    STATE(41), 1,
      aux_sym_string_repeat1,
  [856] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [865] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token1,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [878] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [887] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [896] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [905] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [914] = 4,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      aux_sym_string_token3,
    STATE(40), 1,
      aux_sym_string_repeat3,
  [927] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      aux_sym_string_token2,
    STATE(51), 1,
      aux_sym_string_repeat2,
  [940] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [949] = 4,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      aux_sym_string_token2,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [971] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      sym_arrow,
    STATE(12), 1,
      sym__arrow,
    STATE(13), 1,
      aux_sym_connection_repeat1,
  [984] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_string_token2,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [997] = 4,
    ACTIONS(163), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_BQUOTE,
    ACTIONS(202), 1,
      aux_sym_string_token3,
    STATE(48), 1,
      aux_sym_string_repeat3,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(204), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(206), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      sym_dot,
    STATE(36), 1,
      sym__dot,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 388,
  [SMALL_STATE(14)] = 412,
  [SMALL_STATE(15)] = 438,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 502,
  [SMALL_STATE(19)] = 515,
  [SMALL_STATE(20)] = 540,
  [SMALL_STATE(21)] = 553,
  [SMALL_STATE(22)] = 566,
  [SMALL_STATE(23)] = 581,
  [SMALL_STATE(24)] = 594,
  [SMALL_STATE(25)] = 613,
  [SMALL_STATE(26)] = 630,
  [SMALL_STATE(27)] = 643,
  [SMALL_STATE(28)] = 658,
  [SMALL_STATE(29)] = 675,
  [SMALL_STATE(30)] = 693,
  [SMALL_STATE(31)] = 715,
  [SMALL_STATE(32)] = 731,
  [SMALL_STATE(33)] = 747,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 773,
  [SMALL_STATE(36)] = 788,
  [SMALL_STATE(37)] = 798,
  [SMALL_STATE(38)] = 808,
  [SMALL_STATE(39)] = 821,
  [SMALL_STATE(40)] = 830,
  [SMALL_STATE(41)] = 843,
  [SMALL_STATE(42)] = 856,
  [SMALL_STATE(43)] = 865,
  [SMALL_STATE(44)] = 878,
  [SMALL_STATE(45)] = 887,
  [SMALL_STATE(46)] = 896,
  [SMALL_STATE(47)] = 905,
  [SMALL_STATE(48)] = 914,
  [SMALL_STATE(49)] = 927,
  [SMALL_STATE(50)] = 940,
  [SMALL_STATE(51)] = 949,
  [SMALL_STATE(52)] = 962,
  [SMALL_STATE(53)] = 971,
  [SMALL_STATE(54)] = 984,
  [SMALL_STATE(55)] = 997,
  [SMALL_STATE(56)] = 1010,
  [SMALL_STATE(57)] = 1019,
  [SMALL_STATE(58)] = 1028,
  [SMALL_STATE(59)] = 1038,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(43),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(49),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(55),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 1), SHIFT(27),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 1), SHIFT(43),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 1), SHIFT(49),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 1), SHIFT(55),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(27),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(43),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(49),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(55),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block_definition, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block_definition, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block_definition, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_root_definition, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(12),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2), SHIFT_REPEAT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(40),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(41),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(54),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 1
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym__identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_direction = 4,
  anon_sym_shape = 5,
  anon_sym_label = 6,
  anon_sym_constraint = 7,
  anon_sym_icon = 8,
  anon_sym_width = 9,
  anon_sym_height = 10,
  anon_sym_3d = 11,
  anon_sym_opacity = 12,
  anon_sym_fill = 13,
  anon_sym_stroke = 14,
  anon_sym_stroke_DASHwidth = 15,
  anon_sym_stroke_DASHdash = 16,
  anon_sym_border_DASHradius = 17,
  anon_sym_font_DASHcolor = 18,
  anon_sym_shadow = 19,
  anon_sym_multiple = 20,
  anon_sym_animated = 21,
  anon_sym_link = 22,
  sym__text_attr_key = 23,
  anon_sym_source_DASHarrowhead = 24,
  anon_sym_target_DASHarrowhead = 25,
  sym__dash = 26,
  anon_sym_COLON = 27,
  sym_arrow = 28,
  sym_dot = 29,
  sym__unquoted_string = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_string_token1 = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_token2 = 34,
  anon_sym_BQUOTE = 35,
  aux_sym_string_token3 = 36,
  sym_line_comment = 37,
  sym__word = 38,
  anon_sym_LF = 39,
  anon_sym_ = 40,
  anon_sym_SEMI = 41,
  sym_source_file = 42,
  sym__new_root_definition = 43,
  sym_connection = 44,
  sym__connection_path = 45,
  sym_container = 46,
  sym__new_container_block = 47,
  sym__new_container_block_definition = 48,
  sym_shape = 49,
  sym_shape_key = 50,
  sym__new_shape_block = 51,
  sym__new_shape_block_definition = 52,
  sym__new_root_attribute = 53,
  sym__root_attr_key = 54,
  sym__common_style_attr_key = 55,
  sym_label = 56,
  sym_attr_value = 57,
  sym__colon = 58,
  sym__arrow = 59,
  sym__dot = 60,
  sym_string = 61,
  sym__eol = 62,
  sym__end = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_connection_repeat1 = 65,
  aux_sym__connection_path_repeat1 = 66,
  aux_sym__new_container_block_repeat1 = 67,
  aux_sym__new_shape_block_repeat1 = 68,
  aux_sym_string_repeat1 = 69,
  aux_sym_string_repeat2 = 70,
  aux_sym_string_repeat3 = 71,
  alias_sym_container_key = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_3d] = "3d",
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
  [anon_sym_link] = "link",
  [sym__text_attr_key] = "reserved",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym__dash] = "_dash",
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
  [sym__word] = "_word",
  [anon_sym_LF] = "\n",
  [anon_sym_] = " ",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__new_root_definition] = "_new_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym_container] = "container",
  [sym__new_container_block] = "block",
  [sym__new_container_block_definition] = "_new_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__new_shape_block] = "block",
  [sym__new_shape_block_definition] = "_new_shape_block_definition",
  [sym__new_root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__colon] = "_colon",
  [sym__arrow] = "_arrow",
  [sym__dot] = "_dot",
  [sym_string] = "string",
  [sym__eol] = "_eol",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__new_container_block_repeat1] = "_new_container_block_repeat1",
  [aux_sym__new_shape_block_repeat1] = "_new_shape_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_3d] = anon_sym_3d,
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
  [anon_sym_link] = anon_sym_link,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym__dash] = sym__dash,
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
  [sym__word] = sym__word,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_] = anon_sym_,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__new_root_definition] = sym__new_root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym_container] = sym_container,
  [sym__new_container_block] = sym__new_container_block,
  [sym__new_container_block_definition] = sym__new_container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__new_shape_block] = sym__new_container_block,
  [sym__new_shape_block_definition] = sym__new_shape_block_definition,
  [sym__new_root_attribute] = sym__new_root_attribute,
  [sym__root_attr_key] = sym__root_attr_key,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__colon] = sym__colon,
  [sym__arrow] = sym__arrow,
  [sym__dot] = sym__dot,
  [sym_string] = sym_string,
  [sym__eol] = sym__eol,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__new_container_block_repeat1] = aux_sym__new_container_block_repeat1,
  [aux_sym__new_shape_block_repeat1] = aux_sym__new_shape_block_repeat1,
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
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
  [anon_sym_3d] = {
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
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [sym__text_attr_key] = {
    .visible = true,
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
  [sym__dash] = {
    .visible = false,
    .named = true,
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
  [sym__word] = {
    .visible = false,
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
  [sym__new_container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__new_container_block_definition] = {
    .visible = false,
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
  [sym__new_root_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__common_style_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
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
  [aux_sym__new_container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__new_shape_block_repeat1] = {
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
    [0] = sym__text_attr_key,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 2,
    sym_shape_key,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    sym__text_attr_key,
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
  [18] = 11,
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
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
      if (eof) ADVANCE(18);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead == '{') ADVANCE(19);
      if (anon_sym__character_set_1(lookahead)) SKIP(1)
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '{') ADVANCE(19);
      if (anon_sym__character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '{') ADVANCE(19);
      if (anon_sym__character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '{') ADVANCE(19);
      if (anon_sym__character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '{') ADVANCE(19);
      if (anon_sym__character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(38);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(33);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '`') ADVANCE(39);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '>') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(45);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead == '}') ADVANCE(20);
      if (anon_sym__character_set_1(lookahead)) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_3d);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '>') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(35);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(38);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '#') ADVANCE(41);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
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
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
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
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 136:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_3d] = ACTIONS(1),
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
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [anon_sym_source_DASHarrowhead] = ACTIONS(1),
    [anon_sym_target_DASHarrowhead] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__word] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__new_root_definition] = STATE(3),
    [sym_connection] = STATE(33),
    [sym__connection_path] = STATE(44),
    [sym_container] = STATE(33),
    [sym_shape] = STATE(33),
    [sym_shape_key] = STATE(9),
    [sym__new_root_attribute] = STATE(33),
    [sym__root_attr_key] = STATE(60),
    [sym__common_style_attr_key] = STATE(63),
    [sym_string] = STATE(21),
    [sym__eol] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(13),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
  },
  [2] = {
    [sym__new_root_definition] = STATE(2),
    [sym_connection] = STATE(33),
    [sym__connection_path] = STATE(44),
    [sym_container] = STATE(33),
    [sym_shape] = STATE(33),
    [sym_shape_key] = STATE(9),
    [sym__new_root_attribute] = STATE(33),
    [sym__root_attr_key] = STATE(60),
    [sym__common_style_attr_key] = STATE(63),
    [sym_string] = STATE(21),
    [sym__eol] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__identifier] = ACTIONS(25),
    [anon_sym_direction] = ACTIONS(28),
    [anon_sym_shape] = ACTIONS(31),
    [anon_sym_label] = ACTIONS(31),
    [anon_sym_constraint] = ACTIONS(31),
    [anon_sym_icon] = ACTIONS(31),
    [anon_sym_opacity] = ACTIONS(34),
    [anon_sym_fill] = ACTIONS(34),
    [anon_sym_stroke] = ACTIONS(34),
    [anon_sym_stroke_DASHwidth] = ACTIONS(34),
    [anon_sym_stroke_DASHdash] = ACTIONS(34),
    [anon_sym_border_DASHradius] = ACTIONS(34),
    [anon_sym_font_DASHcolor] = ACTIONS(34),
    [anon_sym_shadow] = ACTIONS(34),
    [anon_sym_multiple] = ACTIONS(34),
    [anon_sym_animated] = ACTIONS(34),
    [anon_sym_link] = ACTIONS(34),
    [sym__text_attr_key] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(46),
    [anon_sym_] = ACTIONS(46),
  },
  [3] = {
    [sym__new_root_definition] = STATE(2),
    [sym_connection] = STATE(33),
    [sym__connection_path] = STATE(44),
    [sym_container] = STATE(33),
    [sym_shape] = STATE(33),
    [sym_shape_key] = STATE(9),
    [sym__new_root_attribute] = STATE(33),
    [sym__root_attr_key] = STATE(60),
    [sym__common_style_attr_key] = STATE(63),
    [sym_string] = STATE(21),
    [sym__eol] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(13),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
    ACTIONS(55), 18,
      sym__identifier,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__text_attr_key,
  [32] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_shape_key,
    STATE(21), 1,
      sym_string,
    STATE(22), 1,
      aux_sym__connection_path_repeat1,
    STATE(26), 1,
      sym__eol,
    STATE(44), 1,
      sym__connection_path,
    ACTIONS(61), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(7), 2,
      sym__new_container_block_definition,
      aux_sym__new_container_block_repeat1,
    STATE(28), 2,
      sym__new_shape_block_definition,
      aux_sym__new_shape_block_repeat1,
    STATE(34), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [83] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      sym__identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_BQUOTE,
    STATE(9), 1,
      sym_shape_key,
    STATE(21), 1,
      sym_string,
    STATE(22), 1,
      aux_sym__connection_path_repeat1,
    STATE(44), 1,
      sym__connection_path,
    ACTIONS(77), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(6), 3,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
    STATE(34), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [128] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_shape_key,
    STATE(21), 1,
      sym_string,
    STATE(22), 1,
      aux_sym__connection_path_repeat1,
    STATE(44), 1,
      sym__connection_path,
    ACTIONS(82), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(6), 3,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
    STATE(34), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [173] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      sym__unquoted_string,
    STATE(31), 1,
      sym_label,
    STATE(36), 1,
      sym_string,
    STATE(46), 1,
      sym__new_container_block,
    STATE(47), 1,
      sym__new_shape_block,
    ACTIONS(88), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [209] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      sym_arrow,
    ACTIONS(94), 1,
      sym_dot,
    STATE(8), 1,
      sym__colon,
    STATE(13), 1,
      sym__dot,
    STATE(38), 1,
      sym__new_shape_block,
    STATE(45), 1,
      sym__new_container_block,
    ACTIONS(96), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [242] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(98), 1,
      sym_dot,
    STATE(8), 1,
      sym__colon,
    STATE(12), 1,
      sym__dot,
    STATE(38), 1,
      sym__new_shape_block,
    STATE(45), 1,
      sym__new_container_block,
    ACTIONS(96), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [272] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 1,
      sym__dash,
    ACTIONS(100), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [288] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(104), 1,
      sym__identifier,
    STATE(10), 1,
      sym_shape_key,
    STATE(21), 1,
      sym_string,
    STATE(46), 2,
      sym_container,
      sym_shape,
  [314] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(106), 1,
      sym__identifier,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_BQUOTE,
    STATE(10), 1,
      sym_shape_key,
    STATE(21), 1,
      sym_string,
    STATE(46), 2,
      sym_container,
      sym_shape,
  [340] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    STATE(19), 1,
      sym_shape_key,
    STATE(21), 1,
      sym_string,
    STATE(22), 1,
      aux_sym__connection_path_repeat1,
    STATE(35), 1,
      sym__connection_path,
  [368] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(120), 1,
      sym_arrow,
    STATE(14), 1,
      sym__arrow,
    STATE(25), 1,
      aux_sym_connection_repeat1,
    STATE(30), 1,
      sym__colon,
    ACTIONS(122), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [392] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(124), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [405] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym__identifier,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_BQUOTE,
    STATE(17), 1,
      aux_sym__connection_path_repeat1,
    STATE(21), 1,
      sym_string,
    STATE(61), 1,
      sym_shape_key,
  [430] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      sym__dash,
    ACTIONS(100), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [445] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      sym_dot,
    STATE(37), 1,
      sym__dot,
    ACTIONS(92), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(142), 7,
      anon_sym_RBRACE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [475] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [488] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    STATE(17), 1,
      aux_sym__connection_path_repeat1,
    STATE(21), 1,
      sym_string,
    STATE(27), 1,
      sym_shape_key,
  [513] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [526] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [539] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 1,
      sym_arrow,
    STATE(14), 1,
      sym__arrow,
    STATE(25), 1,
      aux_sym_connection_repeat1,
    ACTIONS(148), 4,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [558] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_,
    ACTIONS(153), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [573] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      sym_dot,
    STATE(37), 1,
      sym__dot,
    ACTIONS(157), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [590] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(32), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [606] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(163), 1,
      sym__unquoted_string,
    STATE(39), 1,
      sym_attr_value,
    STATE(50), 1,
      sym_string,
  [628] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(86), 1,
      sym__unquoted_string,
    STATE(36), 1,
      sym_string,
    STATE(54), 1,
      sym_label,
  [650] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym__new_shape_block,
    STATE(59), 1,
      sym__new_container_block,
    ACTIONS(165), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(32), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [684] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(4), 2,
      sym__eol,
      sym__end,
    ACTIONS(172), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [697] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(20), 2,
      sym__eol,
      sym__end,
    ACTIONS(174), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [710] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [721] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 4,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [741] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [750] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [768] = 4,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      aux_sym_string_token1,
    ACTIONS(188), 1,
      sym_line_comment,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [781] = 4,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      aux_sym_string_token2,
    STATE(42), 1,
      aux_sym_string_repeat2,
  [794] = 4,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      aux_sym_string_token1,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [807] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      sym_arrow,
    STATE(14), 1,
      sym__arrow,
    STATE(15), 1,
      aux_sym_connection_repeat1,
  [820] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [829] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [847] = 4,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_BQUOTE,
    ACTIONS(206), 1,
      aux_sym_string_token3,
    STATE(51), 1,
      aux_sym_string_repeat3,
  [860] = 4,
    ACTIONS(184), 1,
      anon_sym_BQUOTE,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      aux_sym_string_token3,
    STATE(48), 1,
      aux_sym_string_repeat3,
  [873] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [882] = 4,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      aux_sym_string_token3,
    STATE(51), 1,
      aux_sym_string_repeat3,
  [895] = 4,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token2,
    STATE(42), 1,
      aux_sym_string_repeat2,
  [908] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [917] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [926] = 4,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      aux_sym_string_token1,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [939] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [948] = 4,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_line_comment,
    ACTIONS(227), 1,
      aux_sym_string_token2,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [961] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [970] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [979] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym__colon,
  [989] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      sym_dot,
    STATE(37), 1,
      sym__dot,
  [999] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      anon_sym_COLON,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      anon_sym_COLON,
  [1013] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 1,
      anon_sym_COLON,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 288,
  [SMALL_STATE(13)] = 314,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 368,
  [SMALL_STATE(16)] = 392,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 430,
  [SMALL_STATE(19)] = 445,
  [SMALL_STATE(20)] = 462,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 488,
  [SMALL_STATE(23)] = 513,
  [SMALL_STATE(24)] = 526,
  [SMALL_STATE(25)] = 539,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 573,
  [SMALL_STATE(28)] = 590,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 628,
  [SMALL_STATE(31)] = 650,
  [SMALL_STATE(32)] = 668,
  [SMALL_STATE(33)] = 684,
  [SMALL_STATE(34)] = 697,
  [SMALL_STATE(35)] = 710,
  [SMALL_STATE(36)] = 721,
  [SMALL_STATE(37)] = 731,
  [SMALL_STATE(38)] = 741,
  [SMALL_STATE(39)] = 750,
  [SMALL_STATE(40)] = 759,
  [SMALL_STATE(41)] = 768,
  [SMALL_STATE(42)] = 781,
  [SMALL_STATE(43)] = 794,
  [SMALL_STATE(44)] = 807,
  [SMALL_STATE(45)] = 820,
  [SMALL_STATE(46)] = 829,
  [SMALL_STATE(47)] = 838,
  [SMALL_STATE(48)] = 847,
  [SMALL_STATE(49)] = 860,
  [SMALL_STATE(50)] = 873,
  [SMALL_STATE(51)] = 882,
  [SMALL_STATE(52)] = 895,
  [SMALL_STATE(53)] = 908,
  [SMALL_STATE(54)] = 917,
  [SMALL_STATE(55)] = 926,
  [SMALL_STATE(56)] = 939,
  [SMALL_STATE(57)] = 948,
  [SMALL_STATE(58)] = 961,
  [SMALL_STATE(59)] = 970,
  [SMALL_STATE(60)] = 979,
  [SMALL_STATE(61)] = 989,
  [SMALL_STATE(62)] = 999,
  [SMALL_STATE(63)] = 1006,
  [SMALL_STATE(64)] = 1013,
  [SMALL_STATE(65)] = 1020,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_root_definition, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_root_definition, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(41),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(57),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(49),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(18),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(41),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(57),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(18),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(41),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(57),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(49),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block_definition, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block_definition, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block_definition, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2), SHIFT_REPEAT(32),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_root_attribute, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(42),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(43),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(51),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_capture_token = sym__identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

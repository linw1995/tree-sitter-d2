#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
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
  anon_sym_style = 9,
  anon_sym_width = 10,
  anon_sym_height = 11,
  anon_sym_3d = 12,
  anon_sym_opacity = 13,
  anon_sym_fill = 14,
  anon_sym_stroke = 15,
  anon_sym_stroke_DASHwidth = 16,
  anon_sym_stroke_DASHdash = 17,
  anon_sym_border_DASHradius = 18,
  anon_sym_font_DASHcolor = 19,
  anon_sym_shadow = 20,
  anon_sym_multiple = 21,
  anon_sym_animated = 22,
  anon_sym_link = 23,
  sym__text_attr_key = 24,
  anon_sym_source_DASHarrowhead = 25,
  anon_sym_target_DASHarrowhead = 26,
  sym__dash = 27,
  anon_sym_COLON = 28,
  sym_arrow = 29,
  sym_dot = 30,
  sym__unquoted_string = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_string_token1 = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_token2 = 35,
  anon_sym_BQUOTE = 36,
  aux_sym_string_token3 = 37,
  sym_line_comment = 38,
  sym__eol = 39,
  anon_sym_SEMI = 40,
  sym_source_file = 41,
  sym__root_definition = 42,
  sym_connection = 43,
  sym__connection_path = 44,
  sym_container = 45,
  sym__container_block = 46,
  sym__container_block_definition = 47,
  sym_shape = 48,
  sym_shape_key = 49,
  sym__shape_block = 50,
  sym__shape_block_definition = 51,
  sym__root_attribute = 52,
  sym__root_attr_key = 53,
  sym__style_attribute = 54,
  sym__style_attribute_block = 55,
  sym__inner_style_attribute = 56,
  sym__style_attr_key = 57,
  sym__common_style_attr_key = 58,
  sym_label = 59,
  sym_attr_value = 60,
  sym__colon = 61,
  sym_string = 62,
  sym__end = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_connection_repeat1 = 65,
  aux_sym__connection_path_repeat1 = 66,
  aux_sym__container_block_repeat1 = 67,
  aux_sym__shape_block_repeat1 = 68,
  aux_sym__style_attribute_block_repeat1 = 69,
  aux_sym_string_repeat1 = 70,
  aux_sym_string_repeat2 = 71,
  aux_sym_string_repeat3 = 72,
  alias_sym_container_key = 73,
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
  [anon_sym_style] = "attr_key",
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
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__shape_block] = "block",
  [sym__shape_block_definition] = "_shape_block_definition",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__colon] = "_colon",
  [sym_string] = "string",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__shape_block_repeat1] = "_shape_block_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
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
  [anon_sym_style] = anon_sym_style,
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
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym_container] = sym_container,
  [sym__container_block] = sym__container_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__shape_block] = sym__container_block,
  [sym__shape_block_definition] = sym__shape_block_definition,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = anon_sym_style,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__container_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__style_attr_key] = anon_sym_style,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__colon] = sym__colon,
  [sym_string] = sym_string,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__shape_block_repeat1] = aux_sym__shape_block_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
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
  [anon_sym_style] = {
    .visible = true,
    .named = true,
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
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__root_definition] = {
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
  [sym__container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block_definition] = {
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
  [sym__shape_block] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
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
  [sym_string] = {
    .visible = true,
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
  [aux_sym__container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__shape_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attribute_block_repeat1] = {
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
  [28] = 21,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
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

static inline bool sym__eol_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(86);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (sym__eol_character_set_1(lookahead)) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(189);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '\'') ADVANCE(184);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '`') ADVANCE(190);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '>') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'w') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 75:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '}') ADVANCE(88);
      if (sym__eol_character_set_1(lookahead)) SKIP(75)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(87);
      if (sym__eol_character_set_1(lookahead)) SKIP(76)
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 77:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (sym__eol_character_set_1(lookahead)) SKIP(78)
      END_STATE();
    case 78:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (sym__eol_character_set_1(lookahead)) SKIP(78)
      END_STATE();
    case 79:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '{') ADVANCE(87);
      if (sym__eol_character_set_1(lookahead)) SKIP(80)
      END_STATE();
    case 80:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '{') ADVANCE(87);
      if (sym__eol_character_set_1(lookahead)) SKIP(80)
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 83:
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(195);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (sym__eol_character_set_1(lookahead)) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 's') ADVANCE(105);
      if (sym__eol_character_set_1(lookahead)) SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_3d);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_animated);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '>') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          (lookahead < '`' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(186);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(189);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '#') ADVANCE(192);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 195:
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
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
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 85},
  [2] = {.lex_state = 85},
  [3] = {.lex_state = 85},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 77},
  [6] = {.lex_state = 77},
  [7] = {.lex_state = 77},
  [8] = {.lex_state = 75},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 75},
  [11] = {.lex_state = 75},
  [12] = {.lex_state = 77},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 75},
  [15] = {.lex_state = 75},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 75},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 75},
  [21] = {.lex_state = 77},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 79},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 75},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
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
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
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
    [anon_sym_style] = ACTIONS(1),
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
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(80),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(53),
    [sym__connection_path] = STATE(63),
    [sym_container] = STATE(53),
    [sym_shape] = STATE(53),
    [sym_shape_key] = STATE(16),
    [sym__root_attribute] = STATE(53),
    [sym__root_attr_key] = STATE(62),
    [sym__common_style_attr_key] = STATE(78),
    [sym_string] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(11),
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
    [sym__eol] = ACTIONS(21),
  },
  [2] = {
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(53),
    [sym__connection_path] = STATE(63),
    [sym_container] = STATE(53),
    [sym_shape] = STATE(53),
    [sym_shape_key] = STATE(16),
    [sym__root_attribute] = STATE(53),
    [sym__root_attr_key] = STATE(62),
    [sym__common_style_attr_key] = STATE(78),
    [sym_string] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(11),
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
    [sym__eol] = ACTIONS(25),
  },
  [3] = {
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(53),
    [sym__connection_path] = STATE(63),
    [sym_container] = STATE(53),
    [sym_shape] = STATE(53),
    [sym_shape_key] = STATE(16),
    [sym__root_attribute] = STATE(53),
    [sym__root_attr_key] = STATE(62),
    [sym__common_style_attr_key] = STATE(78),
    [sym_string] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_direction] = ACTIONS(32),
    [anon_sym_shape] = ACTIONS(35),
    [anon_sym_label] = ACTIONS(35),
    [anon_sym_constraint] = ACTIONS(35),
    [anon_sym_icon] = ACTIONS(35),
    [anon_sym_style] = ACTIONS(35),
    [anon_sym_opacity] = ACTIONS(38),
    [anon_sym_fill] = ACTIONS(38),
    [anon_sym_stroke] = ACTIONS(38),
    [anon_sym_stroke_DASHwidth] = ACTIONS(38),
    [anon_sym_stroke_DASHdash] = ACTIONS(38),
    [anon_sym_border_DASHradius] = ACTIONS(38),
    [anon_sym_font_DASHcolor] = ACTIONS(38),
    [anon_sym_shadow] = ACTIONS(38),
    [anon_sym_multiple] = ACTIONS(38),
    [anon_sym_animated] = ACTIONS(38),
    [anon_sym_link] = ACTIONS(38),
    [sym__text_attr_key] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(50),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
    ACTIONS(55), 19,
      sym__identifier,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
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
  [32] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_3d,
    ACTIONS(65), 1,
      anon_sym_stroke,
    ACTIONS(68), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(50), 1,
      sym__inner_style_attribute,
    STATE(70), 1,
      sym__style_attr_key,
    STATE(76), 1,
      sym__common_style_attr_key,
    ACTIONS(62), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [72] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_3d,
    ACTIONS(77), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(50), 1,
      sym__inner_style_attribute,
    STATE(70), 1,
      sym__style_attr_key,
    STATE(76), 1,
      sym__common_style_attr_key,
    ACTIONS(75), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [112] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(73), 1,
      anon_sym_3d,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(50), 1,
      sym__inner_style_attribute,
    STATE(70), 1,
      sym__style_attr_key,
    STATE(76), 1,
      sym__common_style_attr_key,
    ACTIONS(75), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [152] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      sym__eol,
    STATE(16), 1,
      sym_shape_key,
    STATE(20), 1,
      aux_sym__connection_path_repeat1,
    STATE(29), 1,
      sym_string,
    STATE(63), 1,
      sym__connection_path,
    STATE(10), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(38), 2,
      sym__shape_block_definition,
      aux_sym__shape_block_repeat1,
    STATE(44), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [199] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(73), 1,
      anon_sym_3d,
    STATE(68), 1,
      sym__inner_style_attribute,
    STATE(70), 1,
      sym__style_attr_key,
    STATE(76), 1,
      sym__common_style_attr_key,
    ACTIONS(75), 10,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
  [230] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym__eol,
    STATE(16), 1,
      sym_shape_key,
    STATE(20), 1,
      aux_sym__connection_path_repeat1,
    STATE(29), 1,
      sym_string,
    STATE(63), 1,
      sym__connection_path,
    STATE(11), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(44), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [273] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      sym__identifier,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_BQUOTE,
    ACTIONS(107), 1,
      sym__eol,
    STATE(16), 1,
      sym_shape_key,
    STATE(20), 1,
      aux_sym__connection_path_repeat1,
    STATE(29), 1,
      sym_string,
    STATE(63), 1,
      sym__connection_path,
    STATE(11), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(44), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [316] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_stroke,
    ACTIONS(57), 13,
      anon_sym_RBRACE,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_link,
      sym__eol,
  [338] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym__unquoted_string,
    STATE(34), 1,
      sym_label,
    STATE(51), 1,
      sym_string,
    STATE(56), 1,
      sym__shape_block,
    STATE(74), 1,
      sym__container_block,
    ACTIONS(116), 2,
      sym__eol,
      anon_sym_SEMI,
  [373] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      sym__identifier,
    ACTIONS(121), 1,
      anon_sym_style,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_shape_key,
    STATE(29), 1,
      sym_string,
    STATE(56), 1,
      sym__style_attribute,
    STATE(74), 2,
      sym_container,
      sym_shape,
  [405] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      anon_sym_style,
    ACTIONS(132), 1,
      sym__identifier,
    STATE(18), 1,
      sym_shape_key,
    STATE(29), 1,
      sym_string,
    STATE(56), 1,
      sym__style_attribute,
    STATE(74), 2,
      sym_container,
      sym_shape,
  [437] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      sym_arrow,
    ACTIONS(138), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(57), 1,
      sym__container_block,
    STATE(72), 1,
      sym__shape_block,
    ACTIONS(140), 2,
      sym__eol,
      anon_sym_SEMI,
  [466] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    STATE(20), 1,
      aux_sym__connection_path_repeat1,
    STATE(29), 1,
      sym_string,
    STATE(36), 1,
      sym_shape_key,
    STATE(40), 1,
      sym__connection_path,
  [494] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(57), 1,
      sym__container_block,
    STATE(72), 1,
      sym__shape_block,
    ACTIONS(140), 2,
      sym__eol,
      anon_sym_SEMI,
  [520] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      sym__identifier,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(29), 1,
      sym_string,
    STATE(75), 1,
      sym_shape_key,
  [545] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    STATE(19), 1,
      aux_sym__connection_path_repeat1,
    STATE(29), 1,
      sym_string,
    STATE(35), 1,
      sym_shape_key,
  [570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      sym__dash,
    ACTIONS(156), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [585] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(162), 1,
      sym_arrow,
    STATE(32), 1,
      sym__colon,
    STATE(33), 1,
      aux_sym_connection_repeat1,
    ACTIONS(164), 2,
      sym__eol,
      anon_sym_SEMI,
  [605] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(166), 1,
      sym__unquoted_string,
    STATE(65), 1,
      sym_string,
    STATE(71), 1,
      sym_attr_value,
  [627] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 6,
      anon_sym_RBRACE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
  [639] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [651] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(172), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [663] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(166), 1,
      sym__unquoted_string,
    STATE(58), 1,
      sym_attr_value,
    STATE(65), 1,
      sym_string,
  [685] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      sym__dash,
    ACTIONS(156), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [699] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [711] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(176), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      anon_sym_RBRACE,
      sym__eol,
    ACTIONS(178), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [737] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(114), 1,
      sym__unquoted_string,
    STATE(51), 1,
      sym_string,
    STATE(67), 1,
      sym_label,
  [759] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_arrow,
    STATE(33), 1,
      aux_sym_connection_repeat1,
    ACTIONS(183), 3,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [774] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym__shape_block,
    STATE(66), 1,
      sym__container_block,
    ACTIONS(188), 2,
      sym__eol,
      anon_sym_SEMI,
  [791] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_dot,
    ACTIONS(190), 4,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [804] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_dot,
    ACTIONS(136), 4,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [817] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [827] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      sym__eol,
    STATE(39), 2,
      sym__shape_block_definition,
      aux_sym__shape_block_repeat1,
  [841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym__eol,
    STATE(39), 2,
      sym__shape_block_definition,
      aux_sym__shape_block_repeat1,
  [855] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 4,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [865] = 4,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_string_token2,
    ACTIONS(209), 1,
      sym_line_comment,
    STATE(46), 1,
      aux_sym_string_repeat2,
  [878] = 4,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(211), 1,
      aux_sym_string_token1,
    STATE(49), 1,
      aux_sym_string_repeat1,
  [891] = 4,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      aux_sym_string_token1,
    STATE(42), 1,
      aux_sym_string_repeat1,
  [904] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(24), 1,
      sym__end,
    ACTIONS(217), 2,
      sym__eol,
      anon_sym_SEMI,
  [915] = 4,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      anon_sym_BQUOTE,
    ACTIONS(221), 1,
      aux_sym_string_token3,
    STATE(45), 1,
      aux_sym_string_repeat3,
  [928] = 4,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      aux_sym_string_token2,
    STATE(46), 1,
      aux_sym_string_repeat2,
  [941] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      sym_dot,
    STATE(64), 1,
      sym__colon,
  [954] = 4,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym_string_token2,
    STATE(41), 1,
      aux_sym_string_repeat2,
  [967] = 4,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      aux_sym_string_token1,
    STATE(49), 1,
      aux_sym_string_repeat1,
  [980] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(12), 1,
      sym__end,
    ACTIONS(240), 2,
      sym__eol,
      anon_sym_SEMI,
  [991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1000] = 4,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_token3,
    STATE(54), 1,
      aux_sym_string_repeat3,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(4), 1,
      sym__end,
    ACTIONS(246), 2,
      sym__eol,
      anon_sym_SEMI,
  [1024] = 4,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      sym_line_comment,
    ACTIONS(248), 1,
      aux_sym_string_token3,
    STATE(45), 1,
      aux_sym_string_repeat3,
  [1037] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 2,
      sym__eol,
      anon_sym_SEMI,
  [1045] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 2,
      sym__eol,
      anon_sym_SEMI,
  [1053] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 2,
      sym__eol,
      anon_sym_SEMI,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 2,
      sym__eol,
      anon_sym_SEMI,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 2,
      sym__eol,
      anon_sym_SEMI,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 2,
      sym__eol,
      anon_sym_SEMI,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 2,
      sym__eol,
      anon_sym_SEMI,
  [1093] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym__colon,
  [1103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      sym_arrow,
    STATE(22), 1,
      aux_sym_connection_repeat1,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym__style_attribute_block,
  [1123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 2,
      sym__eol,
      anon_sym_SEMI,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 2,
      sym__eol,
      anon_sym_SEMI,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 2,
      sym__eol,
      anon_sym_SEMI,
  [1147] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 2,
      sym__eol,
      anon_sym_SEMI,
  [1155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 2,
      sym__eol,
      anon_sym_SEMI,
  [1163] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 1,
      anon_sym_COLON,
    STATE(23), 1,
      sym__colon,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 2,
      sym__eol,
      anon_sym_SEMI,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym__eol,
      anon_sym_SEMI,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 2,
      sym__eol,
      anon_sym_SEMI,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 2,
      sym__eol,
      anon_sym_SEMI,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      sym_dot,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 1,
      anon_sym_COLON,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 373,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 466,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 520,
  [SMALL_STATE(20)] = 545,
  [SMALL_STATE(21)] = 570,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 605,
  [SMALL_STATE(24)] = 627,
  [SMALL_STATE(25)] = 639,
  [SMALL_STATE(26)] = 651,
  [SMALL_STATE(27)] = 663,
  [SMALL_STATE(28)] = 685,
  [SMALL_STATE(29)] = 699,
  [SMALL_STATE(30)] = 711,
  [SMALL_STATE(31)] = 723,
  [SMALL_STATE(32)] = 737,
  [SMALL_STATE(33)] = 759,
  [SMALL_STATE(34)] = 774,
  [SMALL_STATE(35)] = 791,
  [SMALL_STATE(36)] = 804,
  [SMALL_STATE(37)] = 817,
  [SMALL_STATE(38)] = 827,
  [SMALL_STATE(39)] = 841,
  [SMALL_STATE(40)] = 855,
  [SMALL_STATE(41)] = 865,
  [SMALL_STATE(42)] = 878,
  [SMALL_STATE(43)] = 891,
  [SMALL_STATE(44)] = 904,
  [SMALL_STATE(45)] = 915,
  [SMALL_STATE(46)] = 928,
  [SMALL_STATE(47)] = 941,
  [SMALL_STATE(48)] = 954,
  [SMALL_STATE(49)] = 967,
  [SMALL_STATE(50)] = 980,
  [SMALL_STATE(51)] = 991,
  [SMALL_STATE(52)] = 1000,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1024,
  [SMALL_STATE(55)] = 1037,
  [SMALL_STATE(56)] = 1045,
  [SMALL_STATE(57)] = 1053,
  [SMALL_STATE(58)] = 1061,
  [SMALL_STATE(59)] = 1069,
  [SMALL_STATE(60)] = 1077,
  [SMALL_STATE(61)] = 1085,
  [SMALL_STATE(62)] = 1093,
  [SMALL_STATE(63)] = 1103,
  [SMALL_STATE(64)] = 1113,
  [SMALL_STATE(65)] = 1123,
  [SMALL_STATE(66)] = 1131,
  [SMALL_STATE(67)] = 1139,
  [SMALL_STATE(68)] = 1147,
  [SMALL_STATE(69)] = 1155,
  [SMALL_STATE(70)] = 1163,
  [SMALL_STATE(71)] = 1173,
  [SMALL_STATE(72)] = 1181,
  [SMALL_STATE(73)] = 1189,
  [SMALL_STATE(74)] = 1197,
  [SMALL_STATE(75)] = 1205,
  [SMALL_STATE(76)] = 1212,
  [SMALL_STATE(77)] = 1219,
  [SMALL_STATE(78)] = 1226,
  [SMALL_STATE(79)] = 1233,
  [SMALL_STATE(80)] = 1240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(76),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(79),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(79),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(43),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(48),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(52),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(11),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(43),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(48),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(52),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(28),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(43),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(48),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(52),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 1),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__container_block_definition, 1), REDUCE(sym__shape_block_definition, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(17),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(39),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(45),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(46),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(49),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [292] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

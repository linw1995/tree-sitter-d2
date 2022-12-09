#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 1
#define TOKEN_COUNT 43
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
  sym__word = 39,
  anon_sym_LF = 40,
  anon_sym_ = 41,
  anon_sym_SEMI = 42,
  sym_source_file = 43,
  sym__new_root_definition = 44,
  sym_connection = 45,
  sym__connection_path = 46,
  sym_container = 47,
  sym__new_container_block = 48,
  sym__new_container_block_definition = 49,
  sym_shape = 50,
  sym_shape_key = 51,
  sym__new_shape_block = 52,
  sym__new_shape_block_definition = 53,
  sym__new_root_attribute = 54,
  sym__root_attr_key = 55,
  sym__style_attribute = 56,
  sym__style_attribute_block = 57,
  sym__inner_style_attribute = 58,
  sym__style_attr_key = 59,
  sym__common_style_attr_key = 60,
  sym_label = 61,
  sym_attr_value = 62,
  sym__colon = 63,
  sym__arrow = 64,
  sym__dot = 65,
  sym_string = 66,
  sym__eol = 67,
  sym__end = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_connection_repeat1 = 70,
  aux_sym__connection_path_repeat1 = 71,
  aux_sym__new_container_block_repeat1 = 72,
  aux_sym__new_shape_block_repeat1 = 73,
  aux_sym__style_attribute_block_repeat1 = 74,
  aux_sym_string_repeat1 = 75,
  aux_sym_string_repeat2 = 76,
  aux_sym_string_repeat3 = 77,
  alias_sym_container_key = 78,
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
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__style_attr_key] = "attr_key",
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
  [sym__root_attr_key] = anon_sym_style,
  [sym__style_attribute] = sym__new_root_attribute,
  [sym__style_attribute_block] = sym__new_container_block,
  [sym__inner_style_attribute] = sym__new_root_attribute,
  [sym__style_attr_key] = anon_sym_style,
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
  [22] = 20,
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
      if (eof) ADVANCE(86);
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
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
      if (anon_sym__character_set_1(lookahead)) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '}') ADVANCE(88);
      if (anon_sym__character_set_1(lookahead)) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '`') ADVANCE(190);
      if (lookahead == '{') ADVANCE(87);
      if (anon_sym__character_set_1(lookahead)) SKIP(2)
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (anon_sym__character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (anon_sym__character_set_1(lookahead)) SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '{') ADVANCE(87);
      if (anon_sym__character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '{') ADVANCE(87);
      if (anon_sym__character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(189);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '`') ADVANCE(190);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '\'') ADVANCE(184);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '>') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'w') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(154);
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
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '<') ADVANCE(11);
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
      if (anon_sym__character_set_1(lookahead)) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == 0) ADVANCE(195);
      if (lookahead == '\n') ADVANCE(194);
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
      if (anon_sym__character_set_1(lookahead)) SKIP(85)
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
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(64);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      if (lookahead == ' ') ADVANCE(7);
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
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 196:
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
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 9},
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
    [sym__word] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym__new_root_definition] = STATE(2),
    [sym_connection] = STATE(40),
    [sym__connection_path] = STATE(68),
    [sym_container] = STATE(40),
    [sym_shape] = STATE(40),
    [sym_shape_key] = STATE(14),
    [sym__new_root_attribute] = STATE(40),
    [sym__root_attr_key] = STATE(73),
    [sym__common_style_attr_key] = STATE(80),
    [sym_string] = STATE(23),
    [sym__eol] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(24),
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
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_direction,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_shape_key,
    STATE(23), 1,
      sym_string,
    STATE(24), 1,
      aux_sym__connection_path_repeat1,
    STATE(68), 1,
      sym__connection_path,
    STATE(73), 1,
      sym__root_attr_key,
    STATE(80), 1,
      sym__common_style_attr_key,
    ACTIONS(25), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(3), 3,
      sym__new_root_definition,
      sym__eol,
      aux_sym_source_file_repeat1,
    STATE(40), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__new_root_attribute,
    ACTIONS(11), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(13), 11,
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
  [76] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(32), 1,
      anon_sym_direction,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    STATE(14), 1,
      sym_shape_key,
    STATE(23), 1,
      sym_string,
    STATE(24), 1,
      aux_sym__connection_path_repeat1,
    STATE(68), 1,
      sym__connection_path,
    STATE(73), 1,
      sym__root_attr_key,
    STATE(80), 1,
      sym__common_style_attr_key,
    ACTIONS(50), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(3), 3,
      sym__new_root_definition,
      sym__eol,
      aux_sym_source_file_repeat1,
    STATE(40), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__new_root_attribute,
    ACTIONS(35), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(38), 11,
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
  [152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
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
  [185] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_3d,
    ACTIONS(65), 1,
      anon_sym_stroke,
    STATE(41), 1,
      sym__inner_style_attribute,
    STATE(72), 1,
      sym__style_attr_key,
    STATE(77), 1,
      sym__common_style_attr_key,
    ACTIONS(68), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(5), 2,
      sym__eol,
      aux_sym__style_attribute_block_repeat1,
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
  [227] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_3d,
    STATE(41), 1,
      sym__inner_style_attribute,
    STATE(72), 1,
      sym__style_attr_key,
    STATE(77), 1,
      sym__common_style_attr_key,
    ACTIONS(77), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(5), 2,
      sym__eol,
      aux_sym__style_attribute_block_repeat1,
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
  [269] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(73), 1,
      anon_sym_3d,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym__inner_style_attribute,
    STATE(72), 1,
      sym__style_attr_key,
    STATE(77), 1,
      sym__common_style_attr_key,
    ACTIONS(81), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(6), 2,
      sym__eol,
      aux_sym__style_attribute_block_repeat1,
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
  [311] = 15,
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
    STATE(14), 1,
      sym_shape_key,
    STATE(23), 1,
      sym_string,
    STATE(24), 1,
      aux_sym__connection_path_repeat1,
    STATE(27), 1,
      sym__eol,
    STATE(68), 1,
      sym__connection_path,
    ACTIONS(87), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(9), 2,
      sym__new_container_block_definition,
      aux_sym__new_container_block_repeat1,
    STATE(38), 2,
      sym__new_shape_block_definition,
      aux_sym__new_shape_block_repeat1,
    STATE(42), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [362] = 13,
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
    STATE(14), 1,
      sym_shape_key,
    STATE(23), 1,
      sym_string,
    STATE(24), 1,
      aux_sym__connection_path_repeat1,
    STATE(68), 1,
      sym__connection_path,
    ACTIONS(91), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(10), 3,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
    STATE(42), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [407] = 13,
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
    STATE(14), 1,
      sym_shape_key,
    STATE(23), 1,
      sym_string,
    STATE(24), 1,
      aux_sym__connection_path_repeat1,
    STATE(68), 1,
      sym__connection_path,
    ACTIONS(107), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(10), 3,
      sym__new_container_block_definition,
      sym__eol,
      aux_sym__new_container_block_repeat1,
    STATE(42), 3,
      sym_connection,
      sym_container,
      sym_shape,
  [452] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 1,
      anon_sym_stroke,
    ACTIONS(57), 14,
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
      anon_sym_LF,
      anon_sym_,
  [475] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(73), 1,
      anon_sym_3d,
    STATE(69), 1,
      sym__inner_style_attribute,
    STATE(72), 1,
      sym__style_attr_key,
    STATE(77), 1,
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
  [506] = 11,
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
    STATE(35), 1,
      sym_label,
    STATE(43), 1,
      sym_string,
    STATE(48), 1,
      sym__new_container_block,
    STATE(49), 1,
      sym__new_shape_block,
    ACTIONS(116), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [542] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(120), 1,
      sym_arrow,
    ACTIONS(122), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(16), 1,
      sym__dot,
    STATE(58), 1,
      sym__new_shape_block,
    STATE(60), 1,
      sym__new_container_block,
    ACTIONS(124), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [575] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(126), 1,
      sym__identifier,
    ACTIONS(128), 1,
      anon_sym_style,
    STATE(17), 1,
      sym_shape_key,
    STATE(23), 1,
      sym_string,
    STATE(49), 1,
      sym__style_attribute,
    STATE(48), 2,
      sym_container,
      sym_shape,
  [607] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      anon_sym_style,
    ACTIONS(130), 1,
      sym__identifier,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(17), 1,
      sym_shape_key,
    STATE(23), 1,
      sym_string,
    STATE(49), 1,
      sym__style_attribute,
    STATE(48), 2,
      sym_container,
      sym_shape,
  [639] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(15), 1,
      sym__dot,
    STATE(58), 1,
      sym__new_shape_block,
    STATE(60), 1,
      sym__new_container_block,
    ACTIONS(124), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [669] = 9,
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
    STATE(23), 1,
      sym_string,
    STATE(24), 1,
      aux_sym__connection_path_repeat1,
    STATE(30), 1,
      sym_shape_key,
    STATE(39), 1,
      sym__connection_path,
  [697] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_arrow,
    STATE(18), 1,
      sym__arrow,
    STATE(29), 1,
      aux_sym_connection_repeat1,
    STATE(36), 1,
      sym__colon,
    ACTIONS(148), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [721] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(152), 1,
      sym__dash,
    ACTIONS(150), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [737] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [750] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      sym__dash,
    ACTIONS(150), 6,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [765] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [778] = 8,
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
    STATE(23), 1,
      sym_string,
    STATE(31), 1,
      sym_shape_key,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
  [803] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [816] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 7,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [829] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(164), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_,
    ACTIONS(162), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [844] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 7,
      anon_sym_RBRACE,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_,
  [857] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      sym_arrow,
    STATE(18), 1,
      sym__arrow,
    STATE(29), 1,
      aux_sym_connection_repeat1,
    ACTIONS(168), 4,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [876] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_dot,
    STATE(45), 1,
      sym__dot,
    ACTIONS(120), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_dot,
    STATE(45), 1,
      sym__dot,
    ACTIONS(175), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [910] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(180), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      sym_string,
    STATE(32), 1,
      aux_sym__connection_path_repeat1,
    STATE(75), 1,
      sym_shape_key,
  [935] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__unquoted_string,
    STATE(53), 1,
      sym_string,
    STATE(54), 1,
      sym_attr_value,
  [957] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__unquoted_string,
    STATE(50), 1,
      sym_attr_value,
    STATE(53), 1,
      sym_string,
  [979] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__new_container_block,
    STATE(64), 1,
      sym__new_shape_block,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [997] = 7,
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
    STATE(43), 1,
      sym_string,
    STATE(57), 1,
      sym_label,
  [1019] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(37), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [1035] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 2,
      anon_sym_LF,
      anon_sym_,
    STATE(37), 3,
      sym__new_shape_block_definition,
      sym__eol,
      aux_sym__new_shape_block_repeat1,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 5,
      anon_sym_COLON,
      sym_arrow,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(4), 2,
      sym__eol,
      sym__end,
    ACTIONS(202), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(11), 2,
      sym__eol,
      sym__end,
    ACTIONS(204), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1088] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(28), 2,
      sym__eol,
      sym__end,
    ACTIONS(206), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1101] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 4,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1111] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      anon_sym_COLON,
    ACTIONS(212), 1,
      sym_dot,
    STATE(12), 1,
      sym__dot,
    STATE(74), 1,
      sym__colon,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1137] = 4,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      aux_sym_string_token2,
    ACTIONS(220), 1,
      sym_line_comment,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(222), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1159] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1168] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1177] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(226), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1186] = 4,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(228), 1,
      anon_sym_BQUOTE,
    ACTIONS(230), 1,
      aux_sym_string_token3,
    STATE(51), 1,
      aux_sym_string_repeat3,
  [1199] = 4,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_string_token2,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1230] = 4,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(253), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1297] = 4,
    ACTIONS(216), 1,
      anon_sym_BQUOTE,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      aux_sym_string_token3,
    STATE(51), 1,
      aux_sym_string_repeat3,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1328] = 4,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      aux_sym_string_token1,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1341] = 4,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(267), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [1354] = 4,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      aux_sym_string_token2,
    STATE(46), 1,
      aux_sym_string_repeat2,
  [1367] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_arrow,
    STATE(18), 1,
      sym__arrow,
    STATE(19), 1,
      aux_sym_connection_repeat1,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(271), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1389] = 4,
    ACTIONS(220), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_BQUOTE,
    ACTIONS(273), 1,
      aux_sym_string_token3,
    STATE(62), 1,
      aux_sym_string_repeat3,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_SEMI,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym__colon,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym__colon,
  [1431] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__style_attribute_block,
  [1441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      sym_dot,
    STATE(45), 1,
      sym__dot,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_COLON,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 227,
  [SMALL_STATE(7)] = 269,
  [SMALL_STATE(8)] = 311,
  [SMALL_STATE(9)] = 362,
  [SMALL_STATE(10)] = 407,
  [SMALL_STATE(11)] = 452,
  [SMALL_STATE(12)] = 475,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 542,
  [SMALL_STATE(15)] = 575,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 669,
  [SMALL_STATE(19)] = 697,
  [SMALL_STATE(20)] = 721,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 750,
  [SMALL_STATE(23)] = 765,
  [SMALL_STATE(24)] = 778,
  [SMALL_STATE(25)] = 803,
  [SMALL_STATE(26)] = 816,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 844,
  [SMALL_STATE(29)] = 857,
  [SMALL_STATE(30)] = 876,
  [SMALL_STATE(31)] = 893,
  [SMALL_STATE(32)] = 910,
  [SMALL_STATE(33)] = 935,
  [SMALL_STATE(34)] = 957,
  [SMALL_STATE(35)] = 979,
  [SMALL_STATE(36)] = 997,
  [SMALL_STATE(37)] = 1019,
  [SMALL_STATE(38)] = 1035,
  [SMALL_STATE(39)] = 1051,
  [SMALL_STATE(40)] = 1062,
  [SMALL_STATE(41)] = 1075,
  [SMALL_STATE(42)] = 1088,
  [SMALL_STATE(43)] = 1101,
  [SMALL_STATE(44)] = 1111,
  [SMALL_STATE(45)] = 1127,
  [SMALL_STATE(46)] = 1137,
  [SMALL_STATE(47)] = 1150,
  [SMALL_STATE(48)] = 1159,
  [SMALL_STATE(49)] = 1168,
  [SMALL_STATE(50)] = 1177,
  [SMALL_STATE(51)] = 1186,
  [SMALL_STATE(52)] = 1199,
  [SMALL_STATE(53)] = 1212,
  [SMALL_STATE(54)] = 1221,
  [SMALL_STATE(55)] = 1230,
  [SMALL_STATE(56)] = 1243,
  [SMALL_STATE(57)] = 1252,
  [SMALL_STATE(58)] = 1261,
  [SMALL_STATE(59)] = 1270,
  [SMALL_STATE(60)] = 1279,
  [SMALL_STATE(61)] = 1288,
  [SMALL_STATE(62)] = 1297,
  [SMALL_STATE(63)] = 1310,
  [SMALL_STATE(64)] = 1319,
  [SMALL_STATE(65)] = 1328,
  [SMALL_STATE(66)] = 1341,
  [SMALL_STATE(67)] = 1354,
  [SMALL_STATE(68)] = 1367,
  [SMALL_STATE(69)] = 1380,
  [SMALL_STATE(70)] = 1389,
  [SMALL_STATE(71)] = 1402,
  [SMALL_STATE(72)] = 1411,
  [SMALL_STATE(73)] = 1421,
  [SMALL_STATE(74)] = 1431,
  [SMALL_STATE(75)] = 1441,
  [SMALL_STATE(76)] = 1451,
  [SMALL_STATE(77)] = 1458,
  [SMALL_STATE(78)] = 1465,
  [SMALL_STATE(79)] = 1472,
  [SMALL_STATE(80)] = 1479,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_root_definition, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__new_root_definition, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(77),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(78),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(78),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(65),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(67),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(70),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_container_block_repeat1, 2), SHIFT_REPEAT(10),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(22),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(65),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(67),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(70),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block_definition, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block_definition, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block_definition, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(18),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(22),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(65),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(67),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(70),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_shape_block_repeat1, 2), SHIFT_REPEAT(37),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(51),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(52),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_root_attribute, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(55),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_container_block, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_shape_block, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
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

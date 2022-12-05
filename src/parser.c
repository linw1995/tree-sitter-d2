#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  sym__root_attr_key = 2,
  anon_sym_style = 3,
  anon_sym_shape = 4,
  anon_sym_label = 5,
  anon_sym_constraint = 6,
  anon_sym_icon = 7,
  anon_sym_width = 8,
  anon_sym_height = 9,
  anon_sym_opacity = 10,
  anon_sym_fill = 11,
  anon_sym_stroke = 12,
  anon_sym_stroke_DASHwidth = 13,
  anon_sym_stroke_DASHdash = 14,
  anon_sym_border_DASHradius = 15,
  anon_sym_font_DASHcolor = 16,
  anon_sym_shadow = 17,
  anon_sym_multiple = 18,
  anon_sym_animated = 19,
  anon_sym_3d = 20,
  anon_sym_link = 21,
  sym__text_attr_key = 22,
  anon_sym_ = 23,
  anon_sym_COLON = 24,
  sym__dash = 25,
  anon_sym_DASH_DASH = 26,
  anon_sym_LT_DASH = 27,
  anon_sym_GT = 28,
  anon_sym_DASH_GT = 29,
  sym__unquoted_string = 30,
  anon_sym_SQUOTE = 31,
  aux_sym_string_token1 = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_token2 = 34,
  anon_sym_BQUOTE = 35,
  aux_sym_string_token3 = 36,
  anon_sym_SEMI = 37,
  anon_sym_LF = 38,
  anon_sym_2 = 39,
  sym_dot = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym_connection = 43,
  sym_shape = 44,
  sym_identifier = 45,
  sym_label = 46,
  sym_attr_value = 47,
  sym__root_attribute = 48,
  sym__style_attribute = 49,
  sym__shape_attribute = 50,
  sym__shape_attr_key = 51,
  sym__style_attr_key = 52,
  sym__identifier = 53,
  sym__colon = 54,
  sym_arrow = 55,
  sym_string = 56,
  sym__end = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_connection_repeat1 = 59,
  aux_sym_shape_repeat1 = 60,
  aux_sym__identifier_repeat1 = 61,
  aux_sym__identifier_repeat2 = 62,
  aux_sym_arrow_repeat1 = 63,
  aux_sym_string_repeat1 = 64,
  aux_sym_string_repeat2 = 65,
  aux_sym_string_repeat3 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
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
  [anon_sym_] = " ",
  [anon_sym_COLON] = ":",
  [sym__dash] = "_dash",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_2] = " ",
  [sym_dot] = "dot",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_identifier] = "identifier",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__root_attribute] = "_root_attribute",
  [sym__style_attribute] = "_style_attribute",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__identifier] = "_identifier",
  [sym__colon] = "_colon",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__identifier_repeat2] = "_identifier_repeat2",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
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
  [anon_sym_] = anon_sym_,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__dash] = sym__dash,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_2] = anon_sym_2,
  [sym_dot] = sym_dot,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_identifier] = sym_identifier,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__root_attribute] = sym__root_attribute,
  [sym__style_attribute] = sym__style_attribute,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__identifier] = sym__identifier,
  [sym__colon] = sym__colon,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__identifier_repeat2] = aux_sym__identifier_repeat2,
  [aux_sym_arrow_repeat1] = aux_sym_arrow_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
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
  [sym_identifier] = {
    .visible = true,
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
  [sym__root_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__colon] = {
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
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
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
  [33] = 11,
  [34] = 10,
  [35] = 35,
  [36] = 36,
  [37] = 8,
  [38] = 18,
  [39] = 15,
  [40] = 13,
  [41] = 14,
  [42] = 42,
  [43] = 22,
  [44] = 23,
  [45] = 19,
  [46] = 25,
  [47] = 20,
  [48] = 28,
  [49] = 17,
  [50] = 21,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 12,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 12,
  [67] = 67,
  [68] = 68,
  [69] = 68,
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 71,
  [110] = 101,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 113,
  [118] = 115,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 122,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '3') ADVANCE(121);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(160);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == 0) ADVANCE(173);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '3') ADVANCE(121);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '`') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(158);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(118);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_dot);
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
      if (lookahead == 'w') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__root_attr_key);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 87},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 87},
  [67] = {.lex_state = 87},
  [68] = {.lex_state = 87},
  [69] = {.lex_state = 87},
  [70] = {.lex_state = 87},
  [71] = {.lex_state = 87},
  [72] = {.lex_state = 87},
  [73] = {.lex_state = 87},
  [74] = {.lex_state = 87},
  [75] = {.lex_state = 87},
  [76] = {.lex_state = 87},
  [77] = {.lex_state = 87},
  [78] = {.lex_state = 87},
  [79] = {.lex_state = 87},
  [80] = {.lex_state = 87},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 87},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 87},
  [86] = {.lex_state = 87},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 87},
  [89] = {.lex_state = 87},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 87},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 87},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 87},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 87},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 87},
  [111] = {.lex_state = 87},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 85},
  [114] = {.lex_state = 87},
  [115] = {.lex_state = 85},
  [116] = {.lex_state = 87},
  [117] = {.lex_state = 85},
  [118] = {.lex_state = 85},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 85},
  [121] = {.lex_state = 85},
  [122] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
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
    [sym__dash] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym__definition] = STATE(6),
    [sym_connection] = STATE(6),
    [sym_shape] = STATE(6),
    [sym_identifier] = STATE(4),
    [sym__root_attribute] = STATE(6),
    [sym__identifier] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym__identifier_repeat1] = STATE(68),
    [aux_sym__identifier_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [sym__root_attr_key] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_style,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(33), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
    STATE(83), 1,
      sym__shape_attr_key,
    STATE(82), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(17), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [40] = 11,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_style,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(33), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
    STATE(83), 1,
      sym__shape_attr_key,
    STATE(84), 2,
      sym__style_attribute,
      sym__shape_attribute,
    ACTIONS(17), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [80] = 15,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      sym__dash,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LT_DASH,
    ACTIONS(33), 1,
      anon_sym_DASH_GT,
    ACTIONS(37), 1,
      sym_dot,
    STATE(5), 1,
      aux_sym_connection_repeat1,
    STATE(36), 1,
      aux_sym_shape_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(63), 1,
      sym__colon,
    STATE(67), 1,
      sym__end,
    STATE(93), 1,
      aux_sym__identifier_repeat1,
    STATE(108), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [128] = 13,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      sym__dash,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      anon_sym_LT_DASH,
    ACTIONS(33), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(58), 1,
      sym__colon,
    STATE(78), 1,
      sym__end,
    STATE(93), 1,
      aux_sym__identifier_repeat1,
    STATE(108), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [170] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      sym__root_attr_key,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(68), 1,
      aux_sym__identifier_repeat1,
    STATE(7), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [205] = 10,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym__word,
    ACTIONS(48), 1,
      sym__root_attr_key,
    ACTIONS(51), 1,
      anon_sym_,
    ACTIONS(54), 1,
      sym__dash,
    STATE(4), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(68), 1,
      aux_sym__identifier_repeat1,
    STATE(7), 5,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      aux_sym_source_file_repeat1,
  [240] = 6,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(63), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [266] = 3,
    ACTIONS(67), 1,
      anon_sym_stroke,
    STATE(79), 1,
      sym__style_attr_key,
    ACTIONS(65), 11,
      anon_sym_opacity,
      anon_sym_fill,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_3d,
      anon_sym_link,
  [286] = 6,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(73), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [312] = 6,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(79), 1,
      sym__dash,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(77), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [338] = 3,
    ACTIONS(83), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 10,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [357] = 3,
    ACTIONS(86), 1,
      sym__word,
    STATE(13), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(89), 10,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [376] = 5,
    ACTIONS(91), 1,
      sym__word,
    ACTIONS(93), 1,
      anon_sym_,
    ACTIONS(95), 1,
      sym__dash,
    STATE(21), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [399] = 5,
    ACTIONS(91), 1,
      sym__word,
    ACTIONS(97), 1,
      anon_sym_,
    ACTIONS(99), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(77), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [422] = 8,
    ACTIONS(103), 1,
      sym__dash,
    ACTIONS(106), 1,
      anon_sym_DASH_DASH,
    ACTIONS(109), 1,
      anon_sym_LT_DASH,
    ACTIONS(112), 1,
      anon_sym_DASH_GT,
    STATE(16), 1,
      aux_sym_connection_repeat1,
    STATE(51), 1,
      sym_arrow,
    STATE(108), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(101), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [451] = 4,
    ACTIONS(115), 1,
      sym__word,
    ACTIONS(117), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(119), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [472] = 5,
    ACTIONS(91), 1,
      sym__word,
    ACTIONS(121), 1,
      anon_sym_,
    ACTIONS(123), 1,
      sym__dash,
    STATE(22), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [495] = 4,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(115), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [516] = 4,
    ACTIONS(115), 1,
      sym__word,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [537] = 4,
    ACTIONS(115), 1,
      sym__word,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(119), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [558] = 4,
    ACTIONS(115), 1,
      sym__word,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [579] = 4,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(115), 1,
      sym__word,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [600] = 3,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(119), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [618] = 1,
    ACTIONS(89), 11,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [632] = 3,
    ACTIONS(117), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(119), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [650] = 3,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(127), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [668] = 1,
    ACTIONS(129), 11,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym__word,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [682] = 3,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [700] = 3,
    ACTIONS(59), 1,
      anon_sym_,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [718] = 3,
    ACTIONS(125), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [736] = 3,
    ACTIONS(69), 1,
      anon_sym_,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 9,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [754] = 6,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(133), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(77), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [777] = 6,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(135), 1,
      sym__dash,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(71), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [800] = 1,
    ACTIONS(137), 10,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [813] = 8,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(141), 1,
      sym_dot,
    STATE(52), 1,
      aux_sym_shape_repeat1,
    STATE(62), 1,
      sym__colon,
    STATE(75), 1,
      sym__end,
    STATE(93), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [840] = 6,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(143), 1,
      sym__dash,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(61), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [863] = 5,
    ACTIONS(145), 1,
      sym__word,
    ACTIONS(147), 1,
      anon_sym_,
    ACTIONS(149), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [883] = 5,
    ACTIONS(145), 1,
      sym__word,
    ACTIONS(151), 1,
      anon_sym_,
    ACTIONS(153), 1,
      sym__dash,
    STATE(47), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(77), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [903] = 4,
    ACTIONS(155), 1,
      sym__word,
    ACTIONS(158), 1,
      sym__dash,
    STATE(40), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(89), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [921] = 5,
    ACTIONS(145), 1,
      sym__word,
    ACTIONS(160), 1,
      anon_sym_,
    ACTIONS(162), 1,
      sym__dash,
    STATE(50), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [941] = 1,
    ACTIONS(101), 9,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [953] = 4,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__word,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [970] = 4,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__word,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(61), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [987] = 4,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1004] = 2,
    ACTIONS(158), 1,
      sym__dash,
    ACTIONS(89), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1017] = 4,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__word,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(71), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1034] = 2,
    ACTIONS(166), 1,
      sym__dash,
    ACTIONS(129), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__word,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1047] = 4,
    ACTIONS(117), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__word,
    STATE(27), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(119), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1064] = 4,
    ACTIONS(125), 1,
      anon_sym_,
    ACTIONS(164), 1,
      sym__word,
    STATE(12), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(119), 5,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1081] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      sym__dash,
    STATE(11), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(42), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym__identifier_repeat1,
  [1103] = 3,
    ACTIONS(170), 1,
      sym_dot,
    STATE(52), 1,
      aux_sym_shape_repeat1,
    ACTIONS(168), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
  [1117] = 7,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__dash,
    STATE(33), 1,
      aux_sym__identifier_repeat2,
    STATE(35), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym__identifier_repeat1,
  [1139] = 3,
    ACTIONS(173), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(175), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1152] = 6,
    ACTIONS(177), 1,
      sym__unquoted_string,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    STATE(94), 1,
      sym_attr_value,
    STATE(104), 1,
      sym_string,
  [1171] = 1,
    ACTIONS(168), 6,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_2,
      sym_dot,
  [1180] = 3,
    ACTIONS(185), 1,
      anon_sym_,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(187), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1193] = 6,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__unquoted_string,
    STATE(81), 1,
      sym_label,
    STATE(99), 1,
      sym_string,
  [1212] = 3,
    ACTIONS(191), 1,
      anon_sym_,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1225] = 6,
    ACTIONS(177), 1,
      sym__unquoted_string,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    STATE(87), 1,
      sym_attr_value,
    STATE(104), 1,
      sym_string,
  [1244] = 3,
    ACTIONS(194), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(196), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1257] = 6,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__unquoted_string,
    STATE(82), 1,
      sym_label,
    STATE(99), 1,
      sym_string,
  [1276] = 6,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      sym__unquoted_string,
    STATE(84), 1,
      sym_label,
    STATE(99), 1,
      sym_string,
  [1295] = 6,
    ACTIONS(177), 1,
      sym__unquoted_string,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE,
    STATE(98), 1,
      sym_attr_value,
    STATE(104), 1,
      sym_string,
  [1314] = 3,
    ACTIONS(185), 1,
      anon_sym_,
    STATE(59), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(175), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1327] = 4,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(201), 1,
      sym__dash,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(81), 2,
      anon_sym_COLON,
      sym__word,
  [1341] = 2,
    ACTIONS(205), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1351] = 5,
    ACTIONS(207), 1,
      sym__word,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(211), 1,
      sym__dash,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1367] = 5,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(213), 1,
      sym__word,
    ACTIONS(215), 1,
      sym__dash,
    STATE(34), 1,
      aux_sym__identifier_repeat2,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1383] = 4,
    ACTIONS(217), 1,
      sym__word,
    ACTIONS(221), 1,
      anon_sym_GT,
    STATE(72), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(219), 2,
      anon_sym_,
      sym__dash,
  [1397] = 4,
    ACTIONS(225), 1,
      anon_sym_,
    ACTIONS(227), 1,
      sym__dash,
    STATE(71), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(223), 2,
      sym__word,
      anon_sym_GT,
  [1411] = 4,
    ACTIONS(230), 1,
      sym__word,
    ACTIONS(234), 1,
      anon_sym_GT,
    STATE(71), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(232), 2,
      anon_sym_,
      sym__dash,
  [1425] = 2,
    ACTIONS(238), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1435] = 2,
    ACTIONS(242), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1445] = 2,
    ACTIONS(246), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1455] = 2,
    ACTIONS(250), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1465] = 2,
    ACTIONS(254), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1475] = 2,
    ACTIONS(258), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(256), 3,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
  [1485] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      anon_sym_,
    STATE(64), 1,
      sym__colon,
    STATE(93), 1,
      aux_sym__identifier_repeat1,
  [1498] = 3,
    ACTIONS(217), 1,
      sym__word,
    STATE(88), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(219), 2,
      anon_sym_,
      sym__dash,
  [1509] = 3,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym__end,
    ACTIONS(262), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1520] = 3,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym__end,
    ACTIONS(266), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1531] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      anon_sym_,
    STATE(55), 1,
      sym__colon,
    STATE(93), 1,
      aux_sym__identifier_repeat1,
  [1544] = 3,
    ACTIONS(272), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym__end,
    ACTIONS(270), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1555] = 4,
    ACTIONS(91), 1,
      sym__word,
    ACTIONS(274), 1,
      anon_sym_,
    ACTIONS(276), 1,
      sym__dash,
    STATE(101), 1,
      aux_sym__identifier_repeat1,
  [1568] = 4,
    ACTIONS(145), 1,
      sym__word,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym__dash,
    STATE(110), 1,
      aux_sym__identifier_repeat1,
  [1581] = 3,
    ACTIONS(284), 1,
      anon_sym_LF,
    STATE(74), 1,
      sym__end,
    ACTIONS(282), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1592] = 3,
    ACTIONS(230), 1,
      sym__word,
    STATE(71), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(232), 2,
      anon_sym_,
      sym__dash,
  [1603] = 4,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      anon_sym_,
    STATE(60), 1,
      sym__colon,
    STATE(93), 1,
      aux_sym__identifier_repeat1,
  [1616] = 3,
    ACTIONS(286), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      aux_sym_string_token3,
    STATE(95), 1,
      aux_sym_string_repeat3,
  [1626] = 2,
    ACTIONS(290), 1,
      sym__word,
    ACTIONS(292), 2,
      anon_sym_,
      sym__dash,
  [1634] = 3,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      aux_sym_string_token3,
    STATE(92), 1,
      aux_sym_string_repeat3,
  [1644] = 3,
    ACTIONS(209), 1,
      anon_sym_,
    ACTIONS(299), 1,
      anon_sym_COLON,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1654] = 2,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(301), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1662] = 3,
    ACTIONS(305), 1,
      anon_sym_BQUOTE,
    ACTIONS(307), 1,
      aux_sym_string_token3,
    STATE(92), 1,
      aux_sym_string_repeat3,
  [1672] = 3,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      aux_sym_string_token2,
    STATE(106), 1,
      aux_sym_string_repeat2,
  [1682] = 2,
    ACTIONS(230), 1,
      sym__word,
    ACTIONS(232), 2,
      anon_sym_,
      sym__dash,
  [1690] = 2,
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(311), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1698] = 2,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(315), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1706] = 3,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_string_token1,
    STATE(100), 1,
      aux_sym_string_repeat1,
  [1716] = 3,
    ACTIONS(115), 1,
      sym__word,
    ACTIONS(209), 1,
      anon_sym_,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1726] = 3,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_string_token2,
    STATE(96), 1,
      aux_sym_string_repeat2,
  [1736] = 3,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_string_token1,
    STATE(107), 1,
      aux_sym_string_repeat1,
  [1746] = 2,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(328), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1754] = 2,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(332), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1762] = 3,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      aux_sym_string_token2,
    STATE(106), 1,
      aux_sym_string_repeat2,
  [1772] = 3,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    STATE(100), 1,
      aux_sym_string_repeat1,
  [1782] = 3,
    ACTIONS(343), 1,
      sym__dash,
    ACTIONS(345), 1,
      anon_sym_DASH_GT,
    STATE(109), 1,
      aux_sym_arrow_repeat1,
  [1792] = 3,
    ACTIONS(225), 1,
      anon_sym_DASH_GT,
    ACTIONS(347), 1,
      sym__dash,
    STATE(109), 1,
      aux_sym_arrow_repeat1,
  [1802] = 3,
    ACTIONS(164), 1,
      sym__word,
    ACTIONS(209), 1,
      anon_sym_,
    STATE(66), 1,
      aux_sym__identifier_repeat1,
  [1812] = 2,
    ACTIONS(217), 1,
      sym__word,
    ACTIONS(219), 2,
      anon_sym_,
      sym__dash,
  [1820] = 2,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(350), 2,
      anon_sym_SEMI,
      anon_sym_2,
  [1828] = 2,
    ACTIONS(354), 1,
      sym__word,
    STATE(8), 1,
      aux_sym__identifier_repeat2,
  [1835] = 2,
    ACTIONS(356), 1,
      anon_sym_,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [1842] = 2,
    ACTIONS(360), 1,
      sym__word,
    STATE(34), 1,
      aux_sym__identifier_repeat2,
  [1849] = 2,
    ACTIONS(362), 1,
      anon_sym_,
    ACTIONS(364), 1,
      anon_sym_COLON,
  [1856] = 2,
    ACTIONS(366), 1,
      sym__word,
    STATE(37), 1,
      aux_sym__identifier_repeat2,
  [1863] = 2,
    ACTIONS(368), 1,
      sym__word,
    STATE(10), 1,
      aux_sym__identifier_repeat2,
  [1870] = 1,
    ACTIONS(370), 1,
      sym_dot,
  [1874] = 1,
    ACTIONS(372), 1,
      sym__word,
  [1878] = 1,
    ACTIONS(374), 1,
      sym__word,
  [1882] = 1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 240,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 357,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 422,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 472,
  [SMALL_STATE(19)] = 495,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 537,
  [SMALL_STATE(22)] = 558,
  [SMALL_STATE(23)] = 579,
  [SMALL_STATE(24)] = 600,
  [SMALL_STATE(25)] = 618,
  [SMALL_STATE(26)] = 632,
  [SMALL_STATE(27)] = 650,
  [SMALL_STATE(28)] = 668,
  [SMALL_STATE(29)] = 682,
  [SMALL_STATE(30)] = 700,
  [SMALL_STATE(31)] = 718,
  [SMALL_STATE(32)] = 736,
  [SMALL_STATE(33)] = 754,
  [SMALL_STATE(34)] = 777,
  [SMALL_STATE(35)] = 800,
  [SMALL_STATE(36)] = 813,
  [SMALL_STATE(37)] = 840,
  [SMALL_STATE(38)] = 863,
  [SMALL_STATE(39)] = 883,
  [SMALL_STATE(40)] = 903,
  [SMALL_STATE(41)] = 921,
  [SMALL_STATE(42)] = 941,
  [SMALL_STATE(43)] = 953,
  [SMALL_STATE(44)] = 970,
  [SMALL_STATE(45)] = 987,
  [SMALL_STATE(46)] = 1004,
  [SMALL_STATE(47)] = 1017,
  [SMALL_STATE(48)] = 1034,
  [SMALL_STATE(49)] = 1047,
  [SMALL_STATE(50)] = 1064,
  [SMALL_STATE(51)] = 1081,
  [SMALL_STATE(52)] = 1103,
  [SMALL_STATE(53)] = 1117,
  [SMALL_STATE(54)] = 1139,
  [SMALL_STATE(55)] = 1152,
  [SMALL_STATE(56)] = 1171,
  [SMALL_STATE(57)] = 1180,
  [SMALL_STATE(58)] = 1193,
  [SMALL_STATE(59)] = 1212,
  [SMALL_STATE(60)] = 1225,
  [SMALL_STATE(61)] = 1244,
  [SMALL_STATE(62)] = 1257,
  [SMALL_STATE(63)] = 1276,
  [SMALL_STATE(64)] = 1295,
  [SMALL_STATE(65)] = 1314,
  [SMALL_STATE(66)] = 1327,
  [SMALL_STATE(67)] = 1341,
  [SMALL_STATE(68)] = 1351,
  [SMALL_STATE(69)] = 1367,
  [SMALL_STATE(70)] = 1383,
  [SMALL_STATE(71)] = 1397,
  [SMALL_STATE(72)] = 1411,
  [SMALL_STATE(73)] = 1425,
  [SMALL_STATE(74)] = 1435,
  [SMALL_STATE(75)] = 1445,
  [SMALL_STATE(76)] = 1455,
  [SMALL_STATE(77)] = 1465,
  [SMALL_STATE(78)] = 1475,
  [SMALL_STATE(79)] = 1485,
  [SMALL_STATE(80)] = 1498,
  [SMALL_STATE(81)] = 1509,
  [SMALL_STATE(82)] = 1520,
  [SMALL_STATE(83)] = 1531,
  [SMALL_STATE(84)] = 1544,
  [SMALL_STATE(85)] = 1555,
  [SMALL_STATE(86)] = 1568,
  [SMALL_STATE(87)] = 1581,
  [SMALL_STATE(88)] = 1592,
  [SMALL_STATE(89)] = 1603,
  [SMALL_STATE(90)] = 1616,
  [SMALL_STATE(91)] = 1626,
  [SMALL_STATE(92)] = 1634,
  [SMALL_STATE(93)] = 1644,
  [SMALL_STATE(94)] = 1654,
  [SMALL_STATE(95)] = 1662,
  [SMALL_STATE(96)] = 1672,
  [SMALL_STATE(97)] = 1682,
  [SMALL_STATE(98)] = 1690,
  [SMALL_STATE(99)] = 1698,
  [SMALL_STATE(100)] = 1706,
  [SMALL_STATE(101)] = 1716,
  [SMALL_STATE(102)] = 1726,
  [SMALL_STATE(103)] = 1736,
  [SMALL_STATE(104)] = 1746,
  [SMALL_STATE(105)] = 1754,
  [SMALL_STATE(106)] = 1762,
  [SMALL_STATE(107)] = 1772,
  [SMALL_STATE(108)] = 1782,
  [SMALL_STATE(109)] = 1792,
  [SMALL_STATE(110)] = 1802,
  [SMALL_STATE(111)] = 1812,
  [SMALL_STATE(112)] = 1820,
  [SMALL_STATE(113)] = 1828,
  [SMALL_STATE(114)] = 1835,
  [SMALL_STATE(115)] = 1842,
  [SMALL_STATE(116)] = 1849,
  [SMALL_STATE(117)] = 1856,
  [SMALL_STATE(118)] = 1863,
  [SMALL_STATE(119)] = 1870,
  [SMALL_STATE(120)] = 1874,
  [SMALL_STATE(121)] = 1878,
  [SMALL_STATE(122)] = 1882,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(12),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(85),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(108),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(80),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(70),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(111),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(86),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat2, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(53),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(59),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 1),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(66),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(71),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(92),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attribute, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__style_attribute, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(100),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(106),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(109),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shape_attr_key, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__style_attr_key, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

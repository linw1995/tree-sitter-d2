#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  anon_sym_ = 2,
  sym__root_attr_key = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_style = 6,
  anon_sym_shape = 7,
  anon_sym_label = 8,
  anon_sym_constraint = 9,
  anon_sym_icon = 10,
  anon_sym_width = 11,
  anon_sym_height = 12,
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
  anon_sym_3d = 23,
  anon_sym_link = 24,
  sym__text_attr_key = 25,
  anon_sym_source_DASHarrowhead = 26,
  anon_sym_target_DASHarrowhead = 27,
  anon_sym_COLON = 28,
  anon_sym_DASH_DASH = 29,
  anon_sym_LT_DASH = 30,
  anon_sym_GT = 31,
  anon_sym_DASH_GT = 32,
  sym__dash = 33,
  sym_dot = 34,
  sym__unquoted_string = 35,
  anon_sym_SQUOTE = 36,
  aux_sym_string_token1 = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_string_token2 = 39,
  anon_sym_BQUOTE = 40,
  aux_sym_string_token3 = 41,
  anon_sym_LF = 42,
  anon_sym_2 = 43,
  anon_sym_SEMI = 44,
  sym_source_file = 45,
  sym__definition = 46,
  sym_connection = 47,
  sym_shape = 48,
  sym_label = 49,
  sym_attr_value = 50,
  sym__root_attribute = 51,
  sym__shape_block = 52,
  sym__shape_block_definition = 53,
  sym__shape_attribute = 54,
  sym__style_attribute = 55,
  sym__style_attr_block = 56,
  sym__inner_style_attribute = 57,
  sym__connection_attribute = 58,
  sym__shape_attr_key = 59,
  sym__style_attr_key = 60,
  sym__connection_attr_key = 61,
  sym__identifier = 62,
  sym_identifier = 63,
  sym__colon = 64,
  sym__arrow = 65,
  sym_arrow = 66,
  sym_string = 67,
  sym__eof = 68,
  sym__end = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym__definition_repeat1 = 71,
  aux_sym_connection_repeat1 = 72,
  aux_sym_shape_repeat1 = 73,
  aux_sym__shape_block_repeat1 = 74,
  aux_sym__style_attr_block_repeat1 = 75,
  aux_sym_identifier_repeat1 = 76,
  aux_sym_arrow_repeat1 = 77,
  aux_sym_string_repeat1 = 78,
  aux_sym_string_repeat2 = 79,
  aux_sym_string_repeat3 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_] = " ",
  [sym__root_attr_key] = "attr_key",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [sym__dash] = "_dash",
  [sym_dot] = "dot",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_LF] = "\n",
  [anon_sym_2] = " ",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_connection] = "connection",
  [sym_shape] = "shape",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__root_attribute] = "_root_attribute",
  [sym__shape_block] = "block",
  [sym__shape_block_definition] = "_shape_block_definition",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__style_attribute] = "_style_attribute",
  [sym__style_attr_block] = "block",
  [sym__inner_style_attribute] = "_inner_style_attribute",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__connection_attr_key] = "attr_key",
  [sym__identifier] = "_identifier",
  [sym_identifier] = "identifier",
  [sym__colon] = "_colon",
  [sym__arrow] = "_arrow",
  [sym_arrow] = "arrow",
  [sym_string] = "string",
  [sym__eof] = "_eof",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym_shape_repeat1] = "shape_repeat1",
  [aux_sym__shape_block_repeat1] = "_shape_block_repeat1",
  [aux_sym__style_attr_block_repeat1] = "_style_attr_block_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_] = anon_sym_,
  [sym__root_attr_key] = sym__root_attr_key,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__dash] = sym__dash,
  [sym_dot] = sym_dot,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_connection] = sym_connection,
  [sym_shape] = sym_shape,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__root_attribute] = sym__root_attribute,
  [sym__shape_block] = sym__shape_block,
  [sym__shape_block_definition] = sym__shape_block_definition,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__style_attribute] = sym__style_attribute,
  [sym__style_attr_block] = sym__shape_block,
  [sym__inner_style_attribute] = sym__inner_style_attribute,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__connection_attr_key] = sym__root_attr_key,
  [sym__identifier] = sym__identifier,
  [sym_identifier] = sym_identifier,
  [sym__colon] = sym__colon,
  [sym__arrow] = sym__arrow,
  [sym_arrow] = sym_arrow,
  [sym_string] = sym_string,
  [sym__eof] = sym__eof,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym_shape_repeat1] = aux_sym_shape_repeat1,
  [aux_sym__shape_block_repeat1] = aux_sym__shape_block_repeat1,
  [aux_sym__style_attr_block_repeat1] = aux_sym__style_attr_block_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__root_attr_key] = {
    .visible = true,
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
  [sym__dash] = {
    .visible = false,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
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
  [sym__shape_block] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attr_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attribute] = {
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
  [sym__connection_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
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
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__eof] = {
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
  [aux_sym__definition_repeat1] = {
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
  [aux_sym__shape_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attr_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
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
  [31] = 10,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
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
  [50] = 49,
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
  [75] = 54,
  [76] = 55,
  [77] = 57,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 56,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 53,
  [86] = 86,
  [87] = 87,
  [88] = 62,
  [89] = 89,
  [90] = 61,
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
  [109] = 109,
  [110] = 58,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 60,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 10,
  [134] = 132,
  [135] = 135,
  [136] = 130,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 73,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 73,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 158,
  [197] = 197,
  [198] = 197,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 192,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 73,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 210,
  [214] = 214,
  [215] = 215,
  [216] = 214,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(105);
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(187);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 104:
      if (eof) ADVANCE(105);
      if (lookahead == 0) ADVANCE(186);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(106);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(188);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_fill);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_animated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '>') ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'y') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 188:
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
      if (lookahead == 'w') ADVANCE(8);
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
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 104},
  [3] = {.lex_state = 104},
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 104},
  [6] = {.lex_state = 104},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 104},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 104},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 104},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 104},
  [32] = {.lex_state = 104},
  [33] = {.lex_state = 104},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 104},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 104},
  [46] = {.lex_state = 104},
  [47] = {.lex_state = 104},
  [48] = {.lex_state = 104},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 104},
  [52] = {.lex_state = 104},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 104},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 104},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 104},
  [71] = {.lex_state = 104},
  [72] = {.lex_state = 104},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 104},
  [75] = {.lex_state = 104},
  [76] = {.lex_state = 104},
  [77] = {.lex_state = 104},
  [78] = {.lex_state = 104},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 104},
  [81] = {.lex_state = 104},
  [82] = {.lex_state = 104},
  [83] = {.lex_state = 104},
  [84] = {.lex_state = 104},
  [85] = {.lex_state = 104},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 104},
  [88] = {.lex_state = 104},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 104},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 104},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 104},
  [111] = {.lex_state = 104},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 104},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 104},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 104},
  [130] = {.lex_state = 104},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 104},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 104},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 104},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 104},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 104},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 104},
  [167] = {.lex_state = 104},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 104},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 104},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 104},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 104},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 104},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 104},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 104},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 104},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 104},
  [214] = {.lex_state = 104},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 104},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__root_attr_key] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(215),
    [sym__definition] = STATE(23),
    [sym_connection] = STATE(23),
    [sym_shape] = STATE(23),
    [sym__root_attribute] = STATE(23),
    [sym__identifier] = STATE(19),
    [sym_identifier] = STATE(19),
    [sym__eof] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym__definition_repeat1] = STATE(87),
    [aux_sym_identifier_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [anon_sym_] = ACTIONS(7),
    [sym__root_attr_key] = ACTIONS(9),
    [sym__dash] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_2] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_style,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(64), 1,
      aux_sym__definition_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(23), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(6), 2,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(104), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [52] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(25), 1,
      anon_sym_,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym__definition_repeat1,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(29), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(5), 2,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(95), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [104] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(68), 1,
      aux_sym__definition_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(23), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(6), 2,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(95), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [156] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(70), 1,
      aux_sym__definition_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(23), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(6), 2,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(103), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [208] = 13,
    ACTIONS(37), 1,
      sym__word,
    ACTIONS(40), 1,
      anon_sym_,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_style,
    ACTIONS(51), 1,
      sym__dash,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(74), 1,
      aux_sym__definition_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(54), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(6), 2,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(106), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(48), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [260] = 15,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym__shape_block_repeat1,
    STATE(19), 1,
      sym__identifier,
    STATE(32), 1,
      aux_sym__definition_repeat1,
    STATE(51), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(65), 1,
      sym_identifier,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(59), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(103), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [316] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(61), 1,
      anon_sym_,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym__definition_repeat1,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(65), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(4), 2,
      sym__eof,
      aux_sym__shape_block_repeat1,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(99), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [368] = 15,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_,
    STATE(5), 1,
      aux_sym__shape_block_repeat1,
    STATE(19), 1,
      sym__identifier,
    STATE(26), 1,
      aux_sym__definition_repeat1,
    STATE(51), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(65), 1,
      sym_identifier,
    STATE(178), 1,
      sym__shape_attr_key,
    ACTIONS(59), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(95), 5,
      sym_connection,
      sym_shape,
      sym__shape_block_definition,
      sym__shape_attribute,
      sym__style_attribute,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [424] = 4,
    ACTIONS(69), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    ACTIONS(74), 2,
      anon_sym_stroke,
      sym__dash,
    ACTIONS(72), 19,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [456] = 9,
    ACTIONS(76), 1,
      anon_sym_,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_stroke,
    STATE(14), 1,
      aux_sym__definition_repeat1,
    STATE(96), 1,
      sym__inner_style_attribute,
    STATE(165), 1,
      sym__style_attr_key,
    ACTIONS(84), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(12), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [496] = 9,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(86), 1,
      anon_sym_,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym__definition_repeat1,
    STATE(94), 1,
      sym__inner_style_attribute,
    STATE(165), 1,
      sym__style_attr_key,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(16), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [536] = 9,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(92), 1,
      anon_sym_,
    STATE(34), 1,
      aux_sym__definition_repeat1,
    STATE(96), 1,
      sym__inner_style_attribute,
    STATE(165), 1,
      sym__style_attr_key,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(16), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [576] = 9,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym__definition_repeat1,
    STATE(94), 1,
      sym__inner_style_attribute,
    STATE(177), 1,
      sym__style_attr_key,
    ACTIONS(96), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(18), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [616] = 9,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(98), 1,
      anon_sym_,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__definition_repeat1,
    STATE(89), 1,
      sym__inner_style_attribute,
    STATE(165), 1,
      sym__style_attr_key,
    ACTIONS(102), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(13), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [656] = 9,
    ACTIONS(104), 1,
      anon_sym_,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_stroke,
    STATE(41), 1,
      aux_sym__definition_repeat1,
    STATE(120), 1,
      sym__inner_style_attribute,
    STATE(165), 1,
      sym__style_attr_key,
    ACTIONS(115), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(16), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(109), 11,
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
  [696] = 9,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(118), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym__definition_repeat1,
    STATE(96), 1,
      sym__inner_style_attribute,
    STATE(177), 1,
      sym__style_attr_key,
    ACTIONS(84), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(12), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [736] = 9,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(120), 1,
      anon_sym_,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym__definition_repeat1,
    STATE(97), 1,
      sym__inner_style_attribute,
    STATE(165), 1,
      sym__style_attr_key,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(16), 2,
      sym__eof,
      aux_sym__style_attr_block_repeat1,
    ACTIONS(80), 11,
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
  [776] = 15,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(126), 1,
      anon_sym_COLON,
    ACTIONS(128), 1,
      anon_sym_DASH_DASH,
    ACTIONS(130), 1,
      anon_sym_LT_DASH,
    ACTIONS(132), 1,
      anon_sym_DASH_GT,
    ACTIONS(134), 1,
      sym__dash,
    ACTIONS(136), 1,
      sym_dot,
    STATE(21), 1,
      aux_sym_connection_repeat1,
    STATE(42), 1,
      sym__colon,
    STATE(49), 1,
      aux_sym__definition_repeat1,
    STATE(59), 1,
      aux_sym_shape_repeat1,
    STATE(180), 1,
      aux_sym_arrow_repeat1,
    STATE(72), 2,
      sym__eof,
      sym__end,
    STATE(116), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(138), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [826] = 7,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      anon_sym_stroke,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(174), 1,
      sym__style_attr_key,
    ACTIONS(72), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(143), 11,
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
  [859] = 14,
    ACTIONS(128), 1,
      anon_sym_DASH_DASH,
    ACTIONS(130), 1,
      anon_sym_LT_DASH,
    ACTIONS(132), 1,
      anon_sym_DASH_GT,
    ACTIONS(134), 1,
      sym__dash,
    ACTIONS(149), 1,
      anon_sym_,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      sym_dot,
    STATE(43), 1,
      aux_sym_connection_repeat1,
    STATE(50), 1,
      aux_sym__definition_repeat1,
    STATE(135), 1,
      sym__colon,
    STATE(180), 1,
      aux_sym_arrow_repeat1,
    STATE(84), 2,
      sym__eof,
      sym__end,
    STATE(116), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(155), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [906] = 7,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(146), 1,
      anon_sym_stroke,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(174), 1,
      sym__style_attr_key,
    ACTIONS(72), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(143), 11,
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
  [939] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      sym__root_attr_key,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(87), 1,
      aux_sym__definition_repeat1,
    ACTIONS(162), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(29), 6,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      aux_sym_source_file_repeat1,
  [977] = 10,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(164), 1,
      sym__word,
    ACTIONS(166), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__dash,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(130), 1,
      aux_sym__definition_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    STATE(119), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(137), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1015] = 5,
    ACTIONS(170), 1,
      anon_sym_,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 1,
      anon_sym_stroke,
    STATE(191), 1,
      aux_sym__definition_repeat1,
    ACTIONS(107), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1043] = 10,
    ACTIONS(178), 1,
      sym__word,
    ACTIONS(181), 1,
      anon_sym_,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      sym__dash,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(52), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(190), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(74), 7,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1081] = 5,
    ACTIONS(176), 1,
      anon_sym_stroke,
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym__definition_repeat1,
    ACTIONS(107), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1109] = 5,
    ACTIONS(176), 1,
      anon_sym_stroke,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      aux_sym__definition_repeat1,
    ACTIONS(107), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1137] = 10,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym__word,
    ACTIONS(210), 1,
      anon_sym_,
    ACTIONS(213), 1,
      sym__root_attr_key,
    ACTIONS(216), 1,
      sym__dash,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(87), 1,
      aux_sym__definition_repeat1,
    ACTIONS(219), 2,
      anon_sym_LF,
      anon_sym_2,
    STATE(19), 2,
      sym__identifier,
      sym_identifier,
    STATE(29), 6,
      sym__definition,
      sym_connection,
      sym_shape,
      sym__root_attribute,
      sym__eof,
      aux_sym_source_file_repeat1,
  [1175] = 5,
    ACTIONS(176), 1,
      anon_sym_stroke,
    ACTIONS(222), 1,
      anon_sym_,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      aux_sym__definition_repeat1,
    ACTIONS(107), 13,
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
      anon_sym_LF,
      anon_sym_2,
  [1203] = 4,
    ACTIONS(181), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    ACTIONS(72), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    ACTIONS(74), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1229] = 10,
    ACTIONS(178), 1,
      sym__word,
    ACTIONS(181), 1,
      anon_sym_,
    ACTIONS(187), 1,
      sym__dash,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(52), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(190), 2,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(74), 7,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1267] = 10,
    ACTIONS(19), 1,
      anon_sym_style,
    ACTIONS(164), 1,
      sym__word,
    ACTIONS(166), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__dash,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(130), 1,
      aux_sym__definition_repeat1,
    STATE(178), 1,
      sym__shape_attr_key,
    STATE(117), 2,
      sym__shape_attribute,
      sym__style_attribute,
    STATE(137), 2,
      sym__identifier,
      sym_identifier,
    ACTIONS(21), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
  [1305] = 6,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(174), 1,
      sym__style_attr_key,
    ACTIONS(80), 11,
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
  [1334] = 6,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(233), 1,
      anon_sym_,
    STATE(41), 1,
      aux_sym__definition_repeat1,
    STATE(141), 1,
      sym__inner_style_attribute,
    STATE(165), 1,
      sym__style_attr_key,
    ACTIONS(80), 11,
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
  [1363] = 2,
    ACTIONS(237), 1,
      anon_sym_stroke,
    ACTIONS(235), 15,
      anon_sym_,
      anon_sym_RBRACE,
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
      anon_sym_LF,
      anon_sym_2,
  [1384] = 2,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
    ACTIONS(237), 9,
      sym__root_attr_key,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1405] = 2,
    ACTIONS(176), 1,
      anon_sym_stroke,
    ACTIONS(107), 15,
      anon_sym_,
      anon_sym_RBRACE,
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
      anon_sym_LF,
      anon_sym_2,
  [1426] = 6,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(174), 1,
      sym__style_attr_key,
    ACTIONS(80), 11,
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
  [1455] = 6,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(231), 1,
      anon_sym_,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(174), 1,
      sym__style_attr_key,
    ACTIONS(80), 11,
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
  [1484] = 5,
    ACTIONS(82), 1,
      anon_sym_stroke,
    ACTIONS(231), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(174), 1,
      sym__style_attr_key,
    ACTIONS(80), 11,
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
  [1510] = 13,
    ACTIONS(241), 1,
      anon_sym_,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      sym__unquoted_string,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      anon_sym_2,
    STATE(79), 1,
      sym_label,
    STATE(119), 1,
      sym__shape_block,
    STATE(124), 1,
      aux_sym__definition_repeat1,
    STATE(153), 1,
      sym_string,
    ACTIONS(253), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(78), 2,
      sym__eof,
      sym__end,
  [1552] = 10,
    ACTIONS(257), 1,
      anon_sym_,
    ACTIONS(262), 1,
      anon_sym_DASH_DASH,
    ACTIONS(265), 1,
      anon_sym_LT_DASH,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    ACTIONS(271), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym_connection_repeat1,
    STATE(93), 1,
      aux_sym__definition_repeat1,
    STATE(180), 1,
      aux_sym_arrow_repeat1,
    STATE(116), 2,
      sym__arrow,
      sym_arrow,
    ACTIONS(260), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1588] = 13,
    ACTIONS(241), 1,
      anon_sym_,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      sym__unquoted_string,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(276), 1,
      anon_sym_2,
    STATE(86), 1,
      sym_label,
    STATE(117), 1,
      sym__shape_block,
    STATE(124), 1,
      aux_sym__definition_repeat1,
    STATE(153), 1,
      sym_string,
    ACTIONS(274), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(82), 2,
      sym__eof,
      sym__end,
  [1630] = 5,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      aux_sym__definition_repeat1,
    ACTIONS(43), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(278), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1655] = 5,
    ACTIONS(286), 1,
      anon_sym_,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym__definition_repeat1,
    ACTIONS(43), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(278), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1680] = 5,
    ACTIONS(292), 1,
      anon_sym_,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      aux_sym__definition_repeat1,
    ACTIONS(43), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(278), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1705] = 5,
    ACTIONS(298), 1,
      anon_sym_,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym__definition_repeat1,
    ACTIONS(43), 3,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(278), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1730] = 11,
    ACTIONS(128), 1,
      anon_sym_DASH_DASH,
    ACTIONS(130), 1,
      anon_sym_LT_DASH,
    ACTIONS(132), 1,
      anon_sym_DASH_GT,
    ACTIONS(134), 1,
      sym__dash,
    ACTIONS(231), 1,
      anon_sym_,
    ACTIONS(304), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    STATE(180), 1,
      aux_sym_arrow_repeat1,
    STATE(189), 1,
      sym_arrow,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1766] = 11,
    ACTIONS(128), 1,
      anon_sym_DASH_DASH,
    ACTIONS(130), 1,
      anon_sym_LT_DASH,
    ACTIONS(132), 1,
      anon_sym_DASH_GT,
    ACTIONS(134), 1,
      sym__dash,
    ACTIONS(231), 1,
      anon_sym_,
    ACTIONS(308), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    STATE(180), 1,
      aux_sym_arrow_repeat1,
    STATE(189), 1,
      sym_arrow,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1802] = 2,
    ACTIONS(313), 5,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(310), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1820] = 2,
    ACTIONS(43), 5,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
    ACTIONS(278), 8,
      anon_sym_style,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
      sym__word,
  [1838] = 5,
    ACTIONS(316), 1,
      sym__word,
    ACTIONS(318), 1,
      anon_sym_,
    ACTIONS(323), 1,
      sym__dash,
    STATE(204), 1,
      aux_sym__definition_repeat1,
    ACTIONS(321), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1861] = 4,
    ACTIONS(326), 1,
      sym__word,
    ACTIONS(330), 1,
      sym__dash,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(328), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1882] = 5,
    ACTIONS(316), 1,
      sym__word,
    ACTIONS(333), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym__dash,
    STATE(204), 1,
      aux_sym__definition_repeat1,
    ACTIONS(328), 8,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1905] = 4,
    ACTIONS(339), 1,
      sym__word,
    ACTIONS(344), 1,
      sym__dash,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(342), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1926] = 4,
    ACTIONS(326), 1,
      sym__word,
    ACTIONS(346), 1,
      sym__dash,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(321), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1947] = 3,
    ACTIONS(349), 1,
      sym__word,
    ACTIONS(353), 1,
      sym__dash,
    ACTIONS(351), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1965] = 8,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      anon_sym_COLON,
    ACTIONS(359), 1,
      sym_dot,
    STATE(44), 1,
      sym__colon,
    STATE(126), 1,
      aux_sym_shape_repeat1,
    STATE(127), 1,
      aux_sym__definition_repeat1,
    STATE(78), 2,
      sym__eof,
      sym__end,
    ACTIONS(253), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [1993] = 3,
    ACTIONS(349), 1,
      sym__word,
    ACTIONS(361), 1,
      sym__dash,
    ACTIONS(328), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2011] = 2,
    ACTIONS(344), 1,
      sym__dash,
    ACTIONS(342), 10,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2027] = 2,
    ACTIONS(365), 1,
      sym__dash,
    ACTIONS(363), 10,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2043] = 2,
    ACTIONS(361), 1,
      sym__dash,
    ACTIONS(328), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2058] = 9,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(367), 1,
      sym__word,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(52), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_2,
  [2087] = 2,
    ACTIONS(378), 1,
      sym__dash,
    ACTIONS(375), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2102] = 2,
    ACTIONS(383), 1,
      sym__dash,
    ACTIONS(381), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2117] = 2,
    ACTIONS(385), 1,
      sym__dash,
    ACTIONS(260), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2132] = 9,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      sym__word,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(52), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_2,
  [2161] = 2,
    ACTIONS(353), 1,
      sym__dash,
    ACTIONS(351), 9,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_DASH_DASH,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2176] = 9,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      sym__word,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(52), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_2,
  [2205] = 2,
    ACTIONS(389), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2219] = 2,
    ACTIONS(393), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2233] = 2,
    ACTIONS(395), 3,
      anon_sym_,
      sym__unquoted_string,
      anon_sym_2,
    ACTIONS(397), 6,
      anon_sym_LBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LF,
      anon_sym_SEMI,
  [2247] = 8,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(367), 1,
      sym__word,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(52), 1,
      sym__eof,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_2,
  [2273] = 4,
    ACTIONS(399), 1,
      sym__word,
    ACTIONS(401), 1,
      sym__dash,
    STATE(81), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(328), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2291] = 5,
    ACTIONS(403), 1,
      sym__word,
    ACTIONS(405), 1,
      anon_sym_,
    ACTIONS(408), 1,
      sym__dash,
    STATE(192), 1,
      aux_sym__definition_repeat1,
    ACTIONS(328), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2311] = 4,
    ACTIONS(399), 1,
      sym__word,
    ACTIONS(410), 1,
      sym__dash,
    STATE(81), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(321), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2329] = 2,
    ACTIONS(414), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(412), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2343] = 6,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      anon_sym_,
    STATE(117), 1,
      sym__shape_block,
    STATE(124), 1,
      aux_sym__definition_repeat1,
    STATE(82), 2,
      sym__eof,
      sym__end,
    ACTIONS(274), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2365] = 2,
    ACTIONS(420), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(418), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2379] = 3,
    ACTIONS(422), 1,
      sym__word,
    STATE(81), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(342), 7,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2395] = 2,
    ACTIONS(427), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2409] = 2,
    ACTIONS(431), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(429), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2423] = 2,
    ACTIONS(435), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      anon_sym_,
      anon_sym_RBRACE,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2437] = 5,
    ACTIONS(403), 1,
      sym__word,
    ACTIONS(437), 1,
      anon_sym_,
    ACTIONS(440), 1,
      sym__dash,
    STATE(192), 1,
      aux_sym__definition_repeat1,
    ACTIONS(321), 5,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2457] = 6,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      anon_sym_,
    STATE(121), 1,
      sym__shape_block,
    STATE(124), 1,
      aux_sym__definition_repeat1,
    STATE(71), 2,
      sym__eof,
      sym__end,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2479] = 8,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(367), 1,
      sym__word,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
    STATE(108), 1,
      sym__eof,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_2,
  [2505] = 1,
    ACTIONS(363), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2516] = 5,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(446), 1,
      anon_sym_,
    STATE(107), 1,
      aux_sym__definition_repeat1,
    STATE(28), 2,
      sym__eof,
      sym__end,
    ACTIONS(448), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2535] = 1,
    ACTIONS(342), 8,
      anon_sym_,
      anon_sym_COLON,
      sym__dash,
      sym_dot,
      sym__word,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2546] = 8,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__unquoted_string,
    STATE(114), 1,
      sym_attr_value,
    STATE(115), 1,
      aux_sym__definition_repeat1,
    STATE(152), 1,
      sym_string,
  [2571] = 8,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym__definition_repeat1,
    STATE(150), 1,
      sym_attr_value,
    STATE(152), 1,
      sym_string,
  [2596] = 8,
    ACTIONS(128), 1,
      anon_sym_DASH_DASH,
    ACTIONS(130), 1,
      anon_sym_LT_DASH,
    ACTIONS(132), 1,
      anon_sym_DASH_GT,
    ACTIONS(134), 1,
      sym__dash,
    ACTIONS(231), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym__definition_repeat1,
    STATE(180), 1,
      aux_sym_arrow_repeat1,
    STATE(189), 1,
      sym_arrow,
  [2621] = 5,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_,
    STATE(118), 1,
      aux_sym__definition_repeat1,
    STATE(30), 2,
      sym__eof,
      sym__end,
    ACTIONS(456), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2640] = 5,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(458), 1,
      anon_sym_,
    STATE(128), 1,
      aux_sym__definition_repeat1,
    STATE(48), 2,
      sym__eof,
      sym__end,
    ACTIONS(460), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2659] = 5,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      anon_sym_,
    STATE(125), 1,
      aux_sym__definition_repeat1,
    STATE(27), 2,
      sym__eof,
      sym__end,
    ACTIONS(464), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2678] = 5,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(466), 1,
      anon_sym_,
    STATE(112), 1,
      aux_sym__definition_repeat1,
    STATE(25), 2,
      sym__eof,
      sym__end,
    ACTIONS(468), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2697] = 8,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym__definition_repeat1,
    STATE(152), 1,
      sym_string,
    STATE(154), 1,
      sym_attr_value,
  [2722] = 5,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      anon_sym_,
    STATE(109), 1,
      aux_sym__definition_repeat1,
    STATE(45), 2,
      sym__eof,
      sym__end,
    ACTIONS(472), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2741] = 8,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym__definition_repeat1,
    STATE(152), 1,
      sym_string,
    STATE(156), 1,
      sym_attr_value,
  [2766] = 8,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym__definition_repeat1,
    STATE(152), 1,
      sym_string,
    STATE(168), 1,
      sym_attr_value,
  [2791] = 8,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__unquoted_string,
    STATE(115), 1,
      aux_sym__definition_repeat1,
    STATE(142), 1,
      sym_attr_value,
    STATE(152), 1,
      sym_string,
  [2816] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      anon_sym_,
    STATE(122), 1,
      aux_sym__definition_repeat1,
    STATE(47), 2,
      sym__eof,
      sym__end,
    ACTIONS(476), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2835] = 5,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      anon_sym_,
    STATE(105), 1,
      aux_sym__definition_repeat1,
    STATE(46), 2,
      sym__eof,
      sym__end,
    ACTIONS(480), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2854] = 5,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2872] = 4,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym__definition_repeat1,
    STATE(52), 2,
      sym__eof,
      sym__end,
    ACTIONS(373), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2888] = 5,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(36), 1,
      sym__eof,
    ACTIONS(486), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2906] = 2,
    ACTIONS(490), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(488), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
  [2918] = 5,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2936] = 2,
    ACTIONS(492), 1,
      sym__word,
    ACTIONS(351), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2948] = 6,
    ACTIONS(166), 1,
      anon_sym_,
    ACTIONS(168), 1,
      sym__dash,
    ACTIONS(494), 1,
      sym__word,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    STATE(130), 1,
      aux_sym__definition_repeat1,
    STATE(137), 2,
      sym__identifier,
      sym_identifier,
  [2968] = 5,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(36), 1,
      sym__eof,
    ACTIONS(486), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [2986] = 4,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym__definition_repeat1,
    STATE(80), 2,
      sym__eof,
      sym__end,
    ACTIONS(498), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3002] = 4,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym__definition_repeat1,
    STATE(123), 2,
      sym__eof,
      sym__end,
    ACTIONS(500), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3018] = 7,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(502), 1,
      anon_sym_,
    ACTIONS(504), 1,
      sym__unquoted_string,
    STATE(133), 1,
      aux_sym__definition_repeat1,
    STATE(157), 1,
      sym_string,
  [3040] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(367), 1,
      sym__word,
    ACTIONS(506), 1,
      anon_sym_,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(136), 1,
      aux_sym__definition_repeat1,
    STATE(67), 2,
      sym__identifier,
      sym_identifier,
  [3060] = 4,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym__definition_repeat1,
    STATE(71), 2,
      sym__eof,
      sym__end,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3076] = 5,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(36), 1,
      sym__eof,
    ACTIONS(486), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3094] = 4,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym__definition_repeat1,
    STATE(82), 2,
      sym__eof,
      sym__end,
    ACTIONS(274), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3110] = 4,
    ACTIONS(508), 1,
      anon_sym_,
    STATE(134), 1,
      aux_sym__definition_repeat1,
    STATE(38), 2,
      sym__eof,
      sym__end,
    ACTIONS(510), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3126] = 4,
    ACTIONS(484), 1,
      anon_sym_,
    STATE(132), 1,
      aux_sym__definition_repeat1,
    STATE(83), 2,
      sym__eof,
      sym__end,
    ACTIONS(512), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3142] = 5,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3160] = 2,
    ACTIONS(516), 2,
      sym__root_attr_key,
      sym__word,
    ACTIONS(514), 5,
      ts_builtin_sym_end,
      anon_sym_,
      sym__dash,
      anon_sym_LF,
      anon_sym_2,
  [3172] = 5,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(518), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3190] = 5,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(36), 1,
      sym__eof,
    ACTIONS(486), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3208] = 3,
    ACTIONS(522), 1,
      sym_dot,
    STATE(126), 1,
      aux_sym_shape_repeat1,
    ACTIONS(520), 5,
      anon_sym_,
      anon_sym_COLON,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3222] = 5,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3240] = 5,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3258] = 2,
    ACTIONS(492), 1,
      sym__word,
    ACTIONS(328), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3270] = 6,
    ACTIONS(168), 1,
      sym__dash,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(494), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(66), 1,
      sym_identifier,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
  [3289] = 1,
    ACTIONS(525), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3298] = 4,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(37), 1,
      sym__eof,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3313] = 4,
    ACTIONS(74), 1,
      sym__unquoted_string,
    ACTIONS(527), 1,
      anon_sym_,
    STATE(133), 1,
      aux_sym__definition_repeat1,
    ACTIONS(72), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3328] = 4,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(36), 1,
      sym__eof,
    ACTIONS(486), 3,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3343] = 6,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_BQUOTE,
    ACTIONS(530), 1,
      sym__unquoted_string,
    STATE(113), 1,
      sym_label,
    STATE(153), 1,
      sym_string,
  [3362] = 6,
    ACTIONS(11), 1,
      sym__dash,
    ACTIONS(367), 1,
      sym__word,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    STATE(66), 1,
      sym_identifier,
  [3381] = 1,
    ACTIONS(520), 6,
      anon_sym_,
      anon_sym_COLON,
      sym_dot,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3390] = 1,
    ACTIONS(532), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3399] = 4,
    ACTIONS(536), 1,
      anon_sym_GT,
    ACTIONS(538), 1,
      sym__dash,
    STATE(147), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(534), 2,
      anon_sym_,
      sym__word,
  [3413] = 1,
    ACTIONS(541), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3421] = 1,
    ACTIONS(543), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3429] = 1,
    ACTIONS(545), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3437] = 1,
    ACTIONS(547), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3445] = 1,
    ACTIONS(549), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3453] = 2,
    ACTIONS(395), 2,
      anon_sym_,
      sym__unquoted_string,
    ACTIONS(397), 3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3463] = 1,
    ACTIONS(551), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3471] = 4,
    ACTIONS(555), 1,
      anon_sym_GT,
    ACTIONS(557), 1,
      sym__dash,
    STATE(158), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(553), 2,
      anon_sym_,
      sym__word,
  [3485] = 5,
    ACTIONS(560), 1,
      anon_sym_,
    ACTIONS(562), 1,
      anon_sym_COLON,
    ACTIONS(564), 1,
      sym_dot,
    STATE(159), 1,
      sym__colon,
    STATE(198), 1,
      aux_sym__definition_repeat1,
  [3501] = 1,
    ACTIONS(566), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3509] = 1,
    ACTIONS(568), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3517] = 1,
    ACTIONS(571), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3525] = 1,
    ACTIONS(573), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3533] = 1,
    ACTIONS(575), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3541] = 1,
    ACTIONS(577), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3549] = 1,
    ACTIONS(579), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3557] = 1,
    ACTIONS(581), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3565] = 1,
    ACTIONS(583), 5,
      anon_sym_,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3573] = 3,
    ACTIONS(587), 1,
      sym__dash,
    STATE(158), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(585), 3,
      anon_sym_,
      anon_sym_GT,
      sym__word,
  [3585] = 4,
    ACTIONS(590), 1,
      anon_sym_,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym__style_attr_block,
    STATE(203), 1,
      aux_sym__definition_repeat1,
  [3598] = 1,
    ACTIONS(594), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3605] = 1,
    ACTIONS(397), 4,
      sym__unquoted_string,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [3612] = 4,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(598), 1,
      anon_sym_COLON,
    STATE(91), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym__definition_repeat1,
  [3625] = 1,
    ACTIONS(600), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3632] = 3,
    ACTIONS(602), 1,
      sym__dash,
    STATE(172), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(534), 2,
      anon_sym_,
      sym__word,
  [3643] = 4,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(605), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym__definition_repeat1,
  [3656] = 4,
    ACTIONS(403), 1,
      sym__word,
    ACTIONS(607), 1,
      anon_sym_,
    ACTIONS(609), 1,
      sym__dash,
    STATE(192), 1,
      aux_sym__definition_repeat1,
  [3669] = 4,
    ACTIONS(316), 1,
      sym__word,
    ACTIONS(611), 1,
      anon_sym_,
    ACTIONS(613), 1,
      sym__dash,
    STATE(204), 1,
      aux_sym__definition_repeat1,
  [3682] = 1,
    ACTIONS(615), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3689] = 3,
    STATE(113), 1,
      sym__connection_attribute,
    STATE(179), 1,
      sym__connection_attr_key,
    ACTIONS(617), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
  [3700] = 1,
    ACTIONS(619), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3707] = 1,
    ACTIONS(621), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3714] = 3,
    ACTIONS(557), 1,
      sym__dash,
    STATE(158), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(553), 2,
      anon_sym_,
      sym__word,
  [3725] = 1,
    ACTIONS(623), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3732] = 4,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(625), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym__definition_repeat1,
  [3745] = 1,
    ACTIONS(627), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3752] = 1,
    ACTIONS(629), 4,
      anon_sym_,
      anon_sym_LF,
      anon_sym_2,
      anon_sym_SEMI,
  [3759] = 4,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(631), 1,
      anon_sym_COLON,
    STATE(92), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym__definition_repeat1,
  [3772] = 4,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(633), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym__definition_repeat1,
  [3785] = 4,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(635), 1,
      anon_sym_COLON,
    STATE(101), 1,
      sym__colon,
    STATE(197), 1,
      aux_sym__definition_repeat1,
  [3798] = 3,
    ACTIONS(536), 1,
      anon_sym_DASH_GT,
    ACTIONS(637), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_arrow_repeat1,
  [3808] = 3,
    ACTIONS(639), 1,
      anon_sym_BQUOTE,
    ACTIONS(641), 1,
      aux_sym_string_token3,
    STATE(205), 1,
      aux_sym_string_repeat3,
  [3818] = 1,
    ACTIONS(553), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [3824] = 3,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3834] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3844] = 3,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      aux_sym_string_token1,
    STATE(185), 1,
      aux_sym_string_repeat1,
  [3854] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3864] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3874] = 3,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      aux_sym_string_token2,
    STATE(188), 1,
      aux_sym_string_repeat2,
  [3884] = 1,
    ACTIONS(655), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [3890] = 3,
    ACTIONS(657), 1,
      anon_sym_BQUOTE,
    ACTIONS(659), 1,
      aux_sym_string_token3,
    STATE(190), 1,
      aux_sym_string_repeat3,
  [3900] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3910] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(492), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3920] = 3,
    ACTIONS(664), 1,
      anon_sym_SQUOTE,
    ACTIONS(666), 1,
      aux_sym_string_token1,
    STATE(185), 1,
      aux_sym_string_repeat1,
  [3930] = 3,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    ACTIONS(668), 1,
      aux_sym_string_token2,
    STATE(201), 1,
      aux_sym_string_repeat2,
  [3940] = 3,
    ACTIONS(639), 1,
      anon_sym_SQUOTE,
    ACTIONS(670), 1,
      aux_sym_string_token1,
    STATE(193), 1,
      aux_sym_string_repeat1,
  [3950] = 3,
    ACTIONS(585), 1,
      anon_sym_DASH_GT,
    ACTIONS(672), 1,
      sym__dash,
    STATE(196), 1,
      aux_sym_arrow_repeat1,
  [3960] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(675), 1,
      anon_sym_COLON,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3970] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(677), 1,
      anon_sym_COLON,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3980] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [3990] = 1,
    ACTIONS(679), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [3996] = 3,
    ACTIONS(664), 1,
      anon_sym_DQUOTE,
    ACTIONS(681), 1,
      aux_sym_string_token2,
    STATE(188), 1,
      aux_sym_string_repeat2,
  [4006] = 3,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [4016] = 3,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [4026] = 3,
    ACTIONS(349), 1,
      sym__word,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [4036] = 3,
    ACTIONS(664), 1,
      anon_sym_BQUOTE,
    ACTIONS(685), 1,
      aux_sym_string_token3,
    STATE(190), 1,
      aux_sym_string_repeat3,
  [4046] = 3,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    STATE(31), 1,
      aux_sym__definition_repeat1,
  [4056] = 1,
    ACTIONS(534), 3,
      anon_sym_,
      sym__dash,
      sym__word,
  [4062] = 1,
    ACTIONS(687), 2,
      anon_sym_,
      anon_sym_COLON,
  [4067] = 1,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_LBRACE,
  [4072] = 2,
    ACTIONS(689), 1,
      sym__word,
    STATE(75), 1,
      aux_sym_identifier_repeat1,
  [4079] = 1,
    ACTIONS(691), 2,
      anon_sym_,
      anon_sym_COLON,
  [4084] = 1,
    ACTIONS(693), 2,
      anon_sym_,
      anon_sym_COLON,
  [4089] = 2,
    ACTIONS(695), 1,
      sym__word,
    STATE(54), 1,
      aux_sym_identifier_repeat1,
  [4096] = 1,
    ACTIONS(492), 1,
      sym__word,
  [4100] = 1,
    ACTIONS(697), 1,
      ts_builtin_sym_end,
  [4104] = 1,
    ACTIONS(349), 1,
      sym__word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 368,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 456,
  [SMALL_STATE(12)] = 496,
  [SMALL_STATE(13)] = 536,
  [SMALL_STATE(14)] = 576,
  [SMALL_STATE(15)] = 616,
  [SMALL_STATE(16)] = 656,
  [SMALL_STATE(17)] = 696,
  [SMALL_STATE(18)] = 736,
  [SMALL_STATE(19)] = 776,
  [SMALL_STATE(20)] = 826,
  [SMALL_STATE(21)] = 859,
  [SMALL_STATE(22)] = 906,
  [SMALL_STATE(23)] = 939,
  [SMALL_STATE(24)] = 977,
  [SMALL_STATE(25)] = 1015,
  [SMALL_STATE(26)] = 1043,
  [SMALL_STATE(27)] = 1081,
  [SMALL_STATE(28)] = 1109,
  [SMALL_STATE(29)] = 1137,
  [SMALL_STATE(30)] = 1175,
  [SMALL_STATE(31)] = 1203,
  [SMALL_STATE(32)] = 1229,
  [SMALL_STATE(33)] = 1267,
  [SMALL_STATE(34)] = 1305,
  [SMALL_STATE(35)] = 1334,
  [SMALL_STATE(36)] = 1363,
  [SMALL_STATE(37)] = 1384,
  [SMALL_STATE(38)] = 1405,
  [SMALL_STATE(39)] = 1426,
  [SMALL_STATE(40)] = 1455,
  [SMALL_STATE(41)] = 1484,
  [SMALL_STATE(42)] = 1510,
  [SMALL_STATE(43)] = 1552,
  [SMALL_STATE(44)] = 1588,
  [SMALL_STATE(45)] = 1630,
  [SMALL_STATE(46)] = 1655,
  [SMALL_STATE(47)] = 1680,
  [SMALL_STATE(48)] = 1705,
  [SMALL_STATE(49)] = 1730,
  [SMALL_STATE(50)] = 1766,
  [SMALL_STATE(51)] = 1802,
  [SMALL_STATE(52)] = 1820,
  [SMALL_STATE(53)] = 1838,
  [SMALL_STATE(54)] = 1861,
  [SMALL_STATE(55)] = 1882,
  [SMALL_STATE(56)] = 1905,
  [SMALL_STATE(57)] = 1926,
  [SMALL_STATE(58)] = 1947,
  [SMALL_STATE(59)] = 1965,
  [SMALL_STATE(60)] = 1993,
  [SMALL_STATE(61)] = 2011,
  [SMALL_STATE(62)] = 2027,
  [SMALL_STATE(63)] = 2043,
  [SMALL_STATE(64)] = 2058,
  [SMALL_STATE(65)] = 2087,
  [SMALL_STATE(66)] = 2102,
  [SMALL_STATE(67)] = 2117,
  [SMALL_STATE(68)] = 2132,
  [SMALL_STATE(69)] = 2161,
  [SMALL_STATE(70)] = 2176,
  [SMALL_STATE(71)] = 2205,
  [SMALL_STATE(72)] = 2219,
  [SMALL_STATE(73)] = 2233,
  [SMALL_STATE(74)] = 2247,
  [SMALL_STATE(75)] = 2273,
  [SMALL_STATE(76)] = 2291,
  [SMALL_STATE(77)] = 2311,
  [SMALL_STATE(78)] = 2329,
  [SMALL_STATE(79)] = 2343,
  [SMALL_STATE(80)] = 2365,
  [SMALL_STATE(81)] = 2379,
  [SMALL_STATE(82)] = 2395,
  [SMALL_STATE(83)] = 2409,
  [SMALL_STATE(84)] = 2423,
  [SMALL_STATE(85)] = 2437,
  [SMALL_STATE(86)] = 2457,
  [SMALL_STATE(87)] = 2479,
  [SMALL_STATE(88)] = 2505,
  [SMALL_STATE(89)] = 2516,
  [SMALL_STATE(90)] = 2535,
  [SMALL_STATE(91)] = 2546,
  [SMALL_STATE(92)] = 2571,
  [SMALL_STATE(93)] = 2596,
  [SMALL_STATE(94)] = 2621,
  [SMALL_STATE(95)] = 2640,
  [SMALL_STATE(96)] = 2659,
  [SMALL_STATE(97)] = 2678,
  [SMALL_STATE(98)] = 2697,
  [SMALL_STATE(99)] = 2722,
  [SMALL_STATE(100)] = 2741,
  [SMALL_STATE(101)] = 2766,
  [SMALL_STATE(102)] = 2791,
  [SMALL_STATE(103)] = 2816,
  [SMALL_STATE(104)] = 2835,
  [SMALL_STATE(105)] = 2854,
  [SMALL_STATE(106)] = 2872,
  [SMALL_STATE(107)] = 2888,
  [SMALL_STATE(108)] = 2906,
  [SMALL_STATE(109)] = 2918,
  [SMALL_STATE(110)] = 2936,
  [SMALL_STATE(111)] = 2948,
  [SMALL_STATE(112)] = 2968,
  [SMALL_STATE(113)] = 2986,
  [SMALL_STATE(114)] = 3002,
  [SMALL_STATE(115)] = 3018,
  [SMALL_STATE(116)] = 3040,
  [SMALL_STATE(117)] = 3060,
  [SMALL_STATE(118)] = 3076,
  [SMALL_STATE(119)] = 3094,
  [SMALL_STATE(120)] = 3110,
  [SMALL_STATE(121)] = 3126,
  [SMALL_STATE(122)] = 3142,
  [SMALL_STATE(123)] = 3160,
  [SMALL_STATE(124)] = 3172,
  [SMALL_STATE(125)] = 3190,
  [SMALL_STATE(126)] = 3208,
  [SMALL_STATE(127)] = 3222,
  [SMALL_STATE(128)] = 3240,
  [SMALL_STATE(129)] = 3258,
  [SMALL_STATE(130)] = 3270,
  [SMALL_STATE(131)] = 3289,
  [SMALL_STATE(132)] = 3298,
  [SMALL_STATE(133)] = 3313,
  [SMALL_STATE(134)] = 3328,
  [SMALL_STATE(135)] = 3343,
  [SMALL_STATE(136)] = 3362,
  [SMALL_STATE(137)] = 3381,
  [SMALL_STATE(138)] = 3390,
  [SMALL_STATE(139)] = 3399,
  [SMALL_STATE(140)] = 3413,
  [SMALL_STATE(141)] = 3421,
  [SMALL_STATE(142)] = 3429,
  [SMALL_STATE(143)] = 3437,
  [SMALL_STATE(144)] = 3445,
  [SMALL_STATE(145)] = 3453,
  [SMALL_STATE(146)] = 3463,
  [SMALL_STATE(147)] = 3471,
  [SMALL_STATE(148)] = 3485,
  [SMALL_STATE(149)] = 3501,
  [SMALL_STATE(150)] = 3509,
  [SMALL_STATE(151)] = 3517,
  [SMALL_STATE(152)] = 3525,
  [SMALL_STATE(153)] = 3533,
  [SMALL_STATE(154)] = 3541,
  [SMALL_STATE(155)] = 3549,
  [SMALL_STATE(156)] = 3557,
  [SMALL_STATE(157)] = 3565,
  [SMALL_STATE(158)] = 3573,
  [SMALL_STATE(159)] = 3585,
  [SMALL_STATE(160)] = 3598,
  [SMALL_STATE(161)] = 3605,
  [SMALL_STATE(162)] = 3612,
  [SMALL_STATE(163)] = 3625,
  [SMALL_STATE(164)] = 3632,
  [SMALL_STATE(165)] = 3643,
  [SMALL_STATE(166)] = 3656,
  [SMALL_STATE(167)] = 3669,
  [SMALL_STATE(168)] = 3682,
  [SMALL_STATE(169)] = 3689,
  [SMALL_STATE(170)] = 3700,
  [SMALL_STATE(171)] = 3707,
  [SMALL_STATE(172)] = 3714,
  [SMALL_STATE(173)] = 3725,
  [SMALL_STATE(174)] = 3732,
  [SMALL_STATE(175)] = 3745,
  [SMALL_STATE(176)] = 3752,
  [SMALL_STATE(177)] = 3759,
  [SMALL_STATE(178)] = 3772,
  [SMALL_STATE(179)] = 3785,
  [SMALL_STATE(180)] = 3798,
  [SMALL_STATE(181)] = 3808,
  [SMALL_STATE(182)] = 3818,
  [SMALL_STATE(183)] = 3824,
  [SMALL_STATE(184)] = 3834,
  [SMALL_STATE(185)] = 3844,
  [SMALL_STATE(186)] = 3854,
  [SMALL_STATE(187)] = 3864,
  [SMALL_STATE(188)] = 3874,
  [SMALL_STATE(189)] = 3884,
  [SMALL_STATE(190)] = 3890,
  [SMALL_STATE(191)] = 3900,
  [SMALL_STATE(192)] = 3910,
  [SMALL_STATE(193)] = 3920,
  [SMALL_STATE(194)] = 3930,
  [SMALL_STATE(195)] = 3940,
  [SMALL_STATE(196)] = 3950,
  [SMALL_STATE(197)] = 3960,
  [SMALL_STATE(198)] = 3970,
  [SMALL_STATE(199)] = 3980,
  [SMALL_STATE(200)] = 3990,
  [SMALL_STATE(201)] = 3996,
  [SMALL_STATE(202)] = 4006,
  [SMALL_STATE(203)] = 4016,
  [SMALL_STATE(204)] = 4026,
  [SMALL_STATE(205)] = 4036,
  [SMALL_STATE(206)] = 4046,
  [SMALL_STATE(207)] = 4056,
  [SMALL_STATE(208)] = 4062,
  [SMALL_STATE(209)] = 4067,
  [SMALL_STATE(210)] = 4072,
  [SMALL_STATE(211)] = 4079,
  [SMALL_STATE(212)] = 4084,
  [SMALL_STATE(213)] = 4089,
  [SMALL_STATE(214)] = 4096,
  [SMALL_STATE(215)] = 4100,
  [SMALL_STATE(216)] = 4104,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(53),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(74),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(148),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(212),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(213),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(211),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(211),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT_REPEAT(16),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(151),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(211),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(211),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(155),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(191),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(143),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attr_block_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(53),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(31),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(173),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(213),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(52),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(183),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(151),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(202),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(155),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(186),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attr_block_repeat1, 2), SHIFT(146),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT(170),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(93),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(164),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(139),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(207),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(180),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(206),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(173),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(184),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(176),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(187),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(171),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(199),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 2), SHIFT(170),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shape_block_repeat1, 1), REDUCE(aux_sym__shape_block_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shape_block_repeat1, 1), REDUCE(aux_sym__shape_block_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(204),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(60),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(69),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(204),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 2), SHIFT(58),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(167),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_identifier, 1), SHIFT(63),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier, 1), REDUCE(sym__identifier, 2),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__identifier, 1), REDUCE(sym__identifier, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_connection_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 5),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 2), SHIFT(192),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 5),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(166),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 6),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape, 6),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), SHIFT(192),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_attribute, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_repeat1, 2), SHIFT_REPEAT(111),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(133),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(147),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 8),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 7),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 6),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 2), SHIFT(158),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3), REDUCE(sym__inner_style_attribute, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 5),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_block, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attribute, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(158),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 8),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 3),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_arrow, 1), SHIFT(172),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attribute, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 6),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_block, 7),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(185),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(188),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arrow, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(190),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(196),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_attr_key, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [697] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

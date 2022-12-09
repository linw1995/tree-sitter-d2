#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 1
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym__identifier = 1,
  anon_sym_ = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_PIPE = 5,
  anon_sym_PIPE_BQUOTE = 6,
  anon_sym_BQUOTE_PIPE = 7,
  sym_language = 8,
  anon_sym_direction = 9,
  anon_sym_shape = 10,
  anon_sym_label = 11,
  anon_sym_constraint = 12,
  anon_sym_icon = 13,
  anon_sym_style = 14,
  anon_sym_width = 15,
  anon_sym_height = 16,
  anon_sym_3d = 17,
  anon_sym_opacity = 18,
  anon_sym_fill = 19,
  anon_sym_stroke = 20,
  anon_sym_stroke_DASHwidth = 21,
  anon_sym_stroke_DASHdash = 22,
  anon_sym_border_DASHradius = 23,
  anon_sym_font_DASHcolor = 24,
  anon_sym_shadow = 25,
  anon_sym_multiple = 26,
  anon_sym_animated = 27,
  anon_sym_link = 28,
  sym__text_attr_key = 29,
  anon_sym_source_DASHarrowhead = 30,
  anon_sym_target_DASHarrowhead = 31,
  sym__dash = 32,
  anon_sym_COLON = 33,
  sym_arrow = 34,
  sym_dot = 35,
  sym__unquoted_string = 36,
  anon_sym_SQUOTE = 37,
  aux_sym_string_token1 = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_string_token2 = 40,
  anon_sym_BQUOTE = 41,
  aux_sym_string_token3 = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  sym_integer = 45,
  sym_float = 46,
  sym_line_comment = 47,
  sym__eol = 48,
  anon_sym_SEMI = 49,
  sym__text_block_raw = 50,
  sym_source_file = 51,
  sym__root_definition = 52,
  sym_connection = 53,
  sym__connection_path = 54,
  sym__connection_block = 55,
  sym__connection_block_definition = 56,
  sym_container = 57,
  sym__container_block = 58,
  sym__container_block_definition = 59,
  sym_shape = 60,
  sym_shape_key = 61,
  sym_text_block = 62,
  sym__text_block_definition = 63,
  sym__root_attribute = 64,
  sym__root_attr_key = 65,
  sym__shape_attribute = 66,
  sym__base_shape_attribute = 67,
  sym__shape_attr_key = 68,
  sym__style_attribute = 69,
  sym__style_attribute_block = 70,
  sym__inner_style_attribute = 71,
  sym__style_attr_key = 72,
  sym__common_style_attr_key = 73,
  sym__connection_attribute = 74,
  sym__connection_arrowhead_attribute = 75,
  sym__connection_arrowhead_attr_key = 76,
  sym_label = 77,
  sym_attr_value = 78,
  sym__colon = 79,
  sym_string = 80,
  sym_boolean = 81,
  sym__end = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_connection_repeat1 = 84,
  aux_sym__connection_path_repeat1 = 85,
  aux_sym__connection_block_repeat1 = 86,
  aux_sym__container_block_repeat1 = 87,
  aux_sym__style_attribute_block_repeat1 = 88,
  aux_sym_string_repeat1 = 89,
  aux_sym_string_repeat2 = 90,
  aux_sym_string_repeat3 = 91,
  alias_sym_container_key = 92,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_BQUOTE] = "|`",
  [anon_sym_BQUOTE_PIPE] = "`|",
  [sym_language] = "language",
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
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_raw] = "raw_text",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym__connection_block_definition] = "_connection_block_definition",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym_text_block] = "text_block",
  [sym__text_block_definition] = "_text_block_definition",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__colon] = "_colon",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_connection_repeat1] = "connection_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_BQUOTE] = anon_sym_PIPE_BQUOTE,
  [anon_sym_BQUOTE_PIPE] = anon_sym_BQUOTE_PIPE,
  [sym_language] = sym_language,
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
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_raw] = sym__text_block_raw,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym__connection_block_definition] = sym__connection_block_definition,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym_text_block] = sym_text_block,
  [sym__text_block_definition] = sym__text_block_definition,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = anon_sym_style,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = anon_sym_style,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__style_attr_key] = anon_sym_style,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = anon_sym_style,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__colon] = sym__colon,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_connection_repeat1] = aux_sym_connection_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
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
  [anon_sym_] = {
    .visible = true,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
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
  [sym__text_block_raw] = {
    .visible = true,
    .named = true,
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
  [sym__connection_block] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_block_definition] = {
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
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__text_block_definition] = {
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
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__base_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attr_key] = {
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
  [sym__connection_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_arrowhead_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_arrowhead_attr_key] = {
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
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym__connection_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__container_block_repeat1] = {
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
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 23,
  [27] = 21,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 33,
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
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
  [103] = 93,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
};

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

static inline bool sym__unquoted_string_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= 11 && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(98);
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '3') ADVANCE(102);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '}') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (anon_sym__character_set_1(lookahead)) SKIP(96)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(175);
      if (lookahead == '}') ADVANCE(101);
      if (anon_sym__character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(175);
      if (lookahead == '}') ADVANCE(101);
      if (anon_sym__character_set_1(lookahead)) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '{') ADVANCE(100);
      if (anon_sym__character_set_1(lookahead)) SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '{') ADVANCE(100);
      if (anon_sym__character_set_1(lookahead)) SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '}') ADVANCE(101);
      if (anon_sym__character_set_1(lookahead)) SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '|') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(225);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(225);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(231);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(226);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '`') ADVANCE(232);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '>') ADVANCE(208);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '>') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'w') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'w') ADVANCE(196);
      END_STATE();
    case 90:
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == '|') ADVANCE(178);
      END_STATE();
    case 92:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 96:
      if (eof) ADVANCE(98);
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '3') ADVANCE(102);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '}') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (anon_sym__character_set_1(lookahead)) SKIP(96)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(118);
      if (anon_sym__character_set_1(lookahead)) SKIP(97)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'k') ADVANCE(203);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'k') ADVANCE(114);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(197);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'y') ADVANCE(183);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(189);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '`') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PIPE_BQUOTE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BQUOTE_PIPE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_3d);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_opacity);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_shadow);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_multiple);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_animated);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_link);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '>') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '>') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '>') ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(99);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '|') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(225);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(228);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(231);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '#') ADVANCE(234);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 244:
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
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 97},
  [2] = {.lex_state = 97},
  [3] = {.lex_state = 97},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 97},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 5, .external_lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5, .external_lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
};

enum {
  ts_external_token__text_block_raw = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_raw] = sym__text_block_raw,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_raw] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_BQUOTE] = ACTIONS(1),
    [sym_language] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_raw] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(109),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(54),
    [sym__connection_path] = STATE(93),
    [sym_container] = STATE(54),
    [sym_shape] = STATE(54),
    [sym_shape_key] = STATE(30),
    [sym__root_attribute] = STATE(54),
    [sym__root_attr_key] = STATE(100),
    [sym__common_style_attr_key] = STATE(114),
    [sym_string] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(47),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(28), 1,
      anon_sym_direction,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(46), 1,
      sym__eol,
    STATE(30), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(47), 1,
      aux_sym__connection_path_repeat1,
    STATE(93), 1,
      sym__connection_path,
    STATE(100), 1,
      sym__root_attr_key,
    STATE(114), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(54), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(31), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(34), 11,
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
  [74] = 18,
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
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym__eol,
    STATE(30), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(47), 1,
      aux_sym__connection_path_repeat1,
    STATE(93), 1,
      sym__connection_path,
    STATE(100), 1,
      sym__root_attr_key,
    STATE(114), 1,
      sym__common_style_attr_key,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(54), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
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
  [148] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(59), 1,
      sym__eol,
    STATE(34), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(47), 1,
      aux_sym__connection_path_repeat1,
    STATE(103), 1,
      sym__connection_path,
    STATE(104), 1,
      sym__shape_attr_key,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(55), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(71), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [208] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      sym__identifier,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_style,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__eol,
    STATE(34), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(47), 1,
      aux_sym__connection_path_repeat1,
    STATE(103), 1,
      sym__connection_path,
    STATE(104), 1,
      sym__shape_attr_key,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(66), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(71), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [268] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__eol,
    STATE(34), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(47), 1,
      aux_sym__connection_path_repeat1,
    STATE(103), 1,
      sym__connection_path,
    STATE(104), 1,
      sym__shape_attr_key,
    STATE(4), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    ACTIONS(55), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(71), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [328] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
    ACTIONS(90), 19,
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
  [360] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      anon_sym_3d,
    ACTIONS(98), 1,
      sym__eol,
    STATE(9), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(81), 1,
      sym__inner_style_attribute,
    STATE(96), 1,
      sym__style_attr_key,
    STATE(108), 1,
      sym__common_style_attr_key,
    ACTIONS(96), 10,
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
  [400] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(94), 1,
      anon_sym_3d,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(81), 1,
      sym__inner_style_attribute,
    STATE(96), 1,
      sym__style_attr_key,
    STATE(108), 1,
      sym__common_style_attr_key,
    ACTIONS(96), 10,
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
  [440] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      anon_sym_3d,
    ACTIONS(112), 1,
      anon_sym_stroke,
    ACTIONS(115), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(81), 1,
      sym__inner_style_attribute,
    STATE(96), 1,
      sym__style_attr_key,
    STATE(108), 1,
      sym__common_style_attr_key,
    ACTIONS(109), 10,
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
  [480] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_stroke,
    ACTIONS(94), 1,
      anon_sym_3d,
    STATE(88), 1,
      sym__inner_style_attribute,
    STATE(96), 1,
      sym__style_attr_key,
    STATE(108), 1,
      sym__common_style_attr_key,
    ACTIONS(96), 10,
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
  [511] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 1,
      anon_sym_stroke,
    ACTIONS(104), 13,
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
  [533] = 13,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    STATE(52), 1,
      sym_label,
    STATE(55), 1,
      sym_string,
    STATE(67), 1,
      sym_text_block,
    STATE(68), 1,
      sym__container_block,
    ACTIONS(120), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [575] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 5,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      sym__eol,
    ACTIONS(138), 8,
      sym__identifier,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
  [596] = 13,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    STATE(52), 1,
      sym_label,
    STATE(55), 1,
      sym_string,
    STATE(67), 1,
      sym_text_block,
    STATE(68), 1,
      sym__container_block,
    ACTIONS(120), 2,
      sym__eol,
      anon_sym_SEMI,
  [637] = 8,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    STATE(86), 1,
      sym_attr_value,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string,
      sym_boolean,
    ACTIONS(142), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [666] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_style,
    ACTIONS(152), 1,
      sym__eol,
    STATE(44), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(150), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(20), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(63), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [695] = 8,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    STATE(105), 1,
      sym_attr_value,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string,
      sym_boolean,
    ACTIONS(142), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [724] = 8,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    STATE(77), 1,
      sym_attr_value,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string,
      sym_boolean,
    ACTIONS(142), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [753] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_style,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 1,
      sym__eol,
    STATE(44), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(150), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(22), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(63), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [782] = 10,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_label,
    STATE(55), 1,
      sym_string,
    STATE(66), 1,
      sym__connection_block,
    ACTIONS(158), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [815] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_style,
    ACTIONS(170), 1,
      sym__eol,
    STATE(44), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(167), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(22), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(63), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [844] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(39), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(67), 1,
      sym__style_attribute,
    STATE(68), 2,
      sym_container,
      sym_shape,
  [876] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(175), 1,
      sym__identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_BQUOTE,
    STATE(39), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(67), 1,
      sym__style_attribute,
    STATE(68), 2,
      sym_container,
      sym_shape,
  [908] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(175), 1,
      sym__identifier,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_BQUOTE,
    STATE(35), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(67), 1,
      sym__style_attribute,
    STATE(68), 2,
      sym_container,
      sym_shape,
  [940] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      anon_sym_style,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(35), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(67), 1,
      sym__style_attribute,
    STATE(68), 2,
      sym_container,
      sym_shape,
  [972] = 10,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_label,
    STATE(55), 1,
      sym_string,
    STATE(66), 1,
      sym__connection_block,
    ACTIONS(158), 2,
      sym__eol,
      anon_sym_SEMI,
  [1004] = 10,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      sym__unquoted_string,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_label,
    STATE(55), 1,
      sym_string,
    STATE(95), 1,
      sym__container_block,
    ACTIONS(187), 2,
      sym__eol,
      anon_sym_SEMI,
  [1036] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      sym_arrow,
    STATE(21), 1,
      sym__colon,
    STATE(41), 1,
      aux_sym_connection_repeat1,
    STATE(83), 1,
      sym__connection_block,
    ACTIONS(189), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1063] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(203), 1,
      sym_arrow,
    ACTIONS(205), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(197), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1090] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      sym_arrow,
    ACTIONS(207), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym__colon,
    STATE(41), 1,
      aux_sym_connection_repeat1,
    STATE(83), 1,
      sym__connection_block,
    ACTIONS(189), 2,
      sym__eol,
      anon_sym_SEMI,
  [1116] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      sym__identifier,
    STATE(38), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(47), 1,
      aux_sym__connection_path_repeat1,
    STATE(48), 1,
      sym__connection_path,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      sym__dash,
    ACTIONS(211), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1160] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_arrow,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(217), 1,
      sym_dot,
    STATE(15), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(197), 2,
      sym__eol,
      anon_sym_SEMI,
  [1186] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(219), 1,
      sym_dot,
    STATE(13), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(197), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_dot,
    ACTIONS(221), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1225] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_dot,
    ACTIONS(203), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1253] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      sym_dot,
    STATE(15), 1,
      sym__colon,
    STATE(87), 1,
      sym__container_block,
    ACTIONS(197), 2,
      sym__eol,
      anon_sym_SEMI,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1289] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      sym_arrow,
    STATE(41), 1,
      aux_sym_connection_repeat1,
    ACTIONS(229), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1306] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      sym__identifier,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_BQUOTE,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(111), 1,
      sym_shape_key,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      sym__dash,
    ACTIONS(211), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1346] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      sym_dot,
    STATE(28), 1,
      sym__colon,
    STATE(98), 1,
      sym__container_block,
    ACTIONS(252), 2,
      sym__eol,
      anon_sym_SEMI,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1382] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1395] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      sym__identifier,
    STATE(36), 1,
      sym_shape_key,
    STATE(40), 1,
      sym_string,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1432] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__connection_block,
    ACTIONS(258), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1447] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1469] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym__container_block,
    ACTIONS(264), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1484] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym__container_block,
    ACTIONS(266), 2,
      sym__eol,
      anon_sym_SEMI,
  [1498] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(7), 1,
      sym__end,
    ACTIONS(268), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1510] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(272), 4,
      sym__identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1539] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(276), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1548] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_token1,
    STATE(70), 1,
      aux_sym_string_repeat1,
  [1561] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      aux_sym_string_token2,
    STATE(75), 1,
      aux_sym_string_repeat2,
  [1574] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(284), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1592] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(50), 1,
      sym__end,
    ACTIONS(288), 2,
      sym__eol,
      anon_sym_SEMI,
  [1603] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      sym_language,
    ACTIONS(292), 1,
      sym__eol,
    STATE(107), 1,
      sym__text_block_definition,
  [1616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      sym_language,
    ACTIONS(292), 1,
      sym__eol,
    STATE(115), 1,
      sym__text_block_definition,
  [1629] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1638] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1647] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1656] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      aux_sym_string_token3,
    STATE(78), 1,
      aux_sym_string_repeat3,
  [1669] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [1682] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(14), 1,
      sym__end,
    ACTIONS(302), 2,
      sym__eol,
      anon_sym_SEMI,
  [1693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(304), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1702] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      sym_dot,
    STATE(94), 1,
      sym__colon,
  [1715] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1724] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_string_token2,
    STATE(90), 1,
      aux_sym_string_repeat2,
  [1737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(316), 1,
      sym__text_block_raw,
    ACTIONS(314), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1757] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(298), 1,
      anon_sym_BQUOTE,
    ACTIONS(320), 1,
      aux_sym_string_token3,
    STATE(85), 1,
      aux_sym_string_repeat3,
  [1770] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(324), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1788] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(12), 1,
      sym__end,
    ACTIONS(326), 2,
      sym__eol,
      anon_sym_SEMI,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1808] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1817] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(332), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1826] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(334), 1,
      anon_sym_BQUOTE,
    ACTIONS(336), 1,
      aux_sym_string_token3,
    STATE(85), 1,
      aux_sym_string_repeat3,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1866] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      anon_sym_SQUOTE,
    ACTIONS(347), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [1879] = 4,
    ACTIONS(136), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_string_token2,
    STATE(90), 1,
      aux_sym_string_repeat2,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1901] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      sym__text_block_raw,
    ACTIONS(357), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1912] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      sym_arrow,
    STATE(29), 1,
      aux_sym_connection_repeat1,
  [1922] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym__style_attribute_block,
  [1932] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 2,
      sym__eol,
      anon_sym_SEMI,
  [1940] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym__colon,
  [1950] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1958] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 2,
      sym__eol,
      anon_sym_SEMI,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_style,
    STATE(95), 1,
      sym__style_attribute,
  [1976] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym__colon,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 2,
      anon_sym_PIPE,
      anon_sym_BQUOTE_PIPE,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 2,
      sym__eol,
      anon_sym_SEMI,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      sym_arrow,
    STATE(31), 1,
      aux_sym_connection_repeat1,
  [2012] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym__colon,
  [2022] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 2,
      sym__eol,
      anon_sym_SEMI,
  [2030] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 1,
      anon_sym_BQUOTE_PIPE,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [2058] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 1,
      sym__eol,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 1,
      sym_dot,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [2086] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(391), 1,
      anon_sym_COLON,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 208,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 328,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 480,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 533,
  [SMALL_STATE(14)] = 575,
  [SMALL_STATE(15)] = 596,
  [SMALL_STATE(16)] = 637,
  [SMALL_STATE(17)] = 666,
  [SMALL_STATE(18)] = 695,
  [SMALL_STATE(19)] = 724,
  [SMALL_STATE(20)] = 753,
  [SMALL_STATE(21)] = 782,
  [SMALL_STATE(22)] = 815,
  [SMALL_STATE(23)] = 844,
  [SMALL_STATE(24)] = 876,
  [SMALL_STATE(25)] = 908,
  [SMALL_STATE(26)] = 940,
  [SMALL_STATE(27)] = 972,
  [SMALL_STATE(28)] = 1004,
  [SMALL_STATE(29)] = 1036,
  [SMALL_STATE(30)] = 1063,
  [SMALL_STATE(31)] = 1090,
  [SMALL_STATE(32)] = 1116,
  [SMALL_STATE(33)] = 1144,
  [SMALL_STATE(34)] = 1160,
  [SMALL_STATE(35)] = 1186,
  [SMALL_STATE(36)] = 1210,
  [SMALL_STATE(37)] = 1225,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1253,
  [SMALL_STATE(40)] = 1276,
  [SMALL_STATE(41)] = 1289,
  [SMALL_STATE(42)] = 1306,
  [SMALL_STATE(43)] = 1331,
  [SMALL_STATE(44)] = 1346,
  [SMALL_STATE(45)] = 1369,
  [SMALL_STATE(46)] = 1382,
  [SMALL_STATE(47)] = 1395,
  [SMALL_STATE(48)] = 1420,
  [SMALL_STATE(49)] = 1432,
  [SMALL_STATE(50)] = 1447,
  [SMALL_STATE(51)] = 1458,
  [SMALL_STATE(52)] = 1469,
  [SMALL_STATE(53)] = 1484,
  [SMALL_STATE(54)] = 1498,
  [SMALL_STATE(55)] = 1510,
  [SMALL_STATE(56)] = 1520,
  [SMALL_STATE(57)] = 1530,
  [SMALL_STATE(58)] = 1539,
  [SMALL_STATE(59)] = 1548,
  [SMALL_STATE(60)] = 1561,
  [SMALL_STATE(61)] = 1574,
  [SMALL_STATE(62)] = 1583,
  [SMALL_STATE(63)] = 1592,
  [SMALL_STATE(64)] = 1603,
  [SMALL_STATE(65)] = 1616,
  [SMALL_STATE(66)] = 1629,
  [SMALL_STATE(67)] = 1638,
  [SMALL_STATE(68)] = 1647,
  [SMALL_STATE(69)] = 1656,
  [SMALL_STATE(70)] = 1669,
  [SMALL_STATE(71)] = 1682,
  [SMALL_STATE(72)] = 1693,
  [SMALL_STATE(73)] = 1702,
  [SMALL_STATE(74)] = 1715,
  [SMALL_STATE(75)] = 1724,
  [SMALL_STATE(76)] = 1737,
  [SMALL_STATE(77)] = 1748,
  [SMALL_STATE(78)] = 1757,
  [SMALL_STATE(79)] = 1770,
  [SMALL_STATE(80)] = 1779,
  [SMALL_STATE(81)] = 1788,
  [SMALL_STATE(82)] = 1799,
  [SMALL_STATE(83)] = 1808,
  [SMALL_STATE(84)] = 1817,
  [SMALL_STATE(85)] = 1826,
  [SMALL_STATE(86)] = 1839,
  [SMALL_STATE(87)] = 1848,
  [SMALL_STATE(88)] = 1857,
  [SMALL_STATE(89)] = 1866,
  [SMALL_STATE(90)] = 1879,
  [SMALL_STATE(91)] = 1892,
  [SMALL_STATE(92)] = 1901,
  [SMALL_STATE(93)] = 1912,
  [SMALL_STATE(94)] = 1922,
  [SMALL_STATE(95)] = 1932,
  [SMALL_STATE(96)] = 1940,
  [SMALL_STATE(97)] = 1950,
  [SMALL_STATE(98)] = 1958,
  [SMALL_STATE(99)] = 1966,
  [SMALL_STATE(100)] = 1976,
  [SMALL_STATE(101)] = 1986,
  [SMALL_STATE(102)] = 1994,
  [SMALL_STATE(103)] = 2002,
  [SMALL_STATE(104)] = 2012,
  [SMALL_STATE(105)] = 2022,
  [SMALL_STATE(106)] = 2030,
  [SMALL_STATE(107)] = 2037,
  [SMALL_STATE(108)] = 2044,
  [SMALL_STATE(109)] = 2051,
  [SMALL_STATE(110)] = 2058,
  [SMALL_STATE(111)] = 2065,
  [SMALL_STATE(112)] = 2072,
  [SMALL_STATE(113)] = 2079,
  [SMALL_STATE(114)] = 2086,
  [SMALL_STATE(115)] = 2093,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(33),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(106),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(73),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(60),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(69),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(108),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(113),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(113),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__container_block_definition, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(73),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(51),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(22),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(43),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(59),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(60),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(32),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(43),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(59),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(60),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(69),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block_definition, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat3, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(85),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(89),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(90),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_definition, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_d2_external_scanner_create(void);
void tree_sitter_d2_external_scanner_destroy(void *);
bool tree_sitter_d2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_d2_external_scanner_serialize(void *, char *);
void tree_sitter_d2_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_d2_external_scanner_create,
      tree_sitter_d2_external_scanner_destroy,
      tree_sitter_d2_external_scanner_scan,
      tree_sitter_d2_external_scanner_serialize,
      tree_sitter_d2_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

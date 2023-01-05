#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 1
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  aux_sym__identifier_token1 = 4,
  aux_sym__identifier_token2 = 5,
  aux_sym__identifier_token3 = 6,
  aux_sym_text_block_token1 = 7,
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
  anon_sym_DQUOTE = 38,
  sym__unescaped_single_string_fragment = 39,
  sym__unescaped_double_string_fragment = 40,
  sym_escape_sequence = 41,
  anon_sym_true = 42,
  anon_sym_false = 43,
  sym_integer = 44,
  sym_float = 45,
  sym_line_comment = 46,
  sym__eol = 47,
  anon_sym_SEMI = 48,
  sym__text_block_start = 49,
  sym__text_block_end = 50,
  sym__text_block_raw_text = 51,
  sym_block_comment = 52,
  sym_source_file = 53,
  sym__root_definition = 54,
  sym_connection = 55,
  sym__connection_path = 56,
  sym__connection_block = 57,
  sym_container = 58,
  sym__container_block = 59,
  sym__container_block_definition = 60,
  sym_shape = 61,
  sym_shape_key = 62,
  sym__identifier = 63,
  sym_text_block = 64,
  sym__root_attribute = 65,
  sym__root_attr_key = 66,
  sym__shape_attribute = 67,
  sym__base_shape_attribute = 68,
  sym__shape_attr_key = 69,
  sym__style_attribute = 70,
  sym__style_attribute_block = 71,
  sym__inner_style_attribute = 72,
  sym__style_attr_key = 73,
  sym__common_style_attr_key = 74,
  sym__connection_attribute = 75,
  sym__connection_arrowhead_attribute = 76,
  sym__connection_arrowhead_attr_key = 77,
  sym_label = 78,
  sym_attr_value = 79,
  sym__colon = 80,
  sym_string = 81,
  sym_boolean = 82,
  sym__end = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_connection_repeat1 = 85,
  aux_sym__connection_path_repeat1 = 86,
  aux_sym__connection_block_repeat1 = 87,
  aux_sym__container_block_repeat1 = 88,
  aux_sym__identifier_repeat1 = 89,
  aux_sym__style_attribute_block_repeat1 = 90,
  aux_sym_string_repeat1 = 91,
  alias_sym_container_key = 92,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [aux_sym_text_block_token1] = "text_block_token1",
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
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_single_string_fragment] = "string_fragment",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [sym__eol] = "_eol",
  [anon_sym_SEMI] = ";",
  [sym__text_block_start] = "|",
  [sym__text_block_end] = "|",
  [sym__text_block_raw_text] = "raw_text",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__identifier] = "_identifier",
  [sym_text_block] = "text_block",
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
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [aux_sym_text_block_token1] = aux_sym_text_block_token1,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__unescaped_double_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [sym__eol] = sym__eol,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_start] = sym__text_block_start,
  [sym__text_block_end] = sym__text_block_start,
  [sym__text_block_raw_text] = sym__text_block_raw_text,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__identifier] = sym__identifier,
  [sym_text_block] = sym_text_block,
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
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_container_key] = alias_sym_container_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_block_token1] = {
    .visible = false,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
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
  [sym__text_block_start] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_end] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
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
  [aux_sym__identifier_repeat1] = {
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
  [22] = 21,
  [23] = 17,
  [24] = 20,
  [25] = 18,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 28,
  [31] = 27,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 45,
  [47] = 38,
  [48] = 40,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 42,
  [63] = 63,
  [64] = 43,
  [65] = 65,
  [66] = 66,
  [67] = 49,
  [68] = 45,
  [69] = 69,
  [70] = 51,
  [71] = 65,
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
  [103] = 103,
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
  [128] = 127,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
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

static inline bool anon_sym__character_set_2(int32_t c) {
  return (c < 8232
    ? (c < 5760
      ? (c < 160
        ? (c >= '\t' && c <= '\f')
        : c <= 160)
      : (c <= 5760 || (c >= 8192 && c <= 8202)))
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

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(173);
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_1(lookahead)) SKIP(170)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '3') ADVANCE(55);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '3') ADVANCE(55);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_1(lookahead)) SKIP(14)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_1(lookahead)) SKIP(14)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(244);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(244);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == 's') ADVANCE(192);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(153);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(23)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == 's') ADVANCE(192);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(22)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(23)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(244);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(153);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(197);
      if (sym__unquoted_string_character_set_1(lookahead)) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(248);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(248);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(213);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(219);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(253);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 157:
      if (lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 158:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 159:
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 161:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 162:
      if (lookahead == '{') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 163:
      if (lookahead == '}') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 169:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 170:
      if (eof) ADVANCE(173);
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'h') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (anon_sym__character_set_1(lookahead)) SKIP(170)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 171:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 's') ADVANCE(183);
      if (anon_sym__character_set_1(lookahead)) SKIP(172)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 's') ADVANCE(183);
      if (anon_sym__character_set_1(lookahead)) SKIP(172)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(174);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ';') ADVANCE(261);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(244);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(248);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(250);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 171, .external_lex_state = 2},
  [2] = {.lex_state = 171, .external_lex_state = 2},
  [3] = {.lex_state = 171, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 171, .external_lex_state = 2},
  [8] = {.lex_state = 9, .external_lex_state = 2},
  [9] = {.lex_state = 9, .external_lex_state = 2},
  [10] = {.lex_state = 9, .external_lex_state = 2},
  [11] = {.lex_state = 9, .external_lex_state = 2},
  [12] = {.lex_state = 9, .external_lex_state = 2},
  [13] = {.lex_state = 9, .external_lex_state = 2},
  [14] = {.lex_state = 9, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 8, .external_lex_state = 3},
  [22] = {.lex_state = 15, .external_lex_state = 3},
  [23] = {.lex_state = 7, .external_lex_state = 2},
  [24] = {.lex_state = 7, .external_lex_state = 2},
  [25] = {.lex_state = 7, .external_lex_state = 2},
  [26] = {.lex_state = 16, .external_lex_state = 3},
  [27] = {.lex_state = 20, .external_lex_state = 2},
  [28] = {.lex_state = 20, .external_lex_state = 2},
  [29] = {.lex_state = 20, .external_lex_state = 2},
  [30] = {.lex_state = 20, .external_lex_state = 2},
  [31] = {.lex_state = 20, .external_lex_state = 2},
  [32] = {.lex_state = 20, .external_lex_state = 2},
  [33] = {.lex_state = 24, .external_lex_state = 2},
  [34] = {.lex_state = 24, .external_lex_state = 2},
  [35] = {.lex_state = 9, .external_lex_state = 2},
  [36] = {.lex_state = 24, .external_lex_state = 2},
  [37] = {.lex_state = 9, .external_lex_state = 2},
  [38] = {.lex_state = 15, .external_lex_state = 2},
  [39] = {.lex_state = 9, .external_lex_state = 2},
  [40] = {.lex_state = 15, .external_lex_state = 2},
  [41] = {.lex_state = 8, .external_lex_state = 2},
  [42] = {.lex_state = 9, .external_lex_state = 2},
  [43] = {.lex_state = 9, .external_lex_state = 2},
  [44] = {.lex_state = 9, .external_lex_state = 2},
  [45] = {.lex_state = 9, .external_lex_state = 2},
  [46] = {.lex_state = 9, .external_lex_state = 2},
  [47] = {.lex_state = 16, .external_lex_state = 2},
  [48] = {.lex_state = 16, .external_lex_state = 2},
  [49] = {.lex_state = 9, .external_lex_state = 2},
  [50] = {.lex_state = 21, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 21, .external_lex_state = 2},
  [53] = {.lex_state = 9, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 9, .external_lex_state = 2},
  [56] = {.lex_state = 9, .external_lex_state = 2},
  [57] = {.lex_state = 9, .external_lex_state = 2},
  [58] = {.lex_state = 9, .external_lex_state = 2},
  [59] = {.lex_state = 9, .external_lex_state = 2},
  [60] = {.lex_state = 21, .external_lex_state = 2},
  [61] = {.lex_state = 9, .external_lex_state = 2},
  [62] = {.lex_state = 7, .external_lex_state = 2},
  [63] = {.lex_state = 9, .external_lex_state = 2},
  [64] = {.lex_state = 9, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 9, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 9, .external_lex_state = 2},
  [69] = {.lex_state = 9, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 9, .external_lex_state = 2},
  [77] = {.lex_state = 9, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 9, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 25, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 25, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 21, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 25, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 26, .external_lex_state = 2},
  [127] = {.lex_state = 9, .external_lex_state = 2},
  [128] = {.lex_state = 9, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 9, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 26, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 27, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
  ts_external_token_block_comment = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token__text_block_end] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
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
    [anon_sym_link] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_start] = ACTIONS(1),
    [sym__text_block_end] = ACTIONS(1),
    [sym__text_block_raw_text] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(140),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(97),
    [sym__connection_path] = STATE(130),
    [sym_container] = STATE(97),
    [sym_shape] = STATE(97),
    [sym_shape_key] = STATE(46),
    [sym__identifier] = STATE(63),
    [sym__root_attribute] = STATE(97),
    [sym__root_attr_key] = STATE(133),
    [sym__common_style_attr_key] = STATE(145),
    [sym_string] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__identifier_token1] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(11),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(15),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(9), 1,
      anon_sym_direction,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__eol,
    STATE(46), 1,
      sym_shape_key,
    STATE(60), 1,
      aux_sym__connection_path_repeat1,
    STATE(130), 1,
      sym__connection_path,
    STATE(133), 1,
      sym__root_attr_key,
    STATE(145), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(97), 4,
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
    ACTIONS(13), 10,
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
  [78] = 19,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__identifier_token1,
    ACTIONS(34), 1,
      anon_sym_direction,
    ACTIONS(43), 1,
      anon_sym_stroke,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_escape_sequence,
    ACTIONS(55), 1,
      sym__eol,
    STATE(46), 1,
      sym_shape_key,
    STATE(60), 1,
      aux_sym__connection_path_repeat1,
    STATE(130), 1,
      sym__connection_path,
    STATE(133), 1,
      sym__root_attr_key,
    STATE(145), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(97), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(37), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(40), 10,
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
  [156] = 16,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      aux_sym__identifier_token1,
    ACTIONS(66), 1,
      anon_sym_style,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_escape_sequence,
    ACTIONS(78), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__container_block_repeat1,
    STATE(60), 1,
      aux_sym__connection_path_repeat1,
    STATE(68), 1,
      sym_shape_key,
    STATE(127), 1,
      sym__connection_path,
    STATE(131), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    ACTIONS(63), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(117), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [218] = 16,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(87), 1,
      sym__eol,
    STATE(4), 1,
      aux_sym__container_block_repeat1,
    STATE(45), 1,
      sym_shape_key,
    STATE(60), 1,
      aux_sym__connection_path_repeat1,
    STATE(128), 1,
      sym__connection_path,
    STATE(131), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    ACTIONS(83), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(111), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [280] = 16,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(45), 1,
      sym_shape_key,
    STATE(60), 1,
      aux_sym__connection_path_repeat1,
    STATE(128), 1,
      sym__connection_path,
    STATE(131), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    ACTIONS(83), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(95), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [342] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(95), 2,
      aux_sym__identifier_token1,
      anon_sym_stroke,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
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
      sym__text_attr_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [375] = 10,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(101), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(105), 1,
      sym__inner_style_attribute,
    STATE(132), 1,
      sym__style_attr_key,
    STATE(135), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 10,
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
  [416] = 10,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      anon_sym_3d,
    ACTIONS(111), 1,
      anon_sym_stroke,
    ACTIONS(114), 1,
      sym__eol,
    STATE(9), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(122), 1,
      sym__inner_style_attribute,
    STATE(132), 1,
      sym__style_attr_key,
    STATE(135), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(108), 10,
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
  [457] = 10,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym__eol,
    STATE(9), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(115), 1,
      sym__inner_style_attribute,
    STATE(132), 1,
      sym__style_attr_key,
    STATE(135), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 10,
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
  [498] = 7,
    ACTIONS(15), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(90), 1,
      sym__inner_style_attribute,
    STATE(132), 1,
      sym__style_attr_key,
    STATE(135), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(13), 10,
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
  [530] = 4,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(103), 12,
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
  [555] = 4,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(103), 12,
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
  [580] = 3,
    ACTIONS(124), 1,
      anon_sym_stroke,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(103), 13,
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
  [603] = 4,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(58), 11,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [627] = 4,
    ACTIONS(132), 1,
      aux_sym__identifier_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(58), 11,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [651] = 6,
    ACTIONS(141), 1,
      aux_sym__identifier_token3,
    ACTIONS(143), 1,
      sym__dash,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(139), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(137), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [679] = 5,
    STATE(18), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(147), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(150), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(145), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [705] = 3,
    ACTIONS(132), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(58), 12,
      anon_sym_RBRACE,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [727] = 6,
    ACTIONS(156), 1,
      aux_sym__identifier_token3,
    ACTIONS(158), 1,
      sym__dash,
    STATE(17), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(154), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(152), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [755] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      sym__text_block_start,
    STATE(73), 1,
      sym_label,
    STATE(75), 1,
      sym_string,
    STATE(81), 1,
      sym_text_block,
    STATE(96), 1,
      sym__container_block,
    ACTIONS(160), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [794] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      sym__text_block_start,
    STATE(73), 1,
      sym_label,
    STATE(75), 1,
      sym_string,
    STATE(81), 1,
      sym_text_block,
    STATE(96), 1,
      sym__container_block,
    ACTIONS(160), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [833] = 6,
    ACTIONS(143), 1,
      sym__dash,
    ACTIONS(176), 1,
      aux_sym__identifier_token3,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(174), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(137), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [860] = 6,
    ACTIONS(158), 1,
      sym__dash,
    ACTIONS(180), 1,
      aux_sym__identifier_token3,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(178), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(152), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [887] = 5,
    STATE(25), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(150), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(182), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(145), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [912] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(172), 1,
      sym__text_block_start,
    STATE(73), 1,
      sym_label,
    STATE(75), 1,
      sym_string,
    STATE(81), 1,
      sym_text_block,
    STATE(96), 1,
      sym__container_block,
    ACTIONS(160), 2,
      sym__eol,
      anon_sym_SEMI,
  [950] = 10,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(185), 1,
      aux_sym__identifier_token1,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(54), 1,
      sym_shape_key,
    STATE(81), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(96), 2,
      sym_container,
      sym_shape,
  [984] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(197), 1,
      aux_sym__identifier_token1,
    ACTIONS(199), 1,
      sym_escape_sequence,
    STATE(51), 1,
      sym_shape_key,
    STATE(81), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(96), 2,
      sym_container,
      sym_shape,
  [1018] = 10,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(185), 1,
      aux_sym__identifier_token1,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(51), 1,
      sym_shape_key,
    STATE(81), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(96), 2,
      sym_container,
      sym_shape,
  [1052] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(197), 1,
      aux_sym__identifier_token1,
    ACTIONS(199), 1,
      sym_escape_sequence,
    STATE(54), 1,
      sym_shape_key,
    STATE(81), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(96), 2,
      sym_container,
      sym_shape,
  [1086] = 10,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(185), 1,
      aux_sym__identifier_token1,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(70), 1,
      sym_shape_key,
    STATE(81), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(96), 2,
      sym_container,
      sym_shape,
  [1120] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(197), 1,
      aux_sym__identifier_token1,
    ACTIONS(199), 1,
      sym_escape_sequence,
    STATE(70), 1,
      sym_shape_key,
    STATE(81), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 2,
      sym__identifier,
      sym_string,
    STATE(96), 2,
      sym_container,
      sym_shape,
  [1154] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    STATE(120), 1,
      sym_attr_value,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(108), 2,
      sym_string,
      sym_boolean,
    ACTIONS(201), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1183] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    STATE(121), 1,
      sym_attr_value,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(108), 2,
      sym_string,
      sym_boolean,
    ACTIONS(201), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1212] = 8,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      anon_sym_style,
    ACTIONS(213), 1,
      sym__eol,
    STATE(35), 1,
      aux_sym__connection_block_repeat1,
    STATE(71), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(210), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(123), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1241] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    STATE(112), 1,
      sym_attr_value,
    ACTIONS(203), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(108), 2,
      sym_string,
      sym_boolean,
    ACTIONS(201), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1270] = 8,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym__eol,
    STATE(35), 1,
      aux_sym__connection_block_repeat1,
    STATE(65), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(218), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(86), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1299] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_label,
    STATE(75), 1,
      sym_string,
    STATE(93), 1,
      sym__connection_block,
    ACTIONS(224), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1332] = 8,
    ACTIONS(85), 1,
      anon_sym_style,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym__eol,
    STATE(37), 1,
      aux_sym__connection_block_repeat1,
    STATE(65), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(218), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(101), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1361] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    STATE(75), 1,
      sym_string,
    STATE(78), 1,
      sym_label,
    STATE(124), 1,
      sym__container_block,
    ACTIONS(230), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1394] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_label,
    STATE(75), 1,
      sym_string,
    STATE(93), 1,
      sym__connection_block,
    ACTIONS(224), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1427] = 3,
    ACTIONS(143), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1445] = 8,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      sym_arrow,
    STATE(41), 1,
      sym__colon,
    STATE(55), 1,
      aux_sym_connection_repeat1,
    STATE(91), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1473] = 8,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_arrow,
    ACTIONS(240), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym__colon,
    STATE(55), 1,
      aux_sym_connection_repeat1,
    STATE(91), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1501] = 8,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      sym_arrow,
    ACTIONS(250), 1,
      sym_dot,
    STATE(22), 1,
      sym__colon,
    STATE(85), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1529] = 8,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_arrow,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(85), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1557] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_label,
    STATE(75), 1,
      sym_string,
    STATE(93), 1,
      sym__connection_block,
    ACTIONS(224), 2,
      sym__eol,
      anon_sym_SEMI,
  [1589] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym__unquoted_string,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym_line_comment,
    STATE(75), 1,
      sym_string,
    STATE(78), 1,
      sym_label,
    STATE(124), 1,
      sym__container_block,
    ACTIONS(230), 2,
      sym__eol,
      anon_sym_SEMI,
  [1621] = 3,
    ACTIONS(258), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1639] = 8,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__connection_path_repeat1,
    STATE(66), 1,
      sym_shape_key,
    STATE(69), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(63), 2,
      sym__identifier,
      sym_string,
  [1667] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(85), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1692] = 7,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym__connection_path_repeat1,
    STATE(134), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(63), 2,
      sym__identifier,
      sym_string,
  [1717] = 3,
    ACTIONS(273), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(271), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1734] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(275), 1,
      sym_dot,
    STATE(22), 1,
      sym__colon,
    STATE(85), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1759] = 4,
    ACTIONS(279), 1,
      sym_arrow,
    STATE(55), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1778] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1793] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(282), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1808] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1823] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1838] = 7,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym__connection_path_repeat1,
    STATE(53), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(63), 2,
      sym__identifier,
      sym_string,
  [1863] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1878] = 3,
    ACTIONS(288), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(137), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1895] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1910] = 8,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_arrow,
    ACTIONS(292), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym__colon,
    STATE(55), 1,
      aux_sym_connection_repeat1,
    STATE(91), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 2,
      sym__eol,
      anon_sym_SEMI,
  [1937] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      sym_dot,
    STATE(40), 1,
      sym__colon,
    STATE(119), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(294), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1962] = 3,
    ACTIONS(273), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(248), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1979] = 3,
    ACTIONS(300), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1996] = 8,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_arrow,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(304), 1,
      sym_dot,
    STATE(26), 1,
      sym__colon,
    STATE(85), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 2,
      sym__eol,
      anon_sym_SEMI,
  [2023] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2037] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      sym_dot,
    STATE(26), 1,
      sym__colon,
    STATE(85), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 2,
      sym__eol,
      anon_sym_SEMI,
  [2061] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      sym_dot,
    ACTIONS(308), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym__colon,
    STATE(119), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(294), 2,
      sym__eol,
      anon_sym_SEMI,
  [2085] = 4,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2102] = 4,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2119] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(314), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2132] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(316), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2144] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2156] = 3,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2170] = 4,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2186] = 3,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(205), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2200] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2211] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2222] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2233] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(330), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2244] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_repeat1,
    ACTIONS(334), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2261] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2272] = 4,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(340), 2,
      sym__eol,
      anon_sym_SEMI,
  [2287] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(342), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2298] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(344), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2309] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_repeat1,
    ACTIONS(348), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2326] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2337] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(353), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2348] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2359] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2370] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 4,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2381] = 4,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 2,
      sym__eol,
      anon_sym_SEMI,
  [2396] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(361), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2407] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(363), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2420] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(365), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2431] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(367), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2442] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat1,
    ACTIONS(371), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2459] = 4,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(373), 2,
      sym__eol,
      anon_sym_SEMI,
  [2474] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(375), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2485] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2496] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(379), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2507] = 4,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(381), 2,
      sym__eol,
      anon_sym_SEMI,
  [2522] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2533] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2544] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2555] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2566] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2577] = 4,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(395), 2,
      sym__eol,
      anon_sym_SEMI,
  [2592] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(397), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2603] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2614] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(401), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2625] = 4,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(405), 2,
      sym__eol,
      anon_sym_SEMI,
  [2640] = 4,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(409), 1,
      sym_dot,
    STATE(129), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2654] = 3,
    STATE(19), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 2,
      sym__eol,
      anon_sym_SEMI,
  [2666] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(413), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2676] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(415), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2686] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(417), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2696] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(419), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2706] = 3,
    STATE(14), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 2,
      sym__eol,
      anon_sym_SEMI,
  [2718] = 3,
    STATE(76), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 2,
      sym__eol,
      anon_sym_SEMI,
  [2730] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2740] = 3,
    ACTIONS(85), 1,
      anon_sym_style,
    STATE(124), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2751] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      aux_sym_text_block_token1,
    ACTIONS(427), 1,
      sym_language,
  [2764] = 3,
    ACTIONS(238), 1,
      sym_arrow,
    STATE(64), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2775] = 3,
    ACTIONS(238), 1,
      sym_arrow,
    STATE(44), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2786] = 3,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2797] = 3,
    ACTIONS(238), 1,
      sym_arrow,
    STATE(43), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2808] = 3,
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2819] = 3,
    ACTIONS(433), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2830] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON,
    STATE(33), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2841] = 2,
    ACTIONS(273), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2849] = 2,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2857] = 2,
    ACTIONS(439), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2865] = 2,
    ACTIONS(441), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2873] = 2,
    ACTIONS(443), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(445), 1,
      aux_sym_text_block_token1,
  [2891] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2899] = 2,
    ACTIONS(449), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2907] = 2,
    ACTIONS(451), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2915] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(170), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      sym__unescaped_single_string_fragment,
  [2925] = 2,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2933] = 2,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2941] = 2,
    ACTIONS(459), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2949] = 2,
    ACTIONS(461), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 218,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 342,
  [SMALL_STATE(8)] = 375,
  [SMALL_STATE(9)] = 416,
  [SMALL_STATE(10)] = 457,
  [SMALL_STATE(11)] = 498,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 580,
  [SMALL_STATE(15)] = 603,
  [SMALL_STATE(16)] = 627,
  [SMALL_STATE(17)] = 651,
  [SMALL_STATE(18)] = 679,
  [SMALL_STATE(19)] = 705,
  [SMALL_STATE(20)] = 727,
  [SMALL_STATE(21)] = 755,
  [SMALL_STATE(22)] = 794,
  [SMALL_STATE(23)] = 833,
  [SMALL_STATE(24)] = 860,
  [SMALL_STATE(25)] = 887,
  [SMALL_STATE(26)] = 912,
  [SMALL_STATE(27)] = 950,
  [SMALL_STATE(28)] = 984,
  [SMALL_STATE(29)] = 1018,
  [SMALL_STATE(30)] = 1052,
  [SMALL_STATE(31)] = 1086,
  [SMALL_STATE(32)] = 1120,
  [SMALL_STATE(33)] = 1154,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1212,
  [SMALL_STATE(36)] = 1241,
  [SMALL_STATE(37)] = 1270,
  [SMALL_STATE(38)] = 1299,
  [SMALL_STATE(39)] = 1332,
  [SMALL_STATE(40)] = 1361,
  [SMALL_STATE(41)] = 1394,
  [SMALL_STATE(42)] = 1427,
  [SMALL_STATE(43)] = 1445,
  [SMALL_STATE(44)] = 1473,
  [SMALL_STATE(45)] = 1501,
  [SMALL_STATE(46)] = 1529,
  [SMALL_STATE(47)] = 1557,
  [SMALL_STATE(48)] = 1589,
  [SMALL_STATE(49)] = 1621,
  [SMALL_STATE(50)] = 1639,
  [SMALL_STATE(51)] = 1667,
  [SMALL_STATE(52)] = 1692,
  [SMALL_STATE(53)] = 1717,
  [SMALL_STATE(54)] = 1734,
  [SMALL_STATE(55)] = 1759,
  [SMALL_STATE(56)] = 1778,
  [SMALL_STATE(57)] = 1793,
  [SMALL_STATE(58)] = 1808,
  [SMALL_STATE(59)] = 1823,
  [SMALL_STATE(60)] = 1838,
  [SMALL_STATE(61)] = 1863,
  [SMALL_STATE(62)] = 1878,
  [SMALL_STATE(63)] = 1895,
  [SMALL_STATE(64)] = 1910,
  [SMALL_STATE(65)] = 1937,
  [SMALL_STATE(66)] = 1962,
  [SMALL_STATE(67)] = 1979,
  [SMALL_STATE(68)] = 1996,
  [SMALL_STATE(69)] = 2023,
  [SMALL_STATE(70)] = 2037,
  [SMALL_STATE(71)] = 2061,
  [SMALL_STATE(72)] = 2085,
  [SMALL_STATE(73)] = 2102,
  [SMALL_STATE(74)] = 2119,
  [SMALL_STATE(75)] = 2132,
  [SMALL_STATE(76)] = 2144,
  [SMALL_STATE(77)] = 2156,
  [SMALL_STATE(78)] = 2170,
  [SMALL_STATE(79)] = 2186,
  [SMALL_STATE(80)] = 2200,
  [SMALL_STATE(81)] = 2211,
  [SMALL_STATE(82)] = 2222,
  [SMALL_STATE(83)] = 2233,
  [SMALL_STATE(84)] = 2244,
  [SMALL_STATE(85)] = 2261,
  [SMALL_STATE(86)] = 2272,
  [SMALL_STATE(87)] = 2287,
  [SMALL_STATE(88)] = 2298,
  [SMALL_STATE(89)] = 2309,
  [SMALL_STATE(90)] = 2326,
  [SMALL_STATE(91)] = 2337,
  [SMALL_STATE(92)] = 2348,
  [SMALL_STATE(93)] = 2359,
  [SMALL_STATE(94)] = 2370,
  [SMALL_STATE(95)] = 2381,
  [SMALL_STATE(96)] = 2396,
  [SMALL_STATE(97)] = 2407,
  [SMALL_STATE(98)] = 2420,
  [SMALL_STATE(99)] = 2431,
  [SMALL_STATE(100)] = 2442,
  [SMALL_STATE(101)] = 2459,
  [SMALL_STATE(102)] = 2474,
  [SMALL_STATE(103)] = 2485,
  [SMALL_STATE(104)] = 2496,
  [SMALL_STATE(105)] = 2507,
  [SMALL_STATE(106)] = 2522,
  [SMALL_STATE(107)] = 2533,
  [SMALL_STATE(108)] = 2544,
  [SMALL_STATE(109)] = 2555,
  [SMALL_STATE(110)] = 2566,
  [SMALL_STATE(111)] = 2577,
  [SMALL_STATE(112)] = 2592,
  [SMALL_STATE(113)] = 2603,
  [SMALL_STATE(114)] = 2614,
  [SMALL_STATE(115)] = 2625,
  [SMALL_STATE(116)] = 2640,
  [SMALL_STATE(117)] = 2654,
  [SMALL_STATE(118)] = 2666,
  [SMALL_STATE(119)] = 2676,
  [SMALL_STATE(120)] = 2686,
  [SMALL_STATE(121)] = 2696,
  [SMALL_STATE(122)] = 2706,
  [SMALL_STATE(123)] = 2718,
  [SMALL_STATE(124)] = 2730,
  [SMALL_STATE(125)] = 2740,
  [SMALL_STATE(126)] = 2751,
  [SMALL_STATE(127)] = 2764,
  [SMALL_STATE(128)] = 2775,
  [SMALL_STATE(129)] = 2786,
  [SMALL_STATE(130)] = 2797,
  [SMALL_STATE(131)] = 2808,
  [SMALL_STATE(132)] = 2819,
  [SMALL_STATE(133)] = 2830,
  [SMALL_STATE(134)] = 2841,
  [SMALL_STATE(135)] = 2849,
  [SMALL_STATE(136)] = 2857,
  [SMALL_STATE(137)] = 2865,
  [SMALL_STATE(138)] = 2873,
  [SMALL_STATE(139)] = 2881,
  [SMALL_STATE(140)] = 2891,
  [SMALL_STATE(141)] = 2899,
  [SMALL_STATE(142)] = 2907,
  [SMALL_STATE(143)] = 2915,
  [SMALL_STATE(144)] = 2925,
  [SMALL_STATE(145)] = 2933,
  [SMALL_STATE(146)] = 2941,
  [SMALL_STATE(147)] = 2949,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(20),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(146),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(116),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(143),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(100),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(20),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(135),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(144),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(144),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(99),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(102),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(80),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(107),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(18),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(25),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(24),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(143),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(100),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(24),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(116),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(74),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(35),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(24),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(143),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(100),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(50),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(110),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(98),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(89),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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

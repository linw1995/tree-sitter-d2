#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 1
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_DASH = 4,
  aux_sym__identifier_token1 = 5,
  aux_sym__identifier_token2 = 6,
  aux_sym__identifier_token3 = 7,
  aux_sym_text_block_token1 = 8,
  sym_language = 9,
  anon_sym_direction = 10,
  anon_sym_shape = 11,
  anon_sym_label = 12,
  anon_sym_constraint = 13,
  anon_sym_icon = 14,
  anon_sym_style = 15,
  anon_sym_width = 16,
  anon_sym_height = 17,
  anon_sym_3d = 18,
  anon_sym_opacity = 19,
  anon_sym_fill = 20,
  anon_sym_stroke = 21,
  anon_sym_stroke_DASHwidth = 22,
  anon_sym_stroke_DASHdash = 23,
  anon_sym_border_DASHradius = 24,
  anon_sym_font_DASHcolor = 25,
  anon_sym_shadow = 26,
  anon_sym_multiple = 27,
  anon_sym_animated = 28,
  anon_sym_link = 29,
  sym__text_attr_key = 30,
  anon_sym_source_DASHarrowhead = 31,
  anon_sym_target_DASHarrowhead = 32,
  sym__dash = 33,
  anon_sym_COLON = 34,
  sym_arrow = 35,
  sym_dot = 36,
  sym__unquoted_string = 37,
  anon_sym_SQUOTE = 38,
  anon_sym_DQUOTE = 39,
  sym__unescaped_single_string_fragment = 40,
  sym__unescaped_double_string_fragment = 41,
  sym_escape_sequence = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  sym_integer = 45,
  sym_float = 46,
  sym_line_comment = 47,
  sym__eol = 48,
  anon_sym_SEMI = 49,
  sym__text_block_start = 50,
  sym__text_block_end = 51,
  sym__text_block_raw_text = 52,
  sym_source_file = 53,
  sym__root_definition = 54,
  sym_connection = 55,
  sym__connection_path = 56,
  sym__connection_block = 57,
  sym__connection_block_definition = 58,
  sym_container = 59,
  sym__container_block = 60,
  sym__container_block_definition = 61,
  sym_shape = 62,
  sym_shape_key = 63,
  sym__identifier = 64,
  sym_text_block = 65,
  sym__root_attribute = 66,
  sym__root_attr_key = 67,
  sym__shape_attribute = 68,
  sym__base_shape_attribute = 69,
  sym__shape_attr_key = 70,
  sym__style_attribute = 71,
  sym__style_attribute_block = 72,
  sym__inner_style_attribute = 73,
  sym__style_attr_key = 74,
  sym__common_style_attr_key = 75,
  sym__connection_attribute = 76,
  sym__connection_arrowhead_attribute = 77,
  sym__connection_arrowhead_attr_key = 78,
  sym_label = 79,
  sym_attr_value = 80,
  sym__colon = 81,
  sym_string = 82,
  sym_boolean = 83,
  sym__end = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_connection_repeat1 = 86,
  aux_sym__connection_path_repeat1 = 87,
  aux_sym__connection_block_repeat1 = 88,
  aux_sym__container_block_repeat1 = 89,
  aux_sym__identifier_repeat1 = 90,
  aux_sym__style_attribute_block_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  aux_sym_string_repeat2 = 93,
  alias_sym_container_key = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
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
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_container_key] = "container_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
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
  [anon_sym_DASH] = {
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
  [aux_sym_string_repeat2] = {
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
  [22] = 14,
  [23] = 23,
  [24] = 24,
  [25] = 16,
  [26] = 26,
  [27] = 19,
  [28] = 23,
  [29] = 20,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 15,
  [34] = 34,
  [35] = 17,
  [36] = 24,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 40,
  [45] = 45,
  [46] = 38,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 47,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 49,
  [59] = 59,
  [60] = 43,
  [61] = 45,
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
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 106,
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
  [124] = 120,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
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
      if (eof) ADVANCE(167);
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(165)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(3)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(238);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 's') ADVANCE(188);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(17)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(18)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(238);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(148);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(193);
      if (sym__unquoted_string_character_set_1(lookahead)) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(148);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(224);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(215);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(247);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 152:
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 154:
      if (lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(205);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 157:
      if (lookahead == '{') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == '}') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (anon_sym__character_set_1(lookahead)) SKIP(165)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(179);
      if (anon_sym__character_set_1(lookahead)) SKIP(166)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '>') ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 0) ADVANCE(168);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ';') ADVANCE(255);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (sym__unquoted_string_character_set_1(lookahead)) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(238);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(242);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(244);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 166},
  [2] = {.lex_state = 166},
  [3] = {.lex_state = 166},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 166},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 8, .external_lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
};

enum {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
  },
  [2] = {
    [ts_external_token__text_block_start] = true,
  },
  [3] = {
    [ts_external_token__text_block_end] = true,
  },
  [4] = {
    [ts_external_token__text_block_raw_text] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_arrow] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym__root_definition] = STATE(2),
    [sym_connection] = STATE(76),
    [sym__connection_path] = STATE(110),
    [sym_container] = STATE(76),
    [sym_shape] = STATE(76),
    [sym_shape_key] = STATE(40),
    [sym__identifier] = STATE(59),
    [sym__root_attribute] = STATE(76),
    [sym__root_attr_key] = STATE(111),
    [sym__common_style_attr_key] = STATE(127),
    [sym_string] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__connection_path_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [aux_sym__identifier_token1] = ACTIONS(9),
    [anon_sym_direction] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_constraint] = ACTIONS(13),
    [anon_sym_icon] = ACTIONS(13),
    [anon_sym_style] = ACTIONS(13),
    [anon_sym_opacity] = ACTIONS(15),
    [anon_sym_fill] = ACTIONS(15),
    [anon_sym_stroke] = ACTIONS(17),
    [anon_sym_stroke_DASHwidth] = ACTIONS(15),
    [anon_sym_stroke_DASHdash] = ACTIONS(15),
    [anon_sym_border_DASHradius] = ACTIONS(15),
    [anon_sym_font_DASHcolor] = ACTIONS(15),
    [anon_sym_shadow] = ACTIONS(15),
    [anon_sym_multiple] = ACTIONS(15),
    [anon_sym_animated] = ACTIONS(15),
    [anon_sym_link] = ACTIONS(15),
    [sym__text_attr_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(11), 1,
      anon_sym_direction,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__eol,
    STATE(40), 1,
      sym_shape_key,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(110), 1,
      sym__connection_path,
    STATE(111), 1,
      sym__root_attr_key,
    STATE(127), 1,
      sym__common_style_attr_key,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    STATE(76), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(13), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(15), 10,
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
  [77] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      aux_sym__identifier_token1,
    ACTIONS(37), 1,
      anon_sym_direction,
    ACTIONS(46), 1,
      anon_sym_stroke,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__eol,
    STATE(40), 1,
      sym_shape_key,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(110), 1,
      sym__connection_path,
    STATE(111), 1,
      sym__root_attr_key,
    STATE(127), 1,
      sym__common_style_attr_key,
    STATE(3), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    STATE(76), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(40), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(43), 10,
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
  [154] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(64), 1,
      sym__eol,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(44), 1,
      sym_shape_key,
    STATE(106), 1,
      sym__connection_path,
    STATE(113), 1,
      sym__shape_attr_key,
    STATE(5), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(101), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [215] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym__eol,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(44), 1,
      sym_shape_key,
    STATE(106), 1,
      sym__connection_path,
    STATE(113), 1,
      sym__shape_attr_key,
    STATE(6), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    ACTIONS(60), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(101), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [276] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_DASH,
    ACTIONS(75), 1,
      aux_sym__identifier_token1,
    ACTIONS(81), 1,
      anon_sym_style,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      sym__eol,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(44), 1,
      sym_shape_key,
    STATE(106), 1,
      sym__connection_path,
    STATE(113), 1,
      sym__shape_attr_key,
    STATE(6), 2,
      sym__container_block_definition,
      aux_sym__container_block_repeat1,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    ACTIONS(78), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_width,
      anon_sym_height,
    STATE(101), 6,
      sym_connection,
      sym_container,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
  [337] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 2,
      aux_sym__identifier_token1,
      anon_sym_stroke,
    ACTIONS(93), 22,
      ts_builtin_sym_end,
      anon_sym_DASH,
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
      sym__eol,
  [369] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(101), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(103), 1,
      sym__inner_style_attribute,
    STATE(114), 1,
      sym__style_attr_key,
    STATE(117), 1,
      sym__common_style_attr_key,
    ACTIONS(15), 10,
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
  [409] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(103), 1,
      sym__inner_style_attribute,
    STATE(114), 1,
      sym__style_attr_key,
    STATE(117), 1,
      sym__common_style_attr_key,
    ACTIONS(15), 10,
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
  [449] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_3d,
    ACTIONS(115), 1,
      anon_sym_stroke,
    ACTIONS(118), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(103), 1,
      sym__inner_style_attribute,
    STATE(114), 1,
      sym__style_attr_key,
    STATE(117), 1,
      sym__common_style_attr_key,
    ACTIONS(112), 10,
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
  [489] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_stroke,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(93), 1,
      sym__inner_style_attribute,
    STATE(114), 1,
      sym__style_attr_key,
    STATE(117), 1,
      sym__common_style_attr_key,
    ACTIONS(15), 10,
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
  [520] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      anon_sym_stroke,
    ACTIONS(107), 13,
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
  [542] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 12,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_width,
      anon_sym_height,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym__eol,
  [563] = 11,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      sym__text_block_start,
    STATE(67), 1,
      sym_label,
    STATE(71), 1,
      sym_string,
    STATE(88), 1,
      sym_text_block,
    STATE(90), 1,
      sym__container_block,
    ACTIONS(127), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [599] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      aux_sym__identifier_token2,
    ACTIONS(145), 1,
      aux_sym__identifier_token3,
    ACTIONS(147), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(141), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [624] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_shape_key,
    STATE(88), 1,
      sym__style_attribute,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    STATE(90), 2,
      sym_container,
      sym_shape,
  [657] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      aux_sym__identifier_token3,
    ACTIONS(147), 1,
      sym__dash,
    ACTIONS(161), 1,
      aux_sym__identifier_token2,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(141), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [682] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym__eol,
    STATE(63), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(165), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(26), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(85), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [711] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      aux_sym__identifier_token1,
    STATE(60), 1,
      sym_shape_key,
    STATE(88), 1,
      sym__style_attribute,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    STATE(90), 2,
      sym_container,
      sym_shape,
  [744] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      aux_sym__identifier_token2,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(178), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(173), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [767] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      anon_sym_style,
    ACTIONS(188), 1,
      sym__eol,
    STATE(63), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(185), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(21), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(85), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [796] = 11,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      sym__text_block_start,
    STATE(67), 1,
      sym_label,
    STATE(71), 1,
      sym_string,
    STATE(88), 1,
      sym_text_block,
    STATE(90), 1,
      sym__container_block,
    ACTIONS(127), 2,
      sym__eol,
      anon_sym_SEMI,
  [831] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 1,
      aux_sym__identifier_token2,
    ACTIONS(193), 1,
      aux_sym__identifier_token3,
    ACTIONS(195), 1,
      sym__dash,
    STATE(20), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(191), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [856] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 1,
      aux_sym__identifier_token2,
    ACTIONS(201), 1,
      aux_sym__identifier_token3,
    ACTIONS(203), 1,
      sym__dash,
    STATE(15), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(197), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [881] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_shape_key,
    STATE(88), 1,
      sym__style_attribute,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    STATE(90), 2,
      sym_container,
      sym_shape,
  [914] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym__eol,
    STATE(63), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(165), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(21), 2,
      sym__connection_block_definition,
      aux_sym__connection_block_repeat1,
    STATE(85), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [943] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      aux_sym__identifier_token1,
    STATE(43), 1,
      sym_shape_key,
    STATE(88), 1,
      sym__style_attribute,
    STATE(59), 2,
      sym__identifier,
      sym_string,
    STATE(90), 2,
      sym_container,
      sym_shape,
  [976] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      sym__dash,
    ACTIONS(209), 1,
      aux_sym__identifier_token2,
    ACTIONS(211), 1,
      aux_sym__identifier_token3,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(191), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1000] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      aux_sym__identifier_token2,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(178), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(173), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1022] = 7,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(92), 1,
      sym_attr_value,
    ACTIONS(218), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string,
      sym_boolean,
    ACTIONS(216), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1048] = 7,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(98), 1,
      sym_attr_value,
    ACTIONS(218), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string,
      sym_boolean,
    ACTIONS(216), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1074] = 9,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_label,
    STATE(71), 1,
      sym_string,
    STATE(87), 1,
      sym__connection_block,
    ACTIONS(220), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1104] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      sym__dash,
    ACTIONS(209), 1,
      aux_sym__identifier_token2,
    ACTIONS(224), 1,
      aux_sym__identifier_token3,
    STATE(29), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(141), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1128] = 7,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(112), 1,
      sym_attr_value,
    ACTIONS(218), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string,
      sym_boolean,
    ACTIONS(216), 3,
      sym__unquoted_string,
      sym_integer,
      sym_float,
  [1154] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      sym__dash,
    ACTIONS(224), 1,
      aux_sym__identifier_token3,
    ACTIONS(226), 1,
      aux_sym__identifier_token2,
    STATE(28), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(141), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1178] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 1,
      sym__dash,
    ACTIONS(228), 1,
      aux_sym__identifier_token2,
    ACTIONS(230), 1,
      aux_sym__identifier_token3,
    STATE(33), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(197), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1202] = 9,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_label,
    STATE(71), 1,
      sym_string,
    STATE(87), 1,
      sym__connection_block,
    ACTIONS(220), 2,
      sym__eol,
      anon_sym_SEMI,
  [1231] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      sym_arrow,
    STATE(32), 1,
      sym__colon,
    STATE(57), 1,
      aux_sym_connection_repeat1,
    STATE(94), 1,
      sym__connection_block,
    ACTIONS(232), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1258] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      aux_sym__identifier_token1,
    STATE(42), 1,
      aux_sym__connection_path_repeat1,
    STATE(55), 1,
      sym_shape_key,
    STATE(65), 1,
      sym__connection_path,
    STATE(59), 2,
      sym__identifier,
      sym_string,
  [1287] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      sym_arrow,
    ACTIONS(250), 1,
      sym_dot,
    STATE(14), 1,
      sym__colon,
    STATE(86), 1,
      sym__container_block,
    ACTIONS(242), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1314] = 9,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__unquoted_string,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_line_comment,
    STATE(71), 1,
      sym_string,
    STATE(72), 1,
      sym_label,
    STATE(108), 1,
      sym__container_block,
    ACTIONS(252), 2,
      sym__eol,
      anon_sym_SEMI,
  [1343] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      aux_sym__identifier_token1,
    STATE(48), 1,
      aux_sym__connection_path_repeat1,
    STATE(51), 1,
      sym_shape_key,
    STATE(59), 2,
      sym__identifier,
      sym_string,
  [1369] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      sym_dot,
    STATE(14), 1,
      sym__colon,
    STATE(86), 1,
      sym__container_block,
    ACTIONS(242), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1393] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym_arrow,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      sym_dot,
    STATE(22), 1,
      sym__colon,
    STATE(86), 1,
      sym__container_block,
    ACTIONS(242), 2,
      sym__eol,
      anon_sym_SEMI,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 1,
      sym__dash,
    ACTIONS(260), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1435] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_arrow,
    ACTIONS(264), 1,
      anon_sym_COLON,
    STATE(37), 1,
      sym__colon,
    STATE(57), 1,
      aux_sym_connection_repeat1,
    STATE(94), 1,
      sym__connection_block,
    ACTIONS(232), 2,
      sym__eol,
      anon_sym_SEMI,
  [1461] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      sym__dash,
    ACTIONS(141), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1477] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_DASH,
    ACTIONS(269), 1,
      aux_sym__identifier_token1,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym__connection_path_repeat1,
    STATE(123), 1,
      sym_shape_key,
    STATE(59), 2,
      sym__identifier,
      sym_string,
  [1503] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 1,
      sym__dash,
    ACTIONS(191), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1519] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1532] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      sym_dot,
    ACTIONS(278), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1547] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      sym__dash,
    ACTIONS(141), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(284), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1575] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1588] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      sym_dot,
    ACTIONS(248), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1603] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      sym_arrow,
    STATE(57), 1,
      aux_sym_connection_repeat1,
    ACTIONS(288), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [1633] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(293), 1,
      sym__dash,
    ACTIONS(191), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1648] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1661] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(297), 1,
      sym_dot,
    STATE(22), 1,
      sym__colon,
    STATE(86), 1,
      sym__container_block,
    ACTIONS(242), 2,
      sym__eol,
      anon_sym_SEMI,
  [1684] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      sym__dash,
    ACTIONS(260), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1712] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_COLON,
    ACTIONS(303), 1,
      sym_dot,
    STATE(41), 1,
      sym__colon,
    STATE(105), 1,
      sym__container_block,
    ACTIONS(305), 2,
      sym__eol,
      anon_sym_SEMI,
  [1735] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(307), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [1760] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [1771] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym__container_block,
    ACTIONS(311), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1786] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym__connection_block,
    ACTIONS(313), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(315), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1812] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(317), 4,
      anon_sym_DASH,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(319), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1832] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym__container_block,
    ACTIONS(321), 2,
      sym__eol,
      anon_sym_SEMI,
  [1846] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_string_repeat2,
    ACTIONS(325), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1860] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym_string_repeat1,
    ACTIONS(330), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [1874] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_repeat2,
    ACTIONS(332), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1888] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(7), 1,
      sym__end,
    ACTIONS(334), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1900] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(338), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [1914] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    ACTIONS(343), 2,
      sym__unescaped_single_string_fragment,
      sym_escape_sequence,
  [1928] = 4,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_string_repeat2,
    ACTIONS(345), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [1942] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1960] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      sym_dot,
    STATE(109), 1,
      sym__colon,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1982] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(66), 1,
      sym__end,
    ACTIONS(359), 2,
      sym__eol,
      anon_sym_SEMI,
  [2002] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(313), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2020] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2029] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2038] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2047] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(371), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2083] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(379), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(381), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(383), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2128] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(385), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(13), 1,
      sym__end,
    ACTIONS(387), 2,
      sym__eol,
      anon_sym_SEMI,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(389), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(12), 1,
      sym__end,
    ACTIONS(391), 2,
      sym__eol,
      anon_sym_SEMI,
  [2168] = 3,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(393), 1,
      aux_sym_text_block_token1,
    ACTIONS(395), 1,
      sym_language,
  [2178] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(397), 2,
      sym__eol,
      anon_sym_SEMI,
  [2186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      sym_arrow,
    STATE(46), 1,
      aux_sym_connection_repeat1,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 2,
      sym__eol,
      anon_sym_SEMI,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 2,
      sym__eol,
      anon_sym_SEMI,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym__style_attribute_block,
  [2222] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(238), 1,
      sym_arrow,
    STATE(38), 1,
      aux_sym_connection_repeat1,
  [2232] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym__colon,
  [2242] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 2,
      sym__eol,
      anon_sym_SEMI,
  [2250] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym__colon,
  [2260] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym__colon,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_style,
    STATE(108), 1,
      sym__style_attribute,
  [2280] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 1,
      sym__text_block_end,
  [2287] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [2294] = 2,
    ACTIONS(137), 1,
      sym_line_comment,
    ACTIONS(415), 1,
      aux_sym_text_block_token1,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(417), 1,
      sym__text_block_end,
  [2308] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(419), 1,
      aux_sym__identifier_token1,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(421), 1,
      sym__text_block_raw_text,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [2329] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      sym_dot,
  [2336] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      aux_sym__identifier_token1,
  [2343] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      sym__text_block_raw_text,
  [2350] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [2357] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(431), 1,
      anon_sym_COLON,
  [2364] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [2371] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 215,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 337,
  [SMALL_STATE(8)] = 369,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 449,
  [SMALL_STATE(11)] = 489,
  [SMALL_STATE(12)] = 520,
  [SMALL_STATE(13)] = 542,
  [SMALL_STATE(14)] = 563,
  [SMALL_STATE(15)] = 599,
  [SMALL_STATE(16)] = 624,
  [SMALL_STATE(17)] = 657,
  [SMALL_STATE(18)] = 682,
  [SMALL_STATE(19)] = 711,
  [SMALL_STATE(20)] = 744,
  [SMALL_STATE(21)] = 767,
  [SMALL_STATE(22)] = 796,
  [SMALL_STATE(23)] = 831,
  [SMALL_STATE(24)] = 856,
  [SMALL_STATE(25)] = 881,
  [SMALL_STATE(26)] = 914,
  [SMALL_STATE(27)] = 943,
  [SMALL_STATE(28)] = 976,
  [SMALL_STATE(29)] = 1000,
  [SMALL_STATE(30)] = 1022,
  [SMALL_STATE(31)] = 1048,
  [SMALL_STATE(32)] = 1074,
  [SMALL_STATE(33)] = 1104,
  [SMALL_STATE(34)] = 1128,
  [SMALL_STATE(35)] = 1154,
  [SMALL_STATE(36)] = 1178,
  [SMALL_STATE(37)] = 1202,
  [SMALL_STATE(38)] = 1231,
  [SMALL_STATE(39)] = 1258,
  [SMALL_STATE(40)] = 1287,
  [SMALL_STATE(41)] = 1314,
  [SMALL_STATE(42)] = 1343,
  [SMALL_STATE(43)] = 1369,
  [SMALL_STATE(44)] = 1393,
  [SMALL_STATE(45)] = 1419,
  [SMALL_STATE(46)] = 1435,
  [SMALL_STATE(47)] = 1461,
  [SMALL_STATE(48)] = 1477,
  [SMALL_STATE(49)] = 1503,
  [SMALL_STATE(50)] = 1519,
  [SMALL_STATE(51)] = 1532,
  [SMALL_STATE(52)] = 1547,
  [SMALL_STATE(53)] = 1562,
  [SMALL_STATE(54)] = 1575,
  [SMALL_STATE(55)] = 1588,
  [SMALL_STATE(56)] = 1603,
  [SMALL_STATE(57)] = 1616,
  [SMALL_STATE(58)] = 1633,
  [SMALL_STATE(59)] = 1648,
  [SMALL_STATE(60)] = 1661,
  [SMALL_STATE(61)] = 1684,
  [SMALL_STATE(62)] = 1699,
  [SMALL_STATE(63)] = 1712,
  [SMALL_STATE(64)] = 1735,
  [SMALL_STATE(65)] = 1748,
  [SMALL_STATE(66)] = 1760,
  [SMALL_STATE(67)] = 1771,
  [SMALL_STATE(68)] = 1786,
  [SMALL_STATE(69)] = 1801,
  [SMALL_STATE(70)] = 1812,
  [SMALL_STATE(71)] = 1822,
  [SMALL_STATE(72)] = 1832,
  [SMALL_STATE(73)] = 1846,
  [SMALL_STATE(74)] = 1860,
  [SMALL_STATE(75)] = 1874,
  [SMALL_STATE(76)] = 1888,
  [SMALL_STATE(77)] = 1900,
  [SMALL_STATE(78)] = 1914,
  [SMALL_STATE(79)] = 1928,
  [SMALL_STATE(80)] = 1942,
  [SMALL_STATE(81)] = 1951,
  [SMALL_STATE(82)] = 1960,
  [SMALL_STATE(83)] = 1973,
  [SMALL_STATE(84)] = 1982,
  [SMALL_STATE(85)] = 1991,
  [SMALL_STATE(86)] = 2002,
  [SMALL_STATE(87)] = 2011,
  [SMALL_STATE(88)] = 2020,
  [SMALL_STATE(89)] = 2029,
  [SMALL_STATE(90)] = 2038,
  [SMALL_STATE(91)] = 2047,
  [SMALL_STATE(92)] = 2056,
  [SMALL_STATE(93)] = 2065,
  [SMALL_STATE(94)] = 2074,
  [SMALL_STATE(95)] = 2083,
  [SMALL_STATE(96)] = 2092,
  [SMALL_STATE(97)] = 2101,
  [SMALL_STATE(98)] = 2110,
  [SMALL_STATE(99)] = 2119,
  [SMALL_STATE(100)] = 2128,
  [SMALL_STATE(101)] = 2137,
  [SMALL_STATE(102)] = 2148,
  [SMALL_STATE(103)] = 2157,
  [SMALL_STATE(104)] = 2168,
  [SMALL_STATE(105)] = 2178,
  [SMALL_STATE(106)] = 2186,
  [SMALL_STATE(107)] = 2196,
  [SMALL_STATE(108)] = 2204,
  [SMALL_STATE(109)] = 2212,
  [SMALL_STATE(110)] = 2222,
  [SMALL_STATE(111)] = 2232,
  [SMALL_STATE(112)] = 2242,
  [SMALL_STATE(113)] = 2250,
  [SMALL_STATE(114)] = 2260,
  [SMALL_STATE(115)] = 2270,
  [SMALL_STATE(116)] = 2280,
  [SMALL_STATE(117)] = 2287,
  [SMALL_STATE(118)] = 2294,
  [SMALL_STATE(119)] = 2301,
  [SMALL_STATE(120)] = 2308,
  [SMALL_STATE(121)] = 2315,
  [SMALL_STATE(122)] = 2322,
  [SMALL_STATE(123)] = 2329,
  [SMALL_STATE(124)] = 2336,
  [SMALL_STATE(125)] = 2343,
  [SMALL_STATE(126)] = 2350,
  [SMALL_STATE(127)] = 2357,
  [SMALL_STATE(128)] = 2364,
  [SMALL_STATE(129)] = 2371,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(120),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(24),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(129),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(82),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(74),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(75),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(117),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(126),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(126),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(10),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block_definition, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__container_block_definition, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(124),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(36),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(74),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(20),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(82),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(69),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(21),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(29),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(124),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(36),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(74),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(75),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(39),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block_definition, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(73),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(77),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [423] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
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

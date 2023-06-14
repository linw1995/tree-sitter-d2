#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 1
#define TOKEN_COUNT 65
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
  anon_sym_link = 15,
  anon_sym_tooltip = 16,
  anon_sym_width = 17,
  anon_sym_height = 18,
  anon_sym_vertical_DASHgap = 19,
  anon_sym_horizontal_DASHgap = 20,
  anon_sym_grid_DASHgap = 21,
  anon_sym_grid_DASHcolumns = 22,
  anon_sym_grid_DASHrows = 23,
  anon_sym_3d = 24,
  anon_sym_opacity = 25,
  anon_sym_fill = 26,
  anon_sym_fill_DASHpattern = 27,
  anon_sym_stroke = 28,
  anon_sym_stroke_DASHwidth = 29,
  anon_sym_stroke_DASHdash = 30,
  anon_sym_border_DASHradius = 31,
  anon_sym_double_DASHborder = 32,
  anon_sym_font_DASHsize = 33,
  anon_sym_font_DASHcolor = 34,
  anon_sym_shadow = 35,
  anon_sym_multiple = 36,
  anon_sym_animated = 37,
  anon_sym_italic = 38,
  anon_sym_bold = 39,
  anon_sym_underline = 40,
  sym__text_attr_key = 41,
  anon_sym_source_DASHarrowhead = 42,
  anon_sym_target_DASHarrowhead = 43,
  sym__dash = 44,
  anon_sym_COLON = 45,
  sym_arrow = 46,
  sym_dot = 47,
  aux_sym__unquoted_string_token1 = 48,
  anon_sym_SQUOTE = 49,
  anon_sym_DQUOTE = 50,
  sym__unescaped_single_string_fragment = 51,
  sym__unescaped_double_string_fragment = 52,
  sym_escape_sequence = 53,
  anon_sym_true = 54,
  anon_sym_false = 55,
  sym_integer = 56,
  sym_float = 57,
  sym_line_comment = 58,
  sym__eol = 59,
  anon_sym_SEMI = 60,
  sym__text_block_start = 61,
  sym__text_block_end = 62,
  sym__text_block_raw_text = 63,
  sym_block_comment = 64,
  sym_source_file = 65,
  sym__root_definition = 66,
  sym_connection = 67,
  sym__connection_path = 68,
  sym__connection_block = 69,
  sym_container = 70,
  sym__container_block = 71,
  sym__container_block_definition = 72,
  sym_shape = 73,
  sym_shape_key = 74,
  sym__identifier = 75,
  sym_text_block = 76,
  sym__root_attribute = 77,
  sym__root_attr_key = 78,
  sym__shape_attribute = 79,
  sym__base_shape_attribute = 80,
  sym__shape_attr_key = 81,
  sym__style_attribute = 82,
  sym__style_attribute_block = 83,
  sym__inner_style_attribute = 84,
  sym__grid_attr_key = 85,
  sym__style_attr_key = 86,
  sym__common_style_attr_key = 87,
  sym__connection_attribute = 88,
  sym__connection_arrowhead_attribute = 89,
  sym__connection_arrowhead_attr_key = 90,
  sym_label = 91,
  sym_attr_value = 92,
  sym__colon = 93,
  aux_sym__unquoted_string = 94,
  sym_string = 95,
  sym_boolean = 96,
  sym__end = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_connection_repeat1 = 99,
  aux_sym__connection_path_repeat1 = 100,
  aux_sym__connection_block_repeat1 = 101,
  aux_sym__container_block_repeat1 = 102,
  aux_sym__identifier_repeat1 = 103,
  aux_sym__style_attribute_block_repeat1 = 104,
  aux_sym_string_repeat1 = 105,
  alias_sym_container_key = 106,
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
  [anon_sym_link] = "link",
  [anon_sym_tooltip] = "tooltip",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_vertical_DASHgap] = "vertical-gap",
  [anon_sym_horizontal_DASHgap] = "horizontal-gap",
  [anon_sym_grid_DASHgap] = "grid-gap",
  [anon_sym_grid_DASHcolumns] = "grid-columns",
  [anon_sym_grid_DASHrows] = "grid-rows",
  [anon_sym_3d] = "3d",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_fill_DASHpattern] = "fill-pattern",
  [anon_sym_stroke] = "stroke",
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_double_DASHborder] = "double-border",
  [anon_sym_font_DASHsize] = "font-size",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_italic] = "italic",
  [anon_sym_bold] = "bold",
  [anon_sym_underline] = "underline",
  [sym__text_attr_key] = "reserved",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym__dash] = "_dash",
  [anon_sym_COLON] = ":",
  [sym_arrow] = "arrow",
  [sym_dot] = "dot",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
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
  [sym__grid_attr_key] = "_grid_attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
  [sym_attr_value] = "attr_value",
  [sym__colon] = "_colon",
  [aux_sym__unquoted_string] = "_unquoted_string",
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
  [anon_sym_link] = anon_sym_link,
  [anon_sym_tooltip] = anon_sym_tooltip,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_vertical_DASHgap] = anon_sym_vertical_DASHgap,
  [anon_sym_horizontal_DASHgap] = anon_sym_horizontal_DASHgap,
  [anon_sym_grid_DASHgap] = anon_sym_grid_DASHgap,
  [anon_sym_grid_DASHcolumns] = anon_sym_grid_DASHcolumns,
  [anon_sym_grid_DASHrows] = anon_sym_grid_DASHrows,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_fill_DASHpattern] = anon_sym_fill_DASHpattern,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_double_DASHborder] = anon_sym_double_DASHborder,
  [anon_sym_font_DASHsize] = anon_sym_font_DASHsize,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_underline] = anon_sym_underline,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym__dash] = sym__dash,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_arrow] = sym_arrow,
  [sym_dot] = sym_dot,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
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
  [sym__grid_attr_key] = sym__grid_attr_key,
  [sym__style_attr_key] = anon_sym_style,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = anon_sym_style,
  [sym_label] = sym_label,
  [sym_attr_value] = sym_attr_value,
  [sym__colon] = sym__colon,
  [aux_sym__unquoted_string] = aux_sym__unquoted_string,
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
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tooltip] = {
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
  [anon_sym_vertical_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHcolumns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHrows] = {
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
  [anon_sym_fill_DASHpattern] = {
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
  [anon_sym_double_DASHborder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHsize] = {
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
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
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
  [aux_sym__unquoted_string_token1] = {
    .visible = false,
    .named = false,
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
  [sym__grid_attr_key] = {
    .visible = false,
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
  [aux_sym__unquoted_string] = {
    .visible = false,
    .named = false,
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
  [15] = 11,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 26,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 22,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 23,
  [36] = 30,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 39,
  [42] = 38,
  [43] = 33,
  [44] = 38,
  [45] = 32,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 52,
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
  [65] = 55,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 50,
  [70] = 70,
  [71] = 71,
  [72] = 53,
  [73] = 52,
  [74] = 67,
  [75] = 75,
  [76] = 64,
  [77] = 75,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 83,
  [84] = 81,
  [85] = 78,
  [86] = 78,
  [87] = 75,
  [88] = 88,
  [89] = 89,
  [90] = 81,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 78,
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
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 134,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 146,
  [149] = 149,
  [150] = 149,
  [151] = 151,
  [152] = 145,
  [153] = 149,
  [154] = 147,
  [155] = 155,
  [156] = 145,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
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

static inline bool aux_sym__unquoted_string_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(273);
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'b') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(289);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_1(lookahead)) SKIP(270)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_2(lookahead)) SKIP(7)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(368);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(289);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(289);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(368);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(368);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(368);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(368);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(368);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(368);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 38:
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == 's') ADVANCE(298);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(43)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(248);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(44)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == 's') ADVANCE(298);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(43)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(44)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(248);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(374);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(303);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(372);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(372);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '>') ADVANCE(346);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'g') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(314);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(312);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(109);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead == 'x') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 254:
      if (lookahead == 'w') ADVANCE(332);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 256:
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 260:
      if (lookahead == 'z') ADVANCE(111);
      END_STATE();
    case 261:
      if (lookahead == 'z') ADVANCE(191);
      END_STATE();
    case 262:
      if (lookahead == '{') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 263:
      if (lookahead == '}') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 264:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 269:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 270:
      if (eof) ADVANCE(273);
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'b') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(282);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(289);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (anon_sym__character_set_1(lookahead)) SKIP(270)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 271:
      if (eof) ADVANCE(273);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'b') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == 'v') ADVANCE(283);
      if (anon_sym__character_set_1(lookahead)) SKIP(272)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 272:
      if (eof) ADVANCE(273);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'b') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == 'v') ADVANCE(283);
      if (anon_sym__character_set_1(lookahead)) SKIP(272)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '>') ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '>') ADVANCE(346);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(368);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(264);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ';') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(368);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(368);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(372);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(374);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 271, .external_lex_state = 2},
  [2] = {.lex_state = 271, .external_lex_state = 2},
  [3] = {.lex_state = 271, .external_lex_state = 2},
  [4] = {.lex_state = 24, .external_lex_state = 2},
  [5] = {.lex_state = 24, .external_lex_state = 2},
  [6] = {.lex_state = 24, .external_lex_state = 2},
  [7] = {.lex_state = 271, .external_lex_state = 2},
  [8] = {.lex_state = 12, .external_lex_state = 2},
  [9] = {.lex_state = 12, .external_lex_state = 2},
  [10] = {.lex_state = 12, .external_lex_state = 2},
  [11] = {.lex_state = 12, .external_lex_state = 2},
  [12] = {.lex_state = 24, .external_lex_state = 2},
  [13] = {.lex_state = 24, .external_lex_state = 2},
  [14] = {.lex_state = 24, .external_lex_state = 2},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12, .external_lex_state = 2},
  [17] = {.lex_state = 12, .external_lex_state = 2},
  [18] = {.lex_state = 12, .external_lex_state = 2},
  [19] = {.lex_state = 12, .external_lex_state = 2},
  [20] = {.lex_state = 26, .external_lex_state = 3},
  [21] = {.lex_state = 10, .external_lex_state = 3},
  [22] = {.lex_state = 4, .external_lex_state = 2},
  [23] = {.lex_state = 4, .external_lex_state = 2},
  [24] = {.lex_state = 4, .external_lex_state = 2},
  [25] = {.lex_state = 27, .external_lex_state = 3},
  [26] = {.lex_state = 45, .external_lex_state = 2},
  [27] = {.lex_state = 45, .external_lex_state = 2},
  [28] = {.lex_state = 45, .external_lex_state = 2},
  [29] = {.lex_state = 45, .external_lex_state = 2},
  [30] = {.lex_state = 45, .external_lex_state = 2},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 26, .external_lex_state = 2},
  [33] = {.lex_state = 26, .external_lex_state = 2},
  [34] = {.lex_state = 9, .external_lex_state = 2},
  [35] = {.lex_state = 9, .external_lex_state = 2},
  [36] = {.lex_state = 45, .external_lex_state = 2},
  [37] = {.lex_state = 10, .external_lex_state = 2},
  [38] = {.lex_state = 41, .external_lex_state = 2},
  [39] = {.lex_state = 41, .external_lex_state = 2},
  [40] = {.lex_state = 41, .external_lex_state = 2},
  [41] = {.lex_state = 41, .external_lex_state = 2},
  [42] = {.lex_state = 41, .external_lex_state = 2},
  [43] = {.lex_state = 27, .external_lex_state = 2},
  [44] = {.lex_state = 41, .external_lex_state = 2},
  [45] = {.lex_state = 27, .external_lex_state = 2},
  [46] = {.lex_state = 12, .external_lex_state = 2},
  [47] = {.lex_state = 12, .external_lex_state = 2},
  [48] = {.lex_state = 12, .external_lex_state = 2},
  [49] = {.lex_state = 42, .external_lex_state = 2},
  [50] = {.lex_state = 12, .external_lex_state = 2},
  [51] = {.lex_state = 12, .external_lex_state = 2},
  [52] = {.lex_state = 12, .external_lex_state = 2},
  [53] = {.lex_state = 12, .external_lex_state = 2},
  [54] = {.lex_state = 12, .external_lex_state = 2},
  [55] = {.lex_state = 12, .external_lex_state = 2},
  [56] = {.lex_state = 42, .external_lex_state = 2},
  [57] = {.lex_state = 12, .external_lex_state = 2},
  [58] = {.lex_state = 12, .external_lex_state = 2},
  [59] = {.lex_state = 12, .external_lex_state = 2},
  [60] = {.lex_state = 12, .external_lex_state = 2},
  [61] = {.lex_state = 12, .external_lex_state = 2},
  [62] = {.lex_state = 42, .external_lex_state = 2},
  [63] = {.lex_state = 12, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 9, .external_lex_state = 2},
  [66] = {.lex_state = 12, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 12, .external_lex_state = 2},
  [70] = {.lex_state = 12, .external_lex_state = 2},
  [71] = {.lex_state = 12, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 12, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 30, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 14, .external_lex_state = 2},
  [78] = {.lex_state = 30, .external_lex_state = 2},
  [79] = {.lex_state = 14, .external_lex_state = 2},
  [80] = {.lex_state = 12, .external_lex_state = 2},
  [81] = {.lex_state = 32, .external_lex_state = 2},
  [82] = {.lex_state = 31, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 15, .external_lex_state = 2},
  [85] = {.lex_state = 15, .external_lex_state = 2},
  [86] = {.lex_state = 32, .external_lex_state = 2},
  [87] = {.lex_state = 31, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 33, .external_lex_state = 2},
  [91] = {.lex_state = 12, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 12, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 33, .external_lex_state = 2},
  [96] = {.lex_state = 12, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 47, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 47, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 47, .external_lex_state = 2},
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
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 42, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 48, .external_lex_state = 2},
  [145] = {.lex_state = 12, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 12, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 12, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 49, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 5},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 48, .external_lex_state = 2},
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
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_tooltip] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_vertical_DASHgap] = ACTIONS(1),
    [anon_sym_horizontal_DASHgap] = ACTIONS(1),
    [anon_sym_grid_DASHgap] = ACTIONS(1),
    [anon_sym_grid_DASHcolumns] = ACTIONS(1),
    [anon_sym_grid_DASHrows] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_fill_DASHpattern] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_double_DASHborder] = ACTIONS(1),
    [anon_sym_font_DASHsize] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
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
    [sym_source_file] = STATE(158),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(100),
    [sym__connection_path] = STATE(156),
    [sym_container] = STATE(100),
    [sym_shape] = STATE(100),
    [sym_shape_key] = STATE(54),
    [sym__identifier] = STATE(57),
    [sym__root_attribute] = STATE(100),
    [sym__root_attr_key] = STATE(155),
    [sym__grid_attr_key] = STATE(164),
    [sym__common_style_attr_key] = STATE(167),
    [sym_string] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__identifier_token1] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(11),
    [anon_sym_link] = ACTIONS(13),
    [anon_sym_vertical_DASHgap] = ACTIONS(9),
    [anon_sym_horizontal_DASHgap] = ACTIONS(9),
    [anon_sym_grid_DASHgap] = ACTIONS(9),
    [anon_sym_grid_DASHcolumns] = ACTIONS(9),
    [anon_sym_grid_DASHrows] = ACTIONS(9),
    [anon_sym_opacity] = ACTIONS(13),
    [anon_sym_fill] = ACTIONS(15),
    [anon_sym_fill_DASHpattern] = ACTIONS(13),
    [anon_sym_stroke] = ACTIONS(15),
    [anon_sym_stroke_DASHwidth] = ACTIONS(13),
    [anon_sym_stroke_DASHdash] = ACTIONS(13),
    [anon_sym_border_DASHradius] = ACTIONS(13),
    [anon_sym_double_DASHborder] = ACTIONS(13),
    [anon_sym_font_DASHsize] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
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
  [0] = 20,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym__identifier_token1,
    ACTIONS(42), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      sym_escape_sequence,
    ACTIONS(51), 1,
      sym__eol,
    STATE(54), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(155), 1,
      sym__root_attr_key,
    STATE(156), 1,
      sym__connection_path,
    STATE(164), 1,
      sym__grid_attr_key,
    STATE(167), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(39), 2,
      anon_sym_fill,
      anon_sym_stroke,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(100), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(30), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(33), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(36), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [92] = 20,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym__eol,
    STATE(54), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(155), 1,
      sym__root_attr_key,
    STATE(156), 1,
      sym__connection_path,
    STATE(164), 1,
      sym__grid_attr_key,
    STATE(167), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_fill,
      anon_sym_stroke,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(100), 4,
      sym_connection,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(9), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(11), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      sym__text_attr_key,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [184] = 17,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(64), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(52), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(145), 1,
      sym__connection_path,
    STATE(147), 1,
      sym__shape_attr_key,
    STATE(169), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(113), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(60), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [257] = 17,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      aux_sym__identifier_token1,
    ACTIONS(74), 1,
      anon_sym_style,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_escape_sequence,
    ACTIONS(86), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(73), 1,
      sym_shape_key,
    STATE(152), 1,
      sym__connection_path,
    STATE(154), 1,
      sym__shape_attr_key,
    STATE(169), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(135), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(71), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [330] = 17,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(52), 1,
      sym_shape_key,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(145), 1,
      sym__connection_path,
    STATE(147), 1,
      sym__shape_attr_key,
    STATE(169), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(131), 7,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(60), 14,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [403] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(95), 3,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(93), 32,
      ts_builtin_sym_end,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__text_attr_key,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [447] = 10,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(101), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(120), 1,
      sym__inner_style_attribute,
    STATE(150), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [494] = 10,
    ACTIONS(99), 1,
      anon_sym_3d,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__eol,
    STATE(8), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(108), 1,
      sym__inner_style_attribute,
    STATE(150), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [541] = 10,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_3d,
    ACTIONS(118), 1,
      sym__eol,
    STATE(10), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(140), 1,
      sym__inner_style_attribute,
    STATE(149), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(109), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [588] = 7,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(109), 1,
      sym__inner_style_attribute,
    STATE(150), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [626] = 3,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 20,
      anon_sym_RBRACE,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [656] = 4,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 19,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [688] = 4,
    ACTIONS(121), 1,
      aux_sym__identifier_token1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 19,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_style,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [720] = 7,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(109), 1,
      sym__inner_style_attribute,
    STATE(153), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [758] = 7,
    ACTIONS(99), 1,
      anon_sym_3d,
    STATE(109), 1,
      sym__inner_style_attribute,
    STATE(149), 1,
      sym__style_attr_key,
    STATE(157), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(13), 15,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
  [796] = 4,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(132), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(107), 17,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__eol,
  [827] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(132), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(107), 18,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__eol,
  [856] = 4,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(132), 2,
      anon_sym_fill,
      anon_sym_stroke,
    ACTIONS(107), 17,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      sym__eol,
  [887] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      sym__text_block_start,
    STATE(75), 1,
      aux_sym__unquoted_string,
    STATE(89), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(114), 1,
      sym__container_block,
    STATE(116), 1,
      sym_text_block,
    ACTIONS(139), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [932] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      sym__text_block_start,
    ACTIONS(153), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym__unquoted_string,
    STATE(89), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(114), 1,
      sym__container_block,
    STATE(116), 1,
      sym_text_block,
    ACTIONS(139), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [977] = 6,
    ACTIONS(161), 1,
      aux_sym__identifier_token3,
    ACTIONS(163), 1,
      sym__dash,
    STATE(24), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(159), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(157), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1005] = 5,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(167), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(170), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(165), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1031] = 6,
    ACTIONS(176), 1,
      aux_sym__identifier_token3,
    ACTIONS(178), 1,
      sym__dash,
    STATE(23), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(174), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(172), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1059] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(151), 1,
      sym__text_block_start,
    ACTIONS(180), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    STATE(87), 1,
      aux_sym__unquoted_string,
    STATE(89), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(114), 1,
      sym__container_block,
    STATE(116), 1,
      sym_text_block,
    ACTIONS(139), 2,
      sym__eol,
      anon_sym_SEMI,
  [1103] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(186), 1,
      sym_escape_sequence,
    STATE(81), 1,
      aux_sym__unquoted_string,
    STATE(117), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1140] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(84), 1,
      aux_sym__unquoted_string,
    STATE(117), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1177] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      sym_escape_sequence,
    STATE(90), 1,
      aux_sym__unquoted_string,
    STATE(117), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1214] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(84), 1,
      aux_sym__unquoted_string,
    STATE(139), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1251] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(198), 1,
      sym_escape_sequence,
    STATE(90), 1,
      aux_sym__unquoted_string,
    STATE(141), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1288] = 6,
    ACTIONS(163), 1,
      sym__dash,
    ACTIONS(202), 1,
      aux_sym__identifier_token3,
    STATE(34), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(157), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1315] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      aux_sym__unquoted_string,
    STATE(88), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(130), 1,
      sym__connection_block,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1354] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      sym_line_comment,
    STATE(75), 1,
      aux_sym__unquoted_string,
    STATE(92), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(137), 1,
      sym__container_block,
    ACTIONS(208), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1393] = 6,
    ACTIONS(178), 1,
      sym__dash,
    ACTIONS(212), 1,
      aux_sym__identifier_token3,
    STATE(35), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(210), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(172), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1420] = 5,
    STATE(35), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(170), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(214), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(165), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1445] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(184), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(186), 1,
      sym_escape_sequence,
    STATE(81), 1,
      aux_sym__unquoted_string,
    STATE(141), 1,
      sym_attr_value,
    ACTIONS(188), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(190), 2,
      sym_integer,
      sym_float,
    STATE(125), 2,
      sym_string,
      sym_boolean,
  [1482] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      aux_sym__unquoted_string,
    STATE(88), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(130), 1,
      sym__connection_block,
    ACTIONS(206), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1521] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym__identifier_token1,
    ACTIONS(219), 1,
      anon_sym_style,
    ACTIONS(221), 1,
      sym_escape_sequence,
    STATE(68), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1555] = 10,
    ACTIONS(219), 1,
      anon_sym_style,
    ACTIONS(223), 1,
      aux_sym__identifier_token1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_escape_sequence,
    STATE(68), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1589] = 10,
    ACTIONS(223), 1,
      aux_sym__identifier_token1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_escape_sequence,
    ACTIONS(235), 1,
      anon_sym_style,
    STATE(76), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1623] = 10,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(223), 1,
      aux_sym__identifier_token1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_escape_sequence,
    STATE(64), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1657] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(217), 1,
      aux_sym__identifier_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    STATE(64), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1691] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    STATE(87), 1,
      aux_sym__unquoted_string,
    STATE(92), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(137), 1,
      sym__container_block,
    ACTIONS(208), 2,
      sym__eol,
      anon_sym_SEMI,
  [1729] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym__identifier_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(235), 1,
      anon_sym_style,
    STATE(76), 1,
      sym_shape_key,
    STATE(116), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(57), 2,
      sym__identifier,
      sym_string,
    STATE(114), 2,
      sym_container,
      sym_shape,
  [1763] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(180), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      aux_sym__unquoted_string,
    STATE(88), 1,
      sym_label,
    STATE(94), 1,
      sym_string,
    STATE(130), 1,
      sym__connection_block,
    ACTIONS(206), 2,
      sym__eol,
      anon_sym_SEMI,
  [1801] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym__eol,
    STATE(48), 1,
      aux_sym__connection_block_repeat1,
    STATE(67), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(98), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1830] = 8,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym_style,
    ACTIONS(251), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym__connection_block_repeat1,
    STATE(74), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(248), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(143), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1859] = 8,
    ACTIONS(62), 1,
      anon_sym_style,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym__connection_block_repeat1,
    STATE(67), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(239), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(124), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [1888] = 8,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym__connection_path_repeat1,
    STATE(58), 1,
      sym_shape_key,
    STATE(80), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [1916] = 8,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(37), 1,
      sym__colon,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    STATE(106), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1944] = 8,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_arrow,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym__colon,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    STATE(106), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1972] = 8,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      sym_arrow,
    ACTIONS(276), 1,
      sym_dot,
    STATE(20), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2000] = 3,
    ACTIONS(280), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2018] = 8,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_arrow,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(284), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2046] = 3,
    ACTIONS(178), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2064] = 7,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_shape_key,
    STATE(62), 1,
      aux_sym__connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [2089] = 2,
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
  [2104] = 3,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2121] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2136] = 2,
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
  [2151] = 3,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2168] = 7,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__connection_path_repeat1,
    STATE(168), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(294), 2,
      aux_sym__identifier_token1,
      sym_escape_sequence,
    STATE(57), 2,
      sym__identifier,
      sym_string,
  [2193] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(303), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2208] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(305), 1,
      sym_dot,
    STATE(20), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2233] = 3,
    ACTIONS(307), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2250] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2265] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      sym_dot,
    STATE(33), 1,
      sym__colon,
    STATE(138), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2290] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(315), 1,
      sym_dot,
    STATE(21), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2315] = 8,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      sym_arrow,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym__colon,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    STATE(106), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 2,
      sym__eol,
      anon_sym_SEMI,
  [2342] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2357] = 4,
    ACTIONS(323), 1,
      sym_arrow,
    STATE(71), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [2376] = 3,
    ACTIONS(326), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2393] = 8,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_arrow,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(330), 1,
      sym_dot,
    STATE(25), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 2,
      sym__eol,
      anon_sym_SEMI,
  [2420] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      sym_dot,
    STATE(43), 1,
      sym__colon,
    STATE(138), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(309), 2,
      sym__eol,
      anon_sym_SEMI,
  [2444] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(340), 1,
      sym_escape_sequence,
    STATE(78), 1,
      aux_sym__unquoted_string,
    ACTIONS(336), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2466] = 7,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      sym_dot,
    STATE(25), 1,
      sym__colon,
    STATE(103), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 2,
      sym__eol,
      anon_sym_SEMI,
  [2490] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(346), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__unquoted_string,
    ACTIONS(336), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2512] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(353), 1,
      sym_escape_sequence,
    STATE(78), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2534] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2556] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(321), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [2570] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(364), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(366), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym__unquoted_string,
    ACTIONS(362), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2591] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(368), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(371), 1,
      sym_escape_sequence,
    STATE(82), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2612] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(374), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2625] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(378), 1,
      sym_escape_sequence,
    STATE(85), 1,
      aux_sym__unquoted_string,
    ACTIONS(362), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2646] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    STATE(85), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2667] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(389), 1,
      sym_escape_sequence,
    STATE(86), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2688] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(394), 1,
      sym_escape_sequence,
    STATE(82), 1,
      aux_sym__unquoted_string,
    ACTIONS(336), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2709] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2726] = 4,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(398), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2743] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(400), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(402), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym__unquoted_string,
    ACTIONS(362), 2,
      sym__eol,
      anon_sym_SEMI,
  [2763] = 3,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2777] = 4,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2793] = 3,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 4,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2807] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(412), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2819] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym__unquoted_string,
    ACTIONS(348), 2,
      sym__eol,
      anon_sym_SEMI,
  [2839] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(243), 5,
      anon_sym_RBRACE,
      anon_sym_style,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym__eol,
  [2851] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(420), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2862] = 4,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(422), 2,
      sym__eol,
      anon_sym_SEMI,
  [2877] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_string_repeat1,
    ACTIONS(426), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2894] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(428), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2907] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(430), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2918] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_string_repeat1,
    ACTIONS(434), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2935] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(436), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2946] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(438), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2957] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_string_repeat1,
    ACTIONS(442), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [2974] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(445), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2985] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(447), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2996] = 4,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 2,
      sym__eol,
      anon_sym_SEMI,
  [3011] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(451), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3022] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3033] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3044] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(457), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3055] = 4,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 2,
      sym__eol,
      anon_sym_SEMI,
  [3070] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3081] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(463), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3092] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(398), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3103] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(465), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3114] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(467), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3125] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(469), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3136] = 4,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 2,
      sym__eol,
      anon_sym_SEMI,
  [3151] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(475), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3162] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(477), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3173] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(479), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3184] = 4,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(483), 2,
      sym__eol,
      anon_sym_SEMI,
  [3199] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(485), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3210] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(487), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3221] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(489), 4,
      aux_sym__identifier_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3232] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(491), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3243] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(493), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3254] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3265] = 4,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(497), 2,
      sym__eol,
      anon_sym_SEMI,
  [3280] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(499), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3291] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(501), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3301] = 4,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      sym_dot,
    STATE(151), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3315] = 3,
    STATE(12), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(507), 2,
      sym__eol,
      anon_sym_SEMI,
  [3327] = 4,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(509), 1,
      sym_dot,
    STATE(151), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3341] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3351] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(511), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3361] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(513), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3371] = 3,
    STATE(18), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(515), 2,
      sym__eol,
      anon_sym_SEMI,
  [3383] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(517), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3393] = 4,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(519), 1,
      sym_dot,
    STATE(151), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3407] = 3,
    STATE(96), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(521), 2,
      sym__eol,
      anon_sym_SEMI,
  [3419] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(523), 1,
      aux_sym_text_block_token1,
    ACTIONS(525), 1,
      sym_language,
  [3432] = 3,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(51), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3443] = 3,
    ACTIONS(62), 1,
      anon_sym_style,
    STATE(137), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3454] = 3,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3465] = 3,
    ACTIONS(235), 1,
      anon_sym_style,
    STATE(137), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3476] = 3,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3487] = 3,
    ACTIONS(531), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3498] = 3,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3509] = 3,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(69), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3520] = 3,
    ACTIONS(535), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3531] = 3,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3542] = 3,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3553] = 3,
    ACTIONS(264), 1,
      sym_arrow,
    STATE(50), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3564] = 2,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3572] = 2,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3580] = 2,
    ACTIONS(545), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3588] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      sym__unescaped_single_string_fragment,
  [3598] = 2,
    ACTIONS(549), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3606] = 2,
    ACTIONS(551), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3614] = 2,
    ACTIONS(553), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3622] = 2,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3630] = 2,
    ACTIONS(557), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3638] = 2,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3646] = 2,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3654] = 2,
    ACTIONS(288), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3662] = 2,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(149), 1,
      sym_line_comment,
    ACTIONS(565), 1,
      aux_sym_text_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 257,
  [SMALL_STATE(6)] = 330,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 447,
  [SMALL_STATE(9)] = 494,
  [SMALL_STATE(10)] = 541,
  [SMALL_STATE(11)] = 588,
  [SMALL_STATE(12)] = 626,
  [SMALL_STATE(13)] = 656,
  [SMALL_STATE(14)] = 688,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 758,
  [SMALL_STATE(17)] = 796,
  [SMALL_STATE(18)] = 827,
  [SMALL_STATE(19)] = 856,
  [SMALL_STATE(20)] = 887,
  [SMALL_STATE(21)] = 932,
  [SMALL_STATE(22)] = 977,
  [SMALL_STATE(23)] = 1005,
  [SMALL_STATE(24)] = 1031,
  [SMALL_STATE(25)] = 1059,
  [SMALL_STATE(26)] = 1103,
  [SMALL_STATE(27)] = 1140,
  [SMALL_STATE(28)] = 1177,
  [SMALL_STATE(29)] = 1214,
  [SMALL_STATE(30)] = 1251,
  [SMALL_STATE(31)] = 1288,
  [SMALL_STATE(32)] = 1315,
  [SMALL_STATE(33)] = 1354,
  [SMALL_STATE(34)] = 1393,
  [SMALL_STATE(35)] = 1420,
  [SMALL_STATE(36)] = 1445,
  [SMALL_STATE(37)] = 1482,
  [SMALL_STATE(38)] = 1521,
  [SMALL_STATE(39)] = 1555,
  [SMALL_STATE(40)] = 1589,
  [SMALL_STATE(41)] = 1623,
  [SMALL_STATE(42)] = 1657,
  [SMALL_STATE(43)] = 1691,
  [SMALL_STATE(44)] = 1729,
  [SMALL_STATE(45)] = 1763,
  [SMALL_STATE(46)] = 1801,
  [SMALL_STATE(47)] = 1830,
  [SMALL_STATE(48)] = 1859,
  [SMALL_STATE(49)] = 1888,
  [SMALL_STATE(50)] = 1916,
  [SMALL_STATE(51)] = 1944,
  [SMALL_STATE(52)] = 1972,
  [SMALL_STATE(53)] = 2000,
  [SMALL_STATE(54)] = 2018,
  [SMALL_STATE(55)] = 2046,
  [SMALL_STATE(56)] = 2064,
  [SMALL_STATE(57)] = 2089,
  [SMALL_STATE(58)] = 2104,
  [SMALL_STATE(59)] = 2121,
  [SMALL_STATE(60)] = 2136,
  [SMALL_STATE(61)] = 2151,
  [SMALL_STATE(62)] = 2168,
  [SMALL_STATE(63)] = 2193,
  [SMALL_STATE(64)] = 2208,
  [SMALL_STATE(65)] = 2233,
  [SMALL_STATE(66)] = 2250,
  [SMALL_STATE(67)] = 2265,
  [SMALL_STATE(68)] = 2290,
  [SMALL_STATE(69)] = 2315,
  [SMALL_STATE(70)] = 2342,
  [SMALL_STATE(71)] = 2357,
  [SMALL_STATE(72)] = 2376,
  [SMALL_STATE(73)] = 2393,
  [SMALL_STATE(74)] = 2420,
  [SMALL_STATE(75)] = 2444,
  [SMALL_STATE(76)] = 2466,
  [SMALL_STATE(77)] = 2490,
  [SMALL_STATE(78)] = 2512,
  [SMALL_STATE(79)] = 2534,
  [SMALL_STATE(80)] = 2556,
  [SMALL_STATE(81)] = 2570,
  [SMALL_STATE(82)] = 2591,
  [SMALL_STATE(83)] = 2612,
  [SMALL_STATE(84)] = 2625,
  [SMALL_STATE(85)] = 2646,
  [SMALL_STATE(86)] = 2667,
  [SMALL_STATE(87)] = 2688,
  [SMALL_STATE(88)] = 2709,
  [SMALL_STATE(89)] = 2726,
  [SMALL_STATE(90)] = 2743,
  [SMALL_STATE(91)] = 2763,
  [SMALL_STATE(92)] = 2777,
  [SMALL_STATE(93)] = 2793,
  [SMALL_STATE(94)] = 2807,
  [SMALL_STATE(95)] = 2819,
  [SMALL_STATE(96)] = 2839,
  [SMALL_STATE(97)] = 2851,
  [SMALL_STATE(98)] = 2862,
  [SMALL_STATE(99)] = 2877,
  [SMALL_STATE(100)] = 2894,
  [SMALL_STATE(101)] = 2907,
  [SMALL_STATE(102)] = 2918,
  [SMALL_STATE(103)] = 2935,
  [SMALL_STATE(104)] = 2946,
  [SMALL_STATE(105)] = 2957,
  [SMALL_STATE(106)] = 2974,
  [SMALL_STATE(107)] = 2985,
  [SMALL_STATE(108)] = 2996,
  [SMALL_STATE(109)] = 3011,
  [SMALL_STATE(110)] = 3022,
  [SMALL_STATE(111)] = 3033,
  [SMALL_STATE(112)] = 3044,
  [SMALL_STATE(113)] = 3055,
  [SMALL_STATE(114)] = 3070,
  [SMALL_STATE(115)] = 3081,
  [SMALL_STATE(116)] = 3092,
  [SMALL_STATE(117)] = 3103,
  [SMALL_STATE(118)] = 3114,
  [SMALL_STATE(119)] = 3125,
  [SMALL_STATE(120)] = 3136,
  [SMALL_STATE(121)] = 3151,
  [SMALL_STATE(122)] = 3162,
  [SMALL_STATE(123)] = 3173,
  [SMALL_STATE(124)] = 3184,
  [SMALL_STATE(125)] = 3199,
  [SMALL_STATE(126)] = 3210,
  [SMALL_STATE(127)] = 3221,
  [SMALL_STATE(128)] = 3232,
  [SMALL_STATE(129)] = 3243,
  [SMALL_STATE(130)] = 3254,
  [SMALL_STATE(131)] = 3265,
  [SMALL_STATE(132)] = 3280,
  [SMALL_STATE(133)] = 3291,
  [SMALL_STATE(134)] = 3301,
  [SMALL_STATE(135)] = 3315,
  [SMALL_STATE(136)] = 3327,
  [SMALL_STATE(137)] = 3341,
  [SMALL_STATE(138)] = 3351,
  [SMALL_STATE(139)] = 3361,
  [SMALL_STATE(140)] = 3371,
  [SMALL_STATE(141)] = 3383,
  [SMALL_STATE(142)] = 3393,
  [SMALL_STATE(143)] = 3407,
  [SMALL_STATE(144)] = 3419,
  [SMALL_STATE(145)] = 3432,
  [SMALL_STATE(146)] = 3443,
  [SMALL_STATE(147)] = 3454,
  [SMALL_STATE(148)] = 3465,
  [SMALL_STATE(149)] = 3476,
  [SMALL_STATE(150)] = 3487,
  [SMALL_STATE(151)] = 3498,
  [SMALL_STATE(152)] = 3509,
  [SMALL_STATE(153)] = 3520,
  [SMALL_STATE(154)] = 3531,
  [SMALL_STATE(155)] = 3542,
  [SMALL_STATE(156)] = 3553,
  [SMALL_STATE(157)] = 3564,
  [SMALL_STATE(158)] = 3572,
  [SMALL_STATE(159)] = 3580,
  [SMALL_STATE(160)] = 3588,
  [SMALL_STATE(161)] = 3598,
  [SMALL_STATE(162)] = 3606,
  [SMALL_STATE(163)] = 3614,
  [SMALL_STATE(164)] = 3622,
  [SMALL_STATE(165)] = 3630,
  [SMALL_STATE(166)] = 3638,
  [SMALL_STATE(167)] = 3646,
  [SMALL_STATE(168)] = 3654,
  [SMALL_STATE(169)] = 3662,
  [SMALL_STATE(170)] = 3670,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(22),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(169),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(134),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(160),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(99),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(22),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(166),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(157),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(166),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(10),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(119),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(110),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(123),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(126),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(23),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(35),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(31),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(160),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(99),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(31),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(134),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(83),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(47),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(31),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(160),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(99),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(49),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(78),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(78),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(79),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(79),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(82),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(82),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(85),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(85),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(86),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(86),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(101),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(115),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(95),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(95),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(105),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [543] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
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

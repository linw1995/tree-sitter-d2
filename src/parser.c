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
#define STATE_COUNT 256
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 3
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_link = 16,
  anon_sym_tooltip = 17,
  anon_sym_width = 18,
  anon_sym_height = 19,
  anon_sym_vertical_DASHgap = 20,
  anon_sym_horizontal_DASHgap = 21,
  anon_sym_grid_DASHgap = 22,
  anon_sym_grid_DASHcolumns = 23,
  anon_sym_grid_DASHrows = 24,
  anon_sym_3d = 25,
  anon_sym_opacity = 26,
  anon_sym_fill = 27,
  anon_sym_fill_DASHpattern = 28,
  anon_sym_stroke = 29,
  anon_sym_stroke_DASHwidth = 30,
  anon_sym_stroke_DASHdash = 31,
  anon_sym_border_DASHradius = 32,
  anon_sym_double_DASHborder = 33,
  anon_sym_font = 34,
  anon_sym_font_DASHsize = 35,
  anon_sym_font_DASHcolor = 36,
  anon_sym_shadow = 37,
  anon_sym_multiple = 38,
  anon_sym_animated = 39,
  anon_sym_italic = 40,
  anon_sym_bold = 41,
  anon_sym_underline = 42,
  anon_sym_text_DASHtransform = 43,
  sym__text_attr_key = 44,
  anon_sym_source_DASHarrowhead = 45,
  anon_sym_target_DASHarrowhead = 46,
  sym_keyword_underscore = 47,
  sym_keyword_classes = 48,
  sym_keyword_class = 49,
  sym_keyword_style = 50,
  sym__dash = 51,
  anon_sym_COLON = 52,
  sym_arrow = 53,
  sym_dot = 54,
  aux_sym__unquoted_string_token1 = 55,
  anon_sym_SQUOTE = 56,
  anon_sym_DQUOTE = 57,
  sym__unescaped_single_string_fragment = 58,
  sym__unescaped_double_string_fragment = 59,
  sym_escape_sequence = 60,
  anon_sym_true = 61,
  anon_sym_false = 62,
  sym_integer = 63,
  sym_float = 64,
  sym_line_comment = 65,
  sym__eol = 66,
  anon_sym_SEMI = 67,
  sym__text_block_start = 68,
  sym__text_block_end = 69,
  sym__text_block_raw_text = 70,
  sym_block_comment = 71,
  sym_source_file = 72,
  sym__root_definition = 73,
  sym_connection = 74,
  sym__connection_path = 75,
  sym__connection_block = 76,
  sym_classes = 77,
  sym__classes_block = 78,
  sym__classes_item = 79,
  sym__classes_item_block = 80,
  sym__classes_item_attribute = 81,
  sym_container = 82,
  sym__container_block = 83,
  sym__container_block_definition = 84,
  sym_shape = 85,
  sym_shape_key = 86,
  sym__identifier = 87,
  sym_text_block = 88,
  sym__text_block_attrs = 89,
  sym__root_attribute = 90,
  sym__root_attr_key = 91,
  sym__shape_attribute = 92,
  sym__class_attribute = 93,
  sym_class_list = 94,
  sym__class_name = 95,
  sym__base_shape_attribute = 96,
  sym__shape_attr_key = 97,
  sym__style_attribute = 98,
  sym__style_attribute_block = 99,
  sym__inner_style_attribute = 100,
  sym__grid_attr_key = 101,
  sym__style_attr_key = 102,
  sym__common_style_attr_key = 103,
  sym__text_shape_attribute = 104,
  sym__connection_attribute = 105,
  sym__connection_arrowhead_attribute = 106,
  sym__connection_arrowhead_attr_key = 107,
  sym_label = 108,
  sym_attr_value = 109,
  sym__colon = 110,
  aux_sym__unquoted_string = 111,
  sym_string = 112,
  sym_boolean = 113,
  sym__end = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_connection_repeat1 = 116,
  aux_sym__connection_path_repeat1 = 117,
  aux_sym__connection_block_repeat1 = 118,
  aux_sym__classes_block_repeat1 = 119,
  aux_sym__classes_item_block_repeat1 = 120,
  aux_sym__container_block_repeat1 = 121,
  aux_sym__identifier_repeat1 = 122,
  aux_sym__text_block_attrs_repeat1 = 123,
  aux_sym_class_list_repeat1 = 124,
  aux_sym__style_attribute_block_repeat1 = 125,
  aux_sym_string_repeat1 = 126,
  alias_sym_class_name = 127,
  alias_sym_container_key = 128,
  alias_sym_reserved = 129,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_font] = "font",
  [anon_sym_font_DASHsize] = "font-size",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_italic] = "italic",
  [anon_sym_bold] = "bold",
  [anon_sym_underline] = "underline",
  [anon_sym_text_DASHtransform] = "text-transform",
  [sym__text_attr_key] = "_text_attr_key",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym_keyword_underscore] = "keyword_underscore",
  [sym_keyword_classes] = "keyword_classes",
  [sym_keyword_class] = "keyword_class",
  [sym_keyword_style] = "keyword_style",
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
  [sym_classes] = "classes",
  [sym__classes_block] = "block",
  [sym__classes_item] = "_classes_item",
  [sym__classes_item_block] = "class_block",
  [sym__classes_item_attribute] = "_classes_item_attribute",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__identifier] = "_identifier",
  [sym_text_block] = "text_block",
  [sym__text_block_attrs] = "block",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__class_attribute] = "attribute",
  [sym_class_list] = "class_list",
  [sym__class_name] = "_class_name",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__grid_attr_key] = "_grid_attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__text_shape_attribute] = "attribute",
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
  [aux_sym__classes_block_repeat1] = "_classes_block_repeat1",
  [aux_sym__classes_item_block_repeat1] = "_classes_item_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__text_block_attrs_repeat1] = "_text_block_attrs_repeat1",
  [aux_sym_class_list_repeat1] = "class_list_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_container_key] = "container_key",
  [alias_sym_reserved] = "reserved",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_font] = anon_sym_font,
  [anon_sym_font_DASHsize] = anon_sym_font_DASHsize,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_underline] = anon_sym_underline,
  [anon_sym_text_DASHtransform] = anon_sym_text_DASHtransform,
  [sym__text_attr_key] = sym__text_attr_key,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym_keyword_underscore] = sym_keyword_underscore,
  [sym_keyword_classes] = sym_keyword_classes,
  [sym_keyword_class] = sym_keyword_class,
  [sym_keyword_style] = sym_keyword_style,
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
  [sym_classes] = sym_classes,
  [sym__classes_block] = sym__connection_block,
  [sym__classes_item] = sym__classes_item,
  [sym__classes_item_block] = sym__classes_item_block,
  [sym__classes_item_attribute] = sym__classes_item_attribute,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__identifier] = sym__identifier,
  [sym_text_block] = sym_text_block,
  [sym__text_block_attrs] = sym__connection_block,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = sym__root_attr_key,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__class_attribute] = sym__root_attribute,
  [sym_class_list] = sym_class_list,
  [sym__class_name] = sym__class_name,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__grid_attr_key] = sym__grid_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__text_shape_attribute] = sym__root_attribute,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = sym__root_attr_key,
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
  [aux_sym__classes_block_repeat1] = aux_sym__classes_block_repeat1,
  [aux_sym__classes_item_block_repeat1] = aux_sym__classes_item_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__text_block_attrs_repeat1] = aux_sym__text_block_attrs_repeat1,
  [aux_sym_class_list_repeat1] = aux_sym_class_list_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_container_key] = alias_sym_container_key,
  [alias_sym_reserved] = alias_sym_reserved,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [anon_sym_font] = {
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
  [anon_sym_text_DASHtransform] = {
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
  [sym_keyword_underscore] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_classes] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_class] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_style] = {
    .visible = true,
    .named = true,
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
  [sym_classes] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_block] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_item] = {
    .visible = false,
    .named = true,
  },
  [sym__classes_item_block] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_item_attribute] = {
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
  [sym__text_block_attrs] = {
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
  [sym__class_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_class_list] = {
    .visible = true,
    .named = true,
  },
  [sym__class_name] = {
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
  [sym__text_shape_attribute] = {
    .visible = true,
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
  [aux_sym__classes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classes_item_block_repeat1] = {
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
  [aux_sym__text_block_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_list_repeat1] = {
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
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_container_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reserved] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_reserved,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
  [3] = {
    [0] = alias_sym_class_name,
  },
  [4] = {
    [0] = sym__root_attr_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 3,
    sym_shape_key,
    alias_sym_class_name,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    alias_sym_reserved,
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
  [10] = 9,
  [11] = 8,
  [12] = 9,
  [13] = 8,
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
  [25] = 24,
  [26] = 23,
  [27] = 23,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 37,
  [44] = 44,
  [45] = 45,
  [46] = 39,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 47,
  [52] = 52,
  [53] = 49,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 48,
  [58] = 49,
  [59] = 56,
  [60] = 60,
  [61] = 61,
  [62] = 48,
  [63] = 63,
  [64] = 64,
  [65] = 54,
  [66] = 66,
  [67] = 56,
  [68] = 64,
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
  [81] = 74,
  [82] = 82,
  [83] = 78,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 75,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 94,
  [95] = 95,
  [96] = 92,
  [97] = 97,
  [98] = 85,
  [99] = 78,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 92,
  [105] = 105,
  [106] = 91,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 110,
  [111] = 107,
  [112] = 112,
  [113] = 90,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 103,
  [118] = 118,
  [119] = 103,
  [120] = 120,
  [121] = 103,
  [122] = 122,
  [123] = 123,
  [124] = 107,
  [125] = 122,
  [126] = 126,
  [127] = 127,
  [128] = 122,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 103,
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
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 201,
  [205] = 201,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 226,
  [232] = 232,
  [233] = 232,
  [234] = 230,
  [235] = 226,
  [236] = 227,
  [237] = 237,
  [238] = 232,
  [239] = 228,
  [240] = 240,
  [241] = 227,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
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

static inline bool sym__unescaped_double_string_fragment_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(292);
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(289)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_2(lookahead)) SKIP(5)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(372);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_2(lookahead)) SKIP(8)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_2(lookahead)) SKIP(8)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_2(lookahead)) SKIP(8)
      if (('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '3') ADVANCE(96);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == '3') ADVANCE(96);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(397);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(397);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(397);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(27)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'd') ADVANCE(307);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(27)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(397);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(397);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(397);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(397);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(397);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(397);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 40:
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(388);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(388);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(388);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(266);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(325);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(401);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(401);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(376);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '>') ADVANCE(375);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(349);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 156:
      if (lookahead == 'k') ADVANCE(335);
      END_STATE();
    case 157:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == 'x') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(406);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 272:
      if (lookahead == 'w') ADVANCE(356);
      END_STATE();
    case 273:
      if (lookahead == 'w') ADVANCE(236);
      END_STATE();
    case 274:
      if (lookahead == 'w') ADVANCE(137);
      END_STATE();
    case 275:
      if (lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 276:
      if (lookahead == 'x') ADVANCE(252);
      END_STATE();
    case 277:
      if (lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 278:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 279:
      if (lookahead == 'z') ADVANCE(112);
      END_STATE();
    case 280:
      if (lookahead == 'z') ADVANCE(196);
      END_STATE();
    case 281:
      if (lookahead == '{') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 282:
      if (lookahead == '}') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 283:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 288:
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 289:
      if (eof) ADVANCE(292);
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '.') ADVANCE(377);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (anon_sym__character_set_1(lookahead)) SKIP(289)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 290:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(304);
      if (anon_sym__character_set_1(lookahead)) SKIP(291)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 291:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == 'u') ADVANCE(315);
      if (lookahead == 'v') ADVANCE(304);
      if (anon_sym__character_set_1(lookahead)) SKIP(291)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_text_DASHtransform);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__text_attr_key);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_keyword_underscore);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_keyword_classes);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_keyword_class);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_keyword_class);
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_keyword_style);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '>') ADVANCE(375);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__dash);
      if (lookahead == '"' ||
          lookahead == '$' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '>') ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 0) ADVANCE(293);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(397);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(388);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(397);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '{') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(397);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\r') ADVANCE(283);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == ';') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(397);
      if (aux_sym__unquoted_string_token1_character_set_1(lookahead)) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(397);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(401);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(403);
      if (sym__unescaped_double_string_fragment_character_set_1(lookahead)) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(411);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(395);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 290, .external_lex_state = 2},
  [2] = {.lex_state = 290, .external_lex_state = 2},
  [3] = {.lex_state = 290, .external_lex_state = 2},
  [4] = {.lex_state = 26, .external_lex_state = 2},
  [5] = {.lex_state = 26, .external_lex_state = 2},
  [6] = {.lex_state = 26, .external_lex_state = 2},
  [7] = {.lex_state = 290, .external_lex_state = 2},
  [8] = {.lex_state = 26, .external_lex_state = 2},
  [9] = {.lex_state = 26, .external_lex_state = 2},
  [10] = {.lex_state = 26, .external_lex_state = 2},
  [11] = {.lex_state = 26, .external_lex_state = 2},
  [12] = {.lex_state = 26, .external_lex_state = 2},
  [13] = {.lex_state = 26, .external_lex_state = 2},
  [14] = {.lex_state = 12, .external_lex_state = 2},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 26, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 26, .external_lex_state = 2},
  [22] = {.lex_state = 26, .external_lex_state = 2},
  [23] = {.lex_state = 26, .external_lex_state = 2},
  [24] = {.lex_state = 12, .external_lex_state = 2},
  [25] = {.lex_state = 12, .external_lex_state = 2},
  [26] = {.lex_state = 26, .external_lex_state = 2},
  [27] = {.lex_state = 26, .external_lex_state = 2},
  [28] = {.lex_state = 12, .external_lex_state = 2},
  [29] = {.lex_state = 12, .external_lex_state = 2},
  [30] = {.lex_state = 12, .external_lex_state = 2},
  [31] = {.lex_state = 12, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 28, .external_lex_state = 3},
  [36] = {.lex_state = 10, .external_lex_state = 3},
  [37] = {.lex_state = 4, .external_lex_state = 2},
  [38] = {.lex_state = 29, .external_lex_state = 3},
  [39] = {.lex_state = 7, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 24, .external_lex_state = 2},
  [42] = {.lex_state = 4, .external_lex_state = 2},
  [43] = {.lex_state = 7, .external_lex_state = 2},
  [44] = {.lex_state = 24, .external_lex_state = 2},
  [45] = {.lex_state = 24, .external_lex_state = 2},
  [46] = {.lex_state = 4, .external_lex_state = 2},
  [47] = {.lex_state = 43, .external_lex_state = 2},
  [48] = {.lex_state = 43, .external_lex_state = 2},
  [49] = {.lex_state = 43, .external_lex_state = 2},
  [50] = {.lex_state = 24, .external_lex_state = 2},
  [51] = {.lex_state = 43, .external_lex_state = 2},
  [52] = {.lex_state = 10, .external_lex_state = 2},
  [53] = {.lex_state = 43, .external_lex_state = 2},
  [54] = {.lex_state = 28, .external_lex_state = 2},
  [55] = {.lex_state = 10, .external_lex_state = 2},
  [56] = {.lex_state = 10, .external_lex_state = 2},
  [57] = {.lex_state = 43, .external_lex_state = 2},
  [58] = {.lex_state = 43, .external_lex_state = 2},
  [59] = {.lex_state = 28, .external_lex_state = 2},
  [60] = {.lex_state = 24, .external_lex_state = 2},
  [61] = {.lex_state = 43, .external_lex_state = 2},
  [62] = {.lex_state = 43, .external_lex_state = 2},
  [63] = {.lex_state = 24, .external_lex_state = 2},
  [64] = {.lex_state = 28, .external_lex_state = 2},
  [65] = {.lex_state = 29, .external_lex_state = 2},
  [66] = {.lex_state = 24, .external_lex_state = 2},
  [67] = {.lex_state = 29, .external_lex_state = 2},
  [68] = {.lex_state = 29, .external_lex_state = 2},
  [69] = {.lex_state = 12, .external_lex_state = 2},
  [70] = {.lex_state = 12, .external_lex_state = 2},
  [71] = {.lex_state = 12, .external_lex_state = 2},
  [72] = {.lex_state = 24, .external_lex_state = 2},
  [73] = {.lex_state = 24, .external_lex_state = 2},
  [74] = {.lex_state = 12, .external_lex_state = 2},
  [75] = {.lex_state = 12, .external_lex_state = 2},
  [76] = {.lex_state = 7, .external_lex_state = 2},
  [77] = {.lex_state = 7, .external_lex_state = 2},
  [78] = {.lex_state = 7, .external_lex_state = 2},
  [79] = {.lex_state = 24, .external_lex_state = 2},
  [80] = {.lex_state = 7, .external_lex_state = 2},
  [81] = {.lex_state = 7, .external_lex_state = 2},
  [82] = {.lex_state = 7, .external_lex_state = 2},
  [83] = {.lex_state = 7, .external_lex_state = 2},
  [84] = {.lex_state = 7, .external_lex_state = 2},
  [85] = {.lex_state = 7, .external_lex_state = 2},
  [86] = {.lex_state = 7, .external_lex_state = 2},
  [87] = {.lex_state = 7, .external_lex_state = 2},
  [88] = {.lex_state = 7, .external_lex_state = 2},
  [89] = {.lex_state = 24, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 7, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 7, .external_lex_state = 2},
  [98] = {.lex_state = 7, .external_lex_state = 2},
  [99] = {.lex_state = 7, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 7, .external_lex_state = 2},
  [102] = {.lex_state = 24, .external_lex_state = 2},
  [103] = {.lex_state = 32, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 7, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 32, .external_lex_state = 2},
  [108] = {.lex_state = 24, .external_lex_state = 2},
  [109] = {.lex_state = 14, .external_lex_state = 2},
  [110] = {.lex_state = 24, .external_lex_state = 2},
  [111] = {.lex_state = 14, .external_lex_state = 2},
  [112] = {.lex_state = 24, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 24, .external_lex_state = 2},
  [115] = {.lex_state = 24, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 33, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 34, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 15, .external_lex_state = 2},
  [122] = {.lex_state = 34, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 33, .external_lex_state = 2},
  [125] = {.lex_state = 15, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 35, .external_lex_state = 2},
  [129] = {.lex_state = 12, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 12, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 12, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 35, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 24, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 45, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 45, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 45, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 7, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 7, .external_lex_state = 2},
  [237] = {.lex_state = 46, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 7, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 46, .external_lex_state = 2},
  [249] = {.lex_state = 47, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 5},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 5},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_font_DASHsize] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_text_DASHtransform] = ACTIONS(1),
    [sym__text_attr_key] = ACTIONS(1),
    [sym_keyword_underscore] = ACTIONS(1),
    [sym_keyword_classes] = ACTIONS(1),
    [sym_keyword_class] = ACTIONS(1),
    [sym_keyword_style] = ACTIONS(1),
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
    [sym_source_file] = STATE(244),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(147),
    [sym__connection_path] = STATE(241),
    [sym_classes] = STATE(147),
    [sym_container] = STATE(147),
    [sym_shape] = STATE(147),
    [sym_shape_key] = STATE(78),
    [sym__identifier] = STATE(80),
    [sym__root_attribute] = STATE(147),
    [sym__root_attr_key] = STATE(240),
    [sym__grid_attr_key] = STATE(247),
    [sym__common_style_attr_key] = STATE(252),
    [sym_string] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__identifier_token1] = ACTIONS(7),
    [anon_sym_direction] = ACTIONS(9),
    [anon_sym_shape] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(11),
    [anon_sym_constraint] = ACTIONS(11),
    [anon_sym_icon] = ACTIONS(11),
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
    [anon_sym_font] = ACTIONS(15),
    [anon_sym_font_DASHsize] = ACTIONS(13),
    [anon_sym_font_DASHcolor] = ACTIONS(13),
    [anon_sym_shadow] = ACTIONS(13),
    [anon_sym_multiple] = ACTIONS(13),
    [anon_sym_animated] = ACTIONS(13),
    [anon_sym_italic] = ACTIONS(13),
    [anon_sym_bold] = ACTIONS(13),
    [anon_sym_underline] = ACTIONS(13),
    [anon_sym_text_DASHtransform] = ACTIONS(13),
    [sym__text_attr_key] = ACTIONS(11),
    [sym_keyword_underscore] = ACTIONS(17),
    [sym_keyword_classes] = ACTIONS(19),
    [sym_keyword_style] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(27),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__identifier_token1,
    ACTIONS(46), 1,
      sym_keyword_underscore,
    ACTIONS(49), 1,
      sym_keyword_classes,
    ACTIONS(52), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_escape_sequence,
    ACTIONS(61), 1,
      sym__eol,
    STATE(78), 1,
      sym_shape_key,
    STATE(79), 1,
      aux_sym__connection_path_repeat1,
    STATE(240), 1,
      sym__root_attr_key,
    STATE(241), 1,
      sym__connection_path,
    STATE(247), 1,
      sym__grid_attr_key,
    STATE(252), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    ACTIONS(43), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(147), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(34), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(37), 6,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(40), 16,
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
      anon_sym_text_DASHtransform,
  [101] = 22,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(19), 1,
      sym_keyword_classes,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym__eol,
    STATE(78), 1,
      sym_shape_key,
    STATE(79), 1,
      aux_sym__connection_path_repeat1,
    STATE(240), 1,
      sym__root_attr_key,
    STATE(241), 1,
      sym__connection_path,
    STATE(247), 1,
      sym__grid_attr_key,
    STATE(252), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(2), 2,
      sym__root_definition,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(147), 5,
      sym_connection,
      sym_classes,
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
      sym__text_attr_key,
      sym_keyword_style,
    ACTIONS(13), 16,
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
      anon_sym_text_DASHtransform,
  [202] = 19,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(76), 1,
      sym__eol,
    STATE(6), 1,
      aux_sym__container_block_repeat1,
    STATE(79), 1,
      aux_sym__connection_path_repeat1,
    STATE(83), 1,
      sym_shape_key,
    STATE(227), 1,
      sym__connection_path,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(163), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [283] = 19,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      aux_sym__identifier_token1,
    ACTIONS(86), 1,
      sym_keyword_underscore,
    ACTIONS(89), 1,
      sym_keyword_class,
    ACTIONS(92), 1,
      sym_keyword_style,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_escape_sequence,
    ACTIONS(104), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(79), 1,
      aux_sym__connection_path_repeat1,
    STATE(99), 1,
      sym_shape_key,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(236), 1,
      sym__connection_path,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(216), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(83), 15,
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
      sym__text_attr_key,
  [364] = 19,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym__eol,
    STATE(5), 1,
      aux_sym__container_block_repeat1,
    STATE(79), 1,
      aux_sym__connection_path_repeat1,
    STATE(83), 1,
      sym_shape_key,
    STATE(227), 1,
      sym__connection_path,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(193), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [445] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(113), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(111), 35,
      ts_builtin_sym_end,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
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
      anon_sym_text_DASHtransform,
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_classes,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [493] = 15,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    STATE(93), 1,
      sym_shape_key,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(166), 2,
      sym_container,
      sym_shape,
    STATE(168), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [559] = 15,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(119), 1,
      aux_sym__identifier_token1,
    ACTIONS(122), 1,
      sym_keyword_underscore,
    ACTIONS(125), 1,
      sym_keyword_style,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_escape_sequence,
    STATE(90), 1,
      sym_shape_key,
    STATE(238), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(166), 2,
      sym_container,
      sym_shape,
    STATE(168), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [625] = 15,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(119), 1,
      aux_sym__identifier_token1,
    ACTIONS(122), 1,
      sym_keyword_underscore,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_escape_sequence,
    STATE(93), 1,
      sym_shape_key,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(166), 2,
      sym_container,
      sym_shape,
    STATE(168), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [691] = 15,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(136), 1,
      sym_keyword_style,
    STATE(113), 1,
      sym_shape_key,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(166), 2,
      sym_container,
      sym_shape,
    STATE(168), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [757] = 15,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(119), 1,
      aux_sym__identifier_token1,
    ACTIONS(122), 1,
      sym_keyword_underscore,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_escape_sequence,
    ACTIONS(136), 1,
      sym_keyword_style,
    STATE(113), 1,
      sym_shape_key,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(166), 2,
      sym_container,
      sym_shape,
    STATE(168), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [823] = 15,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(90), 1,
      sym_shape_key,
    STATE(238), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(166), 2,
      sym_container,
      sym_shape,
    STATE(168), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [889] = 10,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      anon_sym_3d,
    ACTIONS(142), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(182), 1,
      sym__inner_style_attribute,
    STATE(226), 1,
      sym__style_attr_key,
    STATE(246), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
      anon_sym_text_DASHtransform,
  [938] = 10,
    ACTIONS(140), 1,
      anon_sym_3d,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym__eol,
    STATE(14), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(158), 1,
      sym__inner_style_attribute,
    STATE(226), 1,
      sym__style_attr_key,
    STATE(246), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
      anon_sym_text_DASHtransform,
  [987] = 10,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_3d,
    ACTIONS(159), 1,
      sym__eol,
    STATE(16), 1,
      aux_sym__style_attribute_block_repeat1,
    STATE(206), 1,
      sym__inner_style_attribute,
    STATE(231), 1,
      sym__style_attr_key,
    STATE(246), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(150), 16,
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
      anon_sym_text_DASHtransform,
  [1036] = 9,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(192), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [1081] = 9,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      sym__eol,
    STATE(20), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(143), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [1126] = 3,
    ACTIONS(170), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(78), 23,
      anon_sym_RBRACE,
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
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1159] = 9,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      sym_keyword_style,
    ACTIONS(180), 1,
      sym__eol,
    STATE(20), 1,
      aux_sym__classes_item_block_repeat1,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(200), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(174), 15,
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
      sym__text_attr_key,
  [1204] = 4,
    ACTIONS(170), 1,
      aux_sym__identifier_token1,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(78), 22,
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
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1239] = 4,
    ACTIONS(170), 1,
      aux_sym__identifier_token1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(78), 22,
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
      sym__text_attr_key,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [1274] = 7,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(125), 1,
      sym_keyword_style,
    STATE(238), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(191), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [1314] = 7,
    ACTIONS(140), 1,
      anon_sym_3d,
    STATE(162), 1,
      sym__inner_style_attribute,
    STATE(231), 1,
      sym__style_attr_key,
    STATE(246), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
      anon_sym_text_DASHtransform,
  [1354] = 7,
    ACTIONS(140), 1,
      anon_sym_3d,
    STATE(162), 1,
      sym__inner_style_attribute,
    STATE(226), 1,
      sym__style_attr_key,
    STATE(246), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
      anon_sym_text_DASHtransform,
  [1394] = 7,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(74), 1,
      sym_keyword_style,
    STATE(233), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(191), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [1434] = 7,
    ACTIONS(72), 1,
      sym_keyword_class,
    ACTIONS(136), 1,
      sym_keyword_style,
    STATE(232), 1,
      sym__shape_attr_key,
    STATE(254), 1,
      sym__grid_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(191), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(70), 15,
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
      sym__text_attr_key,
  [1474] = 7,
    ACTIONS(140), 1,
      anon_sym_3d,
    STATE(162), 1,
      sym__inner_style_attribute,
    STATE(235), 1,
      sym__style_attr_key,
    STATE(246), 1,
      sym__common_style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(15), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(13), 16,
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
      anon_sym_text_DASHtransform,
  [1514] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(189), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(148), 19,
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
      anon_sym_text_DASHtransform,
      sym__eol,
  [1545] = 4,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(189), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(148), 18,
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
      anon_sym_text_DASHtransform,
      sym__eol,
  [1578] = 4,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(189), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(148), 18,
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
      anon_sym_text_DASHtransform,
      sym__eol,
  [1611] = 3,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 17,
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
      sym__text_attr_key,
      sym_keyword_style,
      sym__eol,
  [1638] = 3,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 17,
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
      sym__text_attr_key,
      sym_keyword_style,
      sym__eol,
  [1665] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 18,
      anon_sym_RBRACE,
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
      sym__text_attr_key,
      sym_keyword_style,
      sym__eol,
  [1690] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_escape_sequence,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym__text_block_start,
    STATE(107), 1,
      aux_sym__unquoted_string,
    STATE(118), 1,
      sym_label,
    STATE(126), 1,
      sym_text_block,
    STATE(138), 1,
      sym_string,
    STATE(166), 1,
      sym__container_block,
    ACTIONS(205), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [1735] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym__text_block_start,
    ACTIONS(219), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    STATE(111), 1,
      aux_sym__unquoted_string,
    STATE(118), 1,
      sym_label,
    STATE(126), 1,
      sym_text_block,
    STATE(138), 1,
      sym_string,
    STATE(166), 1,
      sym__container_block,
    ACTIONS(205), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [1780] = 6,
    ACTIONS(227), 1,
      aux_sym__identifier_token3,
    ACTIONS(229), 1,
      sym__dash,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(225), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(223), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1808] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(217), 1,
      sym__text_block_start,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    STATE(118), 1,
      sym_label,
    STATE(124), 1,
      aux_sym__unquoted_string,
    STATE(126), 1,
      sym_text_block,
    STATE(138), 1,
      sym_string,
    STATE(166), 1,
      sym__container_block,
    ACTIONS(205), 2,
      sym__eol,
      anon_sym_SEMI,
  [1852] = 6,
    ACTIONS(239), 1,
      aux_sym__identifier_token3,
    ACTIONS(241), 1,
      sym__dash,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(237), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(235), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1880] = 5,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(248), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(243), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1906] = 13,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      aux_sym__identifier_token1,
    ACTIONS(255), 1,
      sym_keyword_underscore,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_escape_sequence,
    ACTIONS(267), 1,
      sym__eol,
    STATE(41), 1,
      aux_sym__classes_block_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(104), 1,
      sym__class_name,
    STATE(209), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [1948] = 5,
    STATE(42), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(248), 2,
      aux_sym__identifier_token3,
      sym__dash,
    ACTIONS(270), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(243), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [1974] = 6,
    ACTIONS(229), 1,
      sym__dash,
    ACTIONS(275), 1,
      aux_sym__identifier_token3,
    STATE(40), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(223), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2002] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      sym__eol,
    STATE(45), 1,
      aux_sym__classes_block_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(96), 1,
      sym__class_name,
    STATE(151), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [2044] = 13,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym__eol,
    STATE(41), 1,
      aux_sym__classes_block_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(96), 1,
      sym__class_name,
    STATE(183), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [2086] = 6,
    ACTIONS(241), 1,
      sym__dash,
    ACTIONS(287), 1,
      aux_sym__identifier_token3,
    STATE(37), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(285), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(235), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [2114] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(291), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym__unquoted_string,
    STATE(213), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2151] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2188] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(291), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym__unquoted_string,
    STATE(179), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2225] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(303), 1,
      sym__eol,
    STATE(60), 1,
      aux_sym_class_list_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(154), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [2264] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(307), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(213), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2301] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      aux_sym__unquoted_string,
    STATE(127), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(222), 1,
      sym__classes_block,
    ACTIONS(309), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2340] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(307), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(179), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2377] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(207), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_escape_sequence,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      aux_sym__unquoted_string,
    STATE(116), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(191), 1,
      sym__classes_item_block,
    ACTIONS(315), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2416] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      aux_sym__unquoted_string,
    STATE(116), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(191), 1,
      sym__classes_item_block,
    ACTIONS(315), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2455] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(221), 1,
      sym_escape_sequence,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      aux_sym__unquoted_string,
    STATE(120), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(188), 1,
      sym__connection_block,
    ACTIONS(317), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [2494] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(307), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2531] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(179), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2568] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(207), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_escape_sequence,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      aux_sym__unquoted_string,
    STATE(120), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(188), 1,
      sym__connection_block,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2607] = 12,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    ACTIONS(323), 1,
      sym__eol,
    STATE(63), 1,
      aux_sym_class_list_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(177), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [2646] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(299), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym__unquoted_string,
    STATE(217), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2683] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(289), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(291), 1,
      sym_escape_sequence,
    STATE(128), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_attr_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      sym_integer,
      sym_float,
    STATE(172), 2,
      sym_string,
      sym_boolean,
  [2720] = 12,
    ACTIONS(325), 1,
      aux_sym__identifier_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      sym_keyword_underscore,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_escape_sequence,
    ACTIONS(342), 1,
      sym__eol,
    STATE(63), 1,
      aux_sym_class_list_repeat1,
    STATE(95), 1,
      sym_shape_key,
    STATE(207), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [2759] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_escape_sequence,
    ACTIONS(215), 1,
      sym_line_comment,
    STATE(107), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(208), 1,
      sym__container_block,
    ACTIONS(345), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [2798] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_label,
    STATE(124), 1,
      aux_sym__unquoted_string,
    STATE(138), 1,
      sym_string,
    STATE(191), 1,
      sym__classes_item_block,
    ACTIONS(315), 2,
      sym__eol,
      anon_sym_SEMI,
  [2836] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
    STATE(174), 2,
      sym_class_list,
      sym__class_name,
  [2870] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_label,
    STATE(124), 1,
      aux_sym__unquoted_string,
    STATE(138), 1,
      sym_string,
    STATE(188), 1,
      sym__connection_block,
    ACTIONS(317), 2,
      sym__eol,
      anon_sym_SEMI,
  [2908] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(233), 1,
      sym_escape_sequence,
    STATE(124), 1,
      aux_sym__unquoted_string,
    STATE(134), 1,
      sym_label,
    STATE(138), 1,
      sym_string,
    STATE(208), 1,
      sym__container_block,
    ACTIONS(345), 2,
      sym__eol,
      anon_sym_SEMI,
  [2946] = 8,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym__connection_block_repeat1,
    STATE(91), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(178), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [2975] = 8,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      sym_keyword_style,
    ACTIONS(363), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym__connection_block_repeat1,
    STATE(106), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(221), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3004] = 8,
    ACTIONS(74), 1,
      sym_keyword_style,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      sym__eol,
    STATE(69), 1,
      aux_sym__connection_block_repeat1,
    STATE(91), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(187), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3033] = 10,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    ACTIONS(117), 1,
      sym_escape_sequence,
    STATE(92), 1,
      sym__class_name,
    STATE(95), 1,
      sym_shape_key,
    STATE(222), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [3066] = 10,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__connection_path_repeat1,
    STATE(97), 1,
      sym_shape_key,
    STATE(105), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [3099] = 3,
    ACTIONS(370), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(223), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3117] = 3,
    ACTIONS(374), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3135] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3151] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(378), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3167] = 8,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(384), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      sym_arrow,
    ACTIONS(388), 1,
      sym_dot,
    STATE(36), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3195] = 9,
    ACTIONS(7), 1,
      aux_sym__identifier_token1,
    ACTIONS(17), 1,
      sym_keyword_underscore,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym_escape_sequence,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(94), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [3225] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(390), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3241] = 3,
    ACTIONS(229), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(223), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3259] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(223), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3275] = 8,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym_arrow,
    ACTIONS(392), 1,
      anon_sym_COLON,
    ACTIONS(394), 1,
      sym_dot,
    STATE(35), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3303] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3319] = 8,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(404), 1,
      sym_arrow,
    STATE(59), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym_connection_repeat1,
    STATE(155), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3347] = 8,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      sym_arrow,
    ACTIONS(406), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym_connection_repeat1,
    STATE(155), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3375] = 3,
    ACTIONS(408), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3393] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(372), 9,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_arrow,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3409] = 9,
    ACTIONS(410), 1,
      aux_sym__identifier_token1,
    ACTIONS(413), 1,
      sym_keyword_underscore,
    ACTIONS(416), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      sym_escape_sequence,
    STATE(89), 1,
      aux_sym__connection_path_repeat1,
    STATE(242), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(80), 2,
      sym__identifier,
      sym_string,
  [3439] = 7,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(384), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      sym_dot,
    STATE(36), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3464] = 7,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_COLON,
    ACTIONS(431), 1,
      sym_dot,
    STATE(64), 1,
      sym__colon,
    STATE(218), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(427), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3489] = 7,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(439), 1,
      sym_dot,
    STATE(55), 1,
      sym__colon,
    STATE(181), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3514] = 7,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      sym_dot,
    STATE(35), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3539] = 3,
    ACTIONS(445), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(443), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3556] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(447), 8,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [3571] = 7,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_COLON,
    ACTIONS(451), 1,
      sym_dot,
    STATE(54), 1,
      sym__colon,
    STATE(181), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3596] = 3,
    ACTIONS(445), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(386), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3613] = 8,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      sym_arrow,
    ACTIONS(453), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym__colon,
    STATE(101), 1,
      aux_sym_connection_repeat1,
    STATE(155), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(400), 2,
      sym__eol,
      anon_sym_SEMI,
  [3640] = 8,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym_arrow,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(457), 1,
      sym_dot,
    STATE(38), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      sym__eol,
      anon_sym_SEMI,
  [3667] = 7,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(465), 1,
      sym_dot,
    STATE(52), 1,
      sym__colon,
    STATE(214), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [3692] = 4,
    ACTIONS(469), 1,
      sym_arrow,
    STATE(101), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(467), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym__eol,
      anon_sym_SEMI,
  [3711] = 3,
    ACTIONS(472), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 6,
      anon_sym_RBRACK,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3727] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(479), 1,
      sym_escape_sequence,
    STATE(103), 1,
      aux_sym__unquoted_string,
    ACTIONS(474), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3749] = 7,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_COLON,
    ACTIONS(484), 1,
      sym_dot,
    STATE(65), 1,
      sym__colon,
    STATE(181), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 2,
      sym__eol,
      anon_sym_SEMI,
  [3773] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(467), 7,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_arrow,
      sym__eol,
      anon_sym_SEMI,
  [3787] = 7,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(488), 1,
      sym_dot,
    STATE(68), 1,
      sym__colon,
    STATE(218), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(427), 2,
      sym__eol,
      anon_sym_SEMI,
  [3811] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(494), 1,
      sym_escape_sequence,
    STATE(103), 1,
      aux_sym__unquoted_string,
    ACTIONS(490), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3833] = 4,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(499), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3851] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(504), 1,
      sym_escape_sequence,
    STATE(109), 1,
      aux_sym__unquoted_string,
    ACTIONS(474), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3873] = 4,
    ACTIONS(472), 1,
      aux_sym__identifier_token1,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3891] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(510), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(512), 1,
      sym_escape_sequence,
    STATE(109), 1,
      aux_sym__unquoted_string,
    ACTIONS(490), 4,
      anon_sym_,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [3913] = 4,
    ACTIONS(472), 1,
      aux_sym__identifier_token1,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3931] = 7,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(517), 1,
      sym_dot,
    STATE(38), 1,
      sym__colon,
    STATE(150), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 2,
      sym__eol,
      anon_sym_SEMI,
  [3955] = 3,
    ACTIONS(499), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 6,
      anon_sym_RBRACE,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3971] = 4,
    ACTIONS(499), 1,
      aux_sym__identifier_token1,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      sym__eol,
  [3989] = 4,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(522), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4006] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(527), 1,
      sym_escape_sequence,
    STATE(117), 1,
      aux_sym__unquoted_string,
    ACTIONS(474), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4027] = 4,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(530), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4044] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(535), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym__unquoted_string,
    ACTIONS(474), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4065] = 4,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4082] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(540), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(543), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym__unquoted_string,
    ACTIONS(474), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4103] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(550), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym__unquoted_string,
    ACTIONS(546), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4124] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(552), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      sym_dot,
      sym__eol,
      anon_sym_SEMI,
  [4137] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(556), 1,
      sym_escape_sequence,
    STATE(117), 1,
      aux_sym__unquoted_string,
    ACTIONS(490), 3,
      anon_sym_LBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4158] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(558), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(560), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym__unquoted_string,
    ACTIONS(546), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4179] = 4,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym__text_block_attrs,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(530), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4196] = 4,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(564), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4212] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(568), 1,
      sym_escape_sequence,
    STATE(137), 1,
      aux_sym__unquoted_string,
    ACTIONS(546), 2,
      sym__eol,
      anon_sym_SEMI,
  [4232] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4244] = 6,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    ACTIONS(572), 1,
      sym__text_attr_key,
    ACTIONS(574), 1,
      sym__eol,
    STATE(131), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(167), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4264] = 6,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    ACTIONS(578), 1,
      sym__text_attr_key,
    ACTIONS(581), 1,
      sym__eol,
    STATE(131), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(210), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4284] = 6,
    ACTIONS(572), 1,
      sym__text_attr_key,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(586), 1,
      sym__eol,
    STATE(130), 1,
      aux_sym__text_block_attrs_repeat1,
    STATE(161), 1,
      sym__text_shape_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4304] = 3,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4318] = 4,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4334] = 3,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      sym__eol,
  [4348] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(596), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4360] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(598), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(601), 1,
      sym_escape_sequence,
    STATE(137), 1,
      aux_sym__unquoted_string,
    ACTIONS(474), 2,
      sym__eol,
      anon_sym_SEMI,
  [4380] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(604), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4392] = 3,
    ACTIONS(606), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(608), 4,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4406] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(610), 5,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4418] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(612), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4429] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(614), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4440] = 4,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(618), 2,
      sym__eol,
      anon_sym_SEMI,
  [4455] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(620), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4466] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4477] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      aux_sym_string_repeat1,
    ACTIONS(626), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4494] = 3,
    STATE(7), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(628), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [4507] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(630), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4518] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(632), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_string_repeat1,
    ACTIONS(634), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4535] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(636), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4546] = 4,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(638), 2,
      sym__eol,
      anon_sym_SEMI,
  [4561] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_string_repeat1,
    ACTIONS(642), 2,
      sym__unescaped_double_string_fragment,
      sym_escape_sequence,
  [4578] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(645), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4589] = 4,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(647), 2,
      sym__eol,
      anon_sym_SEMI,
  [4604] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(649), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4615] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(651), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4626] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(653), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4637] = 4,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(655), 2,
      sym__eol,
      anon_sym_SEMI,
  [4652] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(657), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4663] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(659), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4674] = 4,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(661), 2,
      sym__eol,
      anon_sym_SEMI,
  [4689] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(663), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4700] = 4,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(665), 2,
      sym__eol,
      anon_sym_SEMI,
  [4715] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(667), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4726] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(669), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4737] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(671), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4748] = 4,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(675), 2,
      sym__eol,
      anon_sym_SEMI,
  [4763] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(530), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4774] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(677), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4785] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(679), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4796] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(681), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4807] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(683), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4818] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(685), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4829] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(687), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4840] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(689), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4851] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(691), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4862] = 4,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(695), 2,
      sym__eol,
      anon_sym_SEMI,
  [4877] = 4,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(699), 2,
      sym__eol,
      anon_sym_SEMI,
  [4892] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(701), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4903] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(703), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4914] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(705), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4925] = 4,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(709), 2,
      sym__eol,
      anon_sym_SEMI,
  [4940] = 4,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(713), 2,
      sym__eol,
      anon_sym_SEMI,
  [4955] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(715), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4966] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(717), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4977] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(719), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [4988] = 4,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(721), 2,
      sym__eol,
      anon_sym_SEMI,
  [5003] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(538), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5014] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(723), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5025] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(725), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5036] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(522), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5047] = 4,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(727), 2,
      sym__eol,
      anon_sym_SEMI,
  [5062] = 4,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(731), 2,
      sym__eol,
      anon_sym_SEMI,
  [5077] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(733), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5088] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(735), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5099] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(737), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5110] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(739), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5121] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(741), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5132] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(743), 4,
      anon_sym_,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5143] = 3,
    STATE(34), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(745), 2,
      sym__eol,
      anon_sym_SEMI,
  [5155] = 4,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(749), 1,
      sym_dot,
    STATE(229), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5169] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(751), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5179] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(753), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5189] = 4,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(755), 1,
      sym_dot,
    STATE(229), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5203] = 4,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(757), 1,
      sym_dot,
    STATE(229), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5217] = 3,
    STATE(29), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(759), 2,
      sym__eol,
      anon_sym_SEMI,
  [5229] = 3,
    STATE(102), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(761), 2,
      sym__eol,
      anon_sym_SEMI,
  [5241] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(591), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5251] = 3,
    STATE(114), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(763), 2,
      sym__eol,
      anon_sym_SEMI,
  [5263] = 3,
    STATE(223), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(765), 2,
      sym__eol,
      anon_sym_SEMI,
  [5275] = 3,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(576), 2,
      sym__text_attr_key,
      sym__eol,
  [5287] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(770), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5297] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(772), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5307] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(774), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5317] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(776), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5327] = 3,
    STATE(19), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(778), 2,
      sym__eol,
      anon_sym_SEMI,
  [5339] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(780), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5349] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(782), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5359] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(784), 3,
      anon_sym_RBRACE,
      sym__eol,
      anon_sym_SEMI,
  [5369] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(786), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5379] = 3,
    STATE(129), 1,
      sym__end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(788), 2,
      sym__eol,
      anon_sym_SEMI,
  [5391] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(564), 3,
      anon_sym_,
      sym__eol,
      anon_sym_SEMI,
  [5401] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(576), 3,
      anon_sym_RBRACE,
      sym__text_attr_key,
      sym__eol,
  [5411] = 3,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(576), 2,
      sym__text_attr_key,
      sym__eol,
  [5423] = 3,
    ACTIONS(793), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5434] = 3,
    ACTIONS(795), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5445] = 3,
    ACTIONS(404), 1,
      sym_arrow,
    STATE(85), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5456] = 3,
    ACTIONS(136), 1,
      sym_keyword_style,
    STATE(208), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5467] = 3,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5478] = 3,
    ACTIONS(799), 1,
      anon_sym_COLON,
    STATE(51), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5489] = 3,
    ACTIONS(801), 1,
      anon_sym_COLON,
    STATE(49), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5500] = 3,
    ACTIONS(803), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5511] = 3,
    ACTIONS(805), 1,
      anon_sym_COLON,
    STATE(57), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5522] = 3,
    ACTIONS(807), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5533] = 3,
    ACTIONS(809), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5544] = 3,
    ACTIONS(404), 1,
      sym_arrow,
    STATE(98), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5555] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      aux_sym_text_block_token1,
    ACTIONS(813), 1,
      sym_language,
  [5568] = 3,
    ACTIONS(815), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5579] = 3,
    ACTIONS(74), 1,
      sym_keyword_style,
    STATE(208), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5590] = 3,
    ACTIONS(817), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym__colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5601] = 3,
    ACTIONS(404), 1,
      sym_arrow,
    STATE(86), 1,
      aux_sym_connection_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5612] = 2,
    ACTIONS(445), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5620] = 2,
    ACTIONS(819), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5628] = 2,
    ACTIONS(821), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5636] = 2,
    ACTIONS(823), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5644] = 2,
    ACTIONS(825), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5652] = 2,
    ACTIONS(827), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5660] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(829), 1,
      aux_sym_text_block_token1,
  [5670] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      sym__unescaped_single_string_fragment,
  [5680] = 2,
    ACTIONS(833), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5688] = 2,
    ACTIONS(835), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5696] = 2,
    ACTIONS(837), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5704] = 2,
    ACTIONS(839), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5712] = 2,
    ACTIONS(841), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5720] = 2,
    ACTIONS(843), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 202,
  [SMALL_STATE(5)] = 283,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 445,
  [SMALL_STATE(8)] = 493,
  [SMALL_STATE(9)] = 559,
  [SMALL_STATE(10)] = 625,
  [SMALL_STATE(11)] = 691,
  [SMALL_STATE(12)] = 757,
  [SMALL_STATE(13)] = 823,
  [SMALL_STATE(14)] = 889,
  [SMALL_STATE(15)] = 938,
  [SMALL_STATE(16)] = 987,
  [SMALL_STATE(17)] = 1036,
  [SMALL_STATE(18)] = 1081,
  [SMALL_STATE(19)] = 1126,
  [SMALL_STATE(20)] = 1159,
  [SMALL_STATE(21)] = 1204,
  [SMALL_STATE(22)] = 1239,
  [SMALL_STATE(23)] = 1274,
  [SMALL_STATE(24)] = 1314,
  [SMALL_STATE(25)] = 1354,
  [SMALL_STATE(26)] = 1394,
  [SMALL_STATE(27)] = 1434,
  [SMALL_STATE(28)] = 1474,
  [SMALL_STATE(29)] = 1514,
  [SMALL_STATE(30)] = 1545,
  [SMALL_STATE(31)] = 1578,
  [SMALL_STATE(32)] = 1611,
  [SMALL_STATE(33)] = 1638,
  [SMALL_STATE(34)] = 1665,
  [SMALL_STATE(35)] = 1690,
  [SMALL_STATE(36)] = 1735,
  [SMALL_STATE(37)] = 1780,
  [SMALL_STATE(38)] = 1808,
  [SMALL_STATE(39)] = 1852,
  [SMALL_STATE(40)] = 1880,
  [SMALL_STATE(41)] = 1906,
  [SMALL_STATE(42)] = 1948,
  [SMALL_STATE(43)] = 1974,
  [SMALL_STATE(44)] = 2002,
  [SMALL_STATE(45)] = 2044,
  [SMALL_STATE(46)] = 2086,
  [SMALL_STATE(47)] = 2114,
  [SMALL_STATE(48)] = 2151,
  [SMALL_STATE(49)] = 2188,
  [SMALL_STATE(50)] = 2225,
  [SMALL_STATE(51)] = 2264,
  [SMALL_STATE(52)] = 2301,
  [SMALL_STATE(53)] = 2340,
  [SMALL_STATE(54)] = 2377,
  [SMALL_STATE(55)] = 2416,
  [SMALL_STATE(56)] = 2455,
  [SMALL_STATE(57)] = 2494,
  [SMALL_STATE(58)] = 2531,
  [SMALL_STATE(59)] = 2568,
  [SMALL_STATE(60)] = 2607,
  [SMALL_STATE(61)] = 2646,
  [SMALL_STATE(62)] = 2683,
  [SMALL_STATE(63)] = 2720,
  [SMALL_STATE(64)] = 2759,
  [SMALL_STATE(65)] = 2798,
  [SMALL_STATE(66)] = 2836,
  [SMALL_STATE(67)] = 2870,
  [SMALL_STATE(68)] = 2908,
  [SMALL_STATE(69)] = 2946,
  [SMALL_STATE(70)] = 2975,
  [SMALL_STATE(71)] = 3004,
  [SMALL_STATE(72)] = 3033,
  [SMALL_STATE(73)] = 3066,
  [SMALL_STATE(74)] = 3099,
  [SMALL_STATE(75)] = 3117,
  [SMALL_STATE(76)] = 3135,
  [SMALL_STATE(77)] = 3151,
  [SMALL_STATE(78)] = 3167,
  [SMALL_STATE(79)] = 3195,
  [SMALL_STATE(80)] = 3225,
  [SMALL_STATE(81)] = 3241,
  [SMALL_STATE(82)] = 3259,
  [SMALL_STATE(83)] = 3275,
  [SMALL_STATE(84)] = 3303,
  [SMALL_STATE(85)] = 3319,
  [SMALL_STATE(86)] = 3347,
  [SMALL_STATE(87)] = 3375,
  [SMALL_STATE(88)] = 3393,
  [SMALL_STATE(89)] = 3409,
  [SMALL_STATE(90)] = 3439,
  [SMALL_STATE(91)] = 3464,
  [SMALL_STATE(92)] = 3489,
  [SMALL_STATE(93)] = 3514,
  [SMALL_STATE(94)] = 3539,
  [SMALL_STATE(95)] = 3556,
  [SMALL_STATE(96)] = 3571,
  [SMALL_STATE(97)] = 3596,
  [SMALL_STATE(98)] = 3613,
  [SMALL_STATE(99)] = 3640,
  [SMALL_STATE(100)] = 3667,
  [SMALL_STATE(101)] = 3692,
  [SMALL_STATE(102)] = 3711,
  [SMALL_STATE(103)] = 3727,
  [SMALL_STATE(104)] = 3749,
  [SMALL_STATE(105)] = 3773,
  [SMALL_STATE(106)] = 3787,
  [SMALL_STATE(107)] = 3811,
  [SMALL_STATE(108)] = 3833,
  [SMALL_STATE(109)] = 3851,
  [SMALL_STATE(110)] = 3873,
  [SMALL_STATE(111)] = 3891,
  [SMALL_STATE(112)] = 3913,
  [SMALL_STATE(113)] = 3931,
  [SMALL_STATE(114)] = 3955,
  [SMALL_STATE(115)] = 3971,
  [SMALL_STATE(116)] = 3989,
  [SMALL_STATE(117)] = 4006,
  [SMALL_STATE(118)] = 4027,
  [SMALL_STATE(119)] = 4044,
  [SMALL_STATE(120)] = 4065,
  [SMALL_STATE(121)] = 4082,
  [SMALL_STATE(122)] = 4103,
  [SMALL_STATE(123)] = 4124,
  [SMALL_STATE(124)] = 4137,
  [SMALL_STATE(125)] = 4158,
  [SMALL_STATE(126)] = 4179,
  [SMALL_STATE(127)] = 4196,
  [SMALL_STATE(128)] = 4212,
  [SMALL_STATE(129)] = 4232,
  [SMALL_STATE(130)] = 4244,
  [SMALL_STATE(131)] = 4264,
  [SMALL_STATE(132)] = 4284,
  [SMALL_STATE(133)] = 4304,
  [SMALL_STATE(134)] = 4318,
  [SMALL_STATE(135)] = 4334,
  [SMALL_STATE(136)] = 4348,
  [SMALL_STATE(137)] = 4360,
  [SMALL_STATE(138)] = 4380,
  [SMALL_STATE(139)] = 4392,
  [SMALL_STATE(140)] = 4406,
  [SMALL_STATE(141)] = 4418,
  [SMALL_STATE(142)] = 4429,
  [SMALL_STATE(143)] = 4440,
  [SMALL_STATE(144)] = 4455,
  [SMALL_STATE(145)] = 4466,
  [SMALL_STATE(146)] = 4477,
  [SMALL_STATE(147)] = 4494,
  [SMALL_STATE(148)] = 4507,
  [SMALL_STATE(149)] = 4518,
  [SMALL_STATE(150)] = 4535,
  [SMALL_STATE(151)] = 4546,
  [SMALL_STATE(152)] = 4561,
  [SMALL_STATE(153)] = 4578,
  [SMALL_STATE(154)] = 4589,
  [SMALL_STATE(155)] = 4604,
  [SMALL_STATE(156)] = 4615,
  [SMALL_STATE(157)] = 4626,
  [SMALL_STATE(158)] = 4637,
  [SMALL_STATE(159)] = 4652,
  [SMALL_STATE(160)] = 4663,
  [SMALL_STATE(161)] = 4674,
  [SMALL_STATE(162)] = 4689,
  [SMALL_STATE(163)] = 4700,
  [SMALL_STATE(164)] = 4715,
  [SMALL_STATE(165)] = 4726,
  [SMALL_STATE(166)] = 4737,
  [SMALL_STATE(167)] = 4748,
  [SMALL_STATE(168)] = 4763,
  [SMALL_STATE(169)] = 4774,
  [SMALL_STATE(170)] = 4785,
  [SMALL_STATE(171)] = 4796,
  [SMALL_STATE(172)] = 4807,
  [SMALL_STATE(173)] = 4818,
  [SMALL_STATE(174)] = 4829,
  [SMALL_STATE(175)] = 4840,
  [SMALL_STATE(176)] = 4851,
  [SMALL_STATE(177)] = 4862,
  [SMALL_STATE(178)] = 4877,
  [SMALL_STATE(179)] = 4892,
  [SMALL_STATE(180)] = 4903,
  [SMALL_STATE(181)] = 4914,
  [SMALL_STATE(182)] = 4925,
  [SMALL_STATE(183)] = 4940,
  [SMALL_STATE(184)] = 4955,
  [SMALL_STATE(185)] = 4966,
  [SMALL_STATE(186)] = 4977,
  [SMALL_STATE(187)] = 4988,
  [SMALL_STATE(188)] = 5003,
  [SMALL_STATE(189)] = 5014,
  [SMALL_STATE(190)] = 5025,
  [SMALL_STATE(191)] = 5036,
  [SMALL_STATE(192)] = 5047,
  [SMALL_STATE(193)] = 5062,
  [SMALL_STATE(194)] = 5077,
  [SMALL_STATE(195)] = 5088,
  [SMALL_STATE(196)] = 5099,
  [SMALL_STATE(197)] = 5110,
  [SMALL_STATE(198)] = 5121,
  [SMALL_STATE(199)] = 5132,
  [SMALL_STATE(200)] = 5143,
  [SMALL_STATE(201)] = 5155,
  [SMALL_STATE(202)] = 5169,
  [SMALL_STATE(203)] = 5179,
  [SMALL_STATE(204)] = 5189,
  [SMALL_STATE(205)] = 5203,
  [SMALL_STATE(206)] = 5217,
  [SMALL_STATE(207)] = 5229,
  [SMALL_STATE(208)] = 5241,
  [SMALL_STATE(209)] = 5251,
  [SMALL_STATE(210)] = 5263,
  [SMALL_STATE(211)] = 5275,
  [SMALL_STATE(212)] = 5287,
  [SMALL_STATE(213)] = 5297,
  [SMALL_STATE(214)] = 5307,
  [SMALL_STATE(215)] = 5317,
  [SMALL_STATE(216)] = 5327,
  [SMALL_STATE(217)] = 5339,
  [SMALL_STATE(218)] = 5349,
  [SMALL_STATE(219)] = 5359,
  [SMALL_STATE(220)] = 5369,
  [SMALL_STATE(221)] = 5379,
  [SMALL_STATE(222)] = 5391,
  [SMALL_STATE(223)] = 5401,
  [SMALL_STATE(224)] = 5411,
  [SMALL_STATE(225)] = 5423,
  [SMALL_STATE(226)] = 5434,
  [SMALL_STATE(227)] = 5445,
  [SMALL_STATE(228)] = 5456,
  [SMALL_STATE(229)] = 5467,
  [SMALL_STATE(230)] = 5478,
  [SMALL_STATE(231)] = 5489,
  [SMALL_STATE(232)] = 5500,
  [SMALL_STATE(233)] = 5511,
  [SMALL_STATE(234)] = 5522,
  [SMALL_STATE(235)] = 5533,
  [SMALL_STATE(236)] = 5544,
  [SMALL_STATE(237)] = 5555,
  [SMALL_STATE(238)] = 5568,
  [SMALL_STATE(239)] = 5579,
  [SMALL_STATE(240)] = 5590,
  [SMALL_STATE(241)] = 5601,
  [SMALL_STATE(242)] = 5612,
  [SMALL_STATE(243)] = 5620,
  [SMALL_STATE(244)] = 5628,
  [SMALL_STATE(245)] = 5636,
  [SMALL_STATE(246)] = 5644,
  [SMALL_STATE(247)] = 5652,
  [SMALL_STATE(248)] = 5660,
  [SMALL_STATE(249)] = 5670,
  [SMALL_STATE(250)] = 5680,
  [SMALL_STATE(251)] = 5688,
  [SMALL_STATE(252)] = 5696,
  [SMALL_STATE(253)] = 5704,
  [SMALL_STATE(254)] = 5712,
  [SMALL_STATE(255)] = 5720,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(39),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(254),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(80),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(225),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(204),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(249),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(146),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(39),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT_REPEAT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(46),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(80),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(249),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(146),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2), SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(251),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(246),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(251),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT_REPEAT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(254),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(204),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT_REPEAT(20),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(171),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2), SHIFT(160),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(199),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2), SHIFT(194),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(189),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2), SHIFT(169),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(40),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(46),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(80),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(249),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(146),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(46),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT_REPEAT(41),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(42),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(46),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(80),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(249),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(146),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(46),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT_REPEAT(63),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(123),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(204),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT_REPEAT(70),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(46),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(80),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(249),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(146),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2), SHIFT_REPEAT(46),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_connection_repeat1, 2), SHIFT_REPEAT(73),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(103),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(103),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(202),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(109),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(109),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(198),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2), SHIFT(141),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2), SHIFT(203),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(117),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(117),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(119),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(119),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(121),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(121),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(234),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT_REPEAT(131),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(148),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2), SHIFT(173),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(137),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(137),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, .production_id = 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, .production_id = 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(152),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, .production_id = 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 5),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(197),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, .production_id = 4),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2), SHIFT(186),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [821] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, .production_id = 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
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

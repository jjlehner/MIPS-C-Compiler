#ifndef GUARD_TOKENS_HPP
#define GUARD_TOKENS_HPP

enum class Token
{
	T_IDENTIFIER,
	T_CONSTANT,
	T_STRING_LITERAL,
	T_SIZEOF,
	T_PTR_OP,
	T_INC_OP,
	T_DEC_OP,
	T_LEFT_OP,
	T_RIGHT_OP,
	T_LE_OP,
	T_GE_OP,
	T_EQ_OP,
	T_NE_OP,
	T_AND_OP,
	T_OR_OP,
	T_MUL_ASSIGN,
	T_DIV_ASSIGN,
	T_MOD_ASSIGN,
	T_ADD_ASSIGN,
	T_SUB_ASSIGN,
	T_LEFT_ASSIGN,
	T_RIGHT_ASSIGN,
	T_AND_ASSIGN,
	T_XOR_ASSIGN,
	T_OR_ASSIGN,
	T_TYPE_NAME,
	T_TYPEDEF,
	T_EXTERN,
	T_STATIC,
	T_AUTO,
	T_REGISTER,
	T_INLINE,
	T_RESTRICT,
	T_CHAR,
	T_SHORT,
	T_INT,
	T_LONG,
	T_SIGNED,
	T_UNSIGNED,
	T_FLOAT,
	T_DOUBLE,
	T_CONST,
	T_VOLATILE,
	T_VOID,
	T_BOOL,
	T_COMPLEX,
	T_IMAGINARY,
	T_STRUCT,
	T_UNION,
	T_ENUM,
	T_ELLIPSIS,
	T_CASE,
	T_DEFAULT,
	T_IF,
	T_ELSE,
	T_SWITCH,
	T_WHILE,
	T_DO,
	T_FOR,
	T_GOTO,
	T_CONTINUE,
	T_BREAK,
	T_RETURN,
	T_LEFT_BRACKET,
	T_RIGHT_BRACKET,
	T_LEFT_SQUARE_BRACKET,
	T_RIGHT_SQUARE_BRACKET,
	T_FULL_STOP,
	T_LEFT_CURLY_BRACKET,
	T_RIGHT_CURLY_BRACKET,
	T_COMMA,
	T_AMPERSAND,
	T_STAR,
	T_PLUS,
	T_MINUS,
	T_TILDE,
	T_EXCLAMATION_MARK,
	T_FORWARD_SLASH,
	T_PERCENT,
	T_LEFT_ANGLE_BRACKET,
	T_RIGHT_ANGLE_BRACKET,
	T_CARET,
	T_PIPE,
	T_QUESTION_MARK,
	T_COLON,
	T_EQUAL_SIGN,
	T_SEMICOLON,
	// Nonterminals
	primary_expression,
	postfix_expression,
	argument_expression_list,
	unary_expression,
	unary_operator,
	cast_expression,
	multiplicative_expression,
	additive_expression,
	shift_expression,
	relational_expression,
	equality_expression,
	and_expression,
	exclusive_or_expression,
	inclusive_or_expression,
	logical_and_expression,
	logical_or_expression,
	conditional_expression,
	assignment_expression,
	assignment_operator,
	expression,
	constant_expression,
	declaration,
	declaration_specifiers,
	init_declarator_list,
	init_declarator,
	storage_class_specifier,
	type_specifier,
	struct_or_union_specifier,
	struct_or_union,
	struct_declaration_list,
	struct_declaration,
	specifier_qualifier_list,
	struct_declarator_list,
	struct_declarator,
	enum_specifier,
	enumerator_list,
	enumerator,
	type_qualifier,
	function_specifier,
	declarator,
	direct_declarator,
	pointer,
	type_qualifier_list,
	parameter_type_list,
	parameter_list,
	parameter_declaration,
	identifier_list,
	type_name,
	abstract_declarator,
	direct_abstract_declarator,
	initializer,
	initializer_list,
	designation,
	designator_list,
	designator,
	statement,
	labeled_statement,
	compound_statement,
	block_item_list,
	block_item,
	expression_statement,
	selection_statement,
	iteration_statement,
	jump_statement,
	translation_unit,
	external_declaration,
	function_definition,
	declaration_list
};

#endif
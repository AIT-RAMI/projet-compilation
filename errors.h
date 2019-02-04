#ifndef ERRORS_H
#define ERRORS_H

#include "global.h"

#define ERRORS_NUMBER	3


typedef enum _error_codes {
	AFFECTATION_SYMBOL_EXPECTED_ERROR, //0
	ASSIGNEMENT_OR_PROCEDURE_CALL_END_STATEMENT_ERROR,
	BEGIN_EXPECTED_ERROR,
	CHARACTER_EXPECTED_ERROR,
	CLOSE_PARENTHESIS_TOKEN_ERROR,
	CONDITION_ERROR, //5
	DECLARATIVE_PART_ERROR,
	DEUXPOINTS_ERROR,
	DEUXPOINTS_EXPECTED_ERROR,
	DPUN_ERROR,
	END_EXPECTED_ERROR, //10
	EXPRESSION_ERROR,
	FACTOR_ERROR,
	HANDLED_STATEMENT_OF_SEQUENCE_ERROR,
	IDENTIFIER_EXPECTED_ERROR,
	IS_EXPECTED_ERROR, //15
	SEMICOLON_EXPECTED_ERROR,
	SYMBOL_NOT_FOUND_ERROR,
	IF_EXPECTED_ERROR,
	MODE_ERROR,
	PARAMETER_PROFILE_ERROR, // 20
	PARAMETER_SPECIFICATION_ERROR,
	PF_EXPECTED_ERROR,
	PO_EXPECTED_ERROR,
	PROCEDURE_EXPECTED_ERROR,
	RELATION_EXPECTED_ERROR, // 25
	SEQUENCE_STATEMENT_ERROR,
	SIMPLE_EXPRESSION_ERROR,
	SINGLE_QUOTE_EXPECTED_ERROR,
	SUBTYPE_INDICATION_ERROR,
	TERM_ERROR, // 30
	THEN_EXPECTED_ERROR,
	UNRECOGNIZED_CHARACTER_ERROR,
	DEUXPOINT_EXPECTED_ERROR,
	SEMICOLON_ERROR,
	SYMBOL_EXISTS_ERROR, // 35

	LOOP_EXPECTED_ERROR,
	SYMBOL_DONT_EXIST,
	ASSIGNEMENT_TO_CONST_ERROR,
	INTEGER_EXPECTED_ERROR,
	NEXT_EXPECTED_ERROR,
	IN_EXPECTED_ERROR,
	POINT_POINT_EXPECTED_ERROR,
	OF_EXPECTED_ERROR,
} error_code;


void raise_error(error_code);

#endif

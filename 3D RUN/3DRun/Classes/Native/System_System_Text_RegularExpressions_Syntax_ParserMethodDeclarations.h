﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t1462;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.RegularExpression
struct RegularExpression_t1468;
// System.Collections.Hashtable
struct Hashtable_t1236;
// System.Text.RegularExpressions.Syntax.Group
struct Group_t1467;
// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t1473;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1465;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1475;
// System.Collections.ArrayList
struct ArrayList_t1171;
// System.ArgumentException
struct ArgumentException_t903;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RegexOptions.h"
#include "System_System_Text_RegularExpressions_Category.h"

// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
extern "C" void Parser__ctor_m7140 (Parser_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
extern "C" int32_t Parser_ParseDecimal_m7141 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern "C" int32_t Parser_ParseOctal_m7142 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
extern "C" int32_t Parser_ParseHex_m7143 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___digits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseNumber_m7144 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___b, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
extern "C" String_t* Parser_ParseName_m7145 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" RegularExpression_t1468 * Parser_ParseRegularExpression_m7146 (Parser_t1462 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
extern "C" int32_t Parser_GetMapping_m7147 (Parser_t1462 * __this, Hashtable_t1236 * ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
extern "C" void Parser_ParseGroup_m7148 (Parser_t1462 * __this, Group_t1467 * ___group, int32_t ___options, Assertion_t1473 * ___assertion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
extern "C" Expression_t1465 * Parser_ParseGroupingConstruct_m7149 (Parser_t1462 * __this, int32_t* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
extern "C" bool Parser_ParseAssertionType_m7150 (Parser_t1462 * __this, ExpressionAssertion_t1475 * ___assertion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
extern "C" void Parser_ParseOptions_m7151 (Parser_t1462 * __this, int32_t* ___options, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern "C" Expression_t1465 * Parser_ParseCharacterClass_m7152 (Parser_t1462 * __this, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_ParseRepetitionBounds_m7153 (Parser_t1462 * __this, int32_t* ___min, int32_t* ___max, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
extern "C" uint16_t Parser_ParseUnicodeCategory_m7154 (Parser_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
extern "C" Expression_t1465 * Parser_ParseSpecial_m7155 (Parser_t1462 * __this, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
extern "C" int32_t Parser_ParseEscape_m7156 (Parser_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern "C" String_t* Parser_ParseName_m7157 (Parser_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
extern "C" bool Parser_IsNameChar_m7158 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseNumber_m7159 (Parser_t1462 * __this, int32_t ___b, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern "C" int32_t Parser_ParseDigit_m7160 (Object_t * __this /* static, unused */, uint16_t ___c, int32_t ___b, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern "C" void Parser_ConsumeWhitespace_m7161 (Parser_t1462 * __this, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern "C" void Parser_ResolveReferences_m7162 (Parser_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
extern "C" void Parser_HandleExplicitNumericGroups_m7163 (Parser_t1462 * __this, ArrayList_t1171 * ___explicit_numeric_groups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsIgnoreCase_m7164 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsMultiline_m7165 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsExplicitCapture_m7166 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsSingleline_m7167 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsIgnorePatternWhitespace_m7168 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern "C" bool Parser_IsECMAScript_m7169 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern "C" ArgumentException_t903 * Parser_NewParseException_m7170 (Parser_t1462 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;

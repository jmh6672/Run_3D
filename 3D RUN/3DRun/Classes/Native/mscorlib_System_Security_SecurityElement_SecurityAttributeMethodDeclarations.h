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

// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t2021;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityElement/SecurityAttribute::.ctor(System.String,System.String)
extern "C" void SecurityAttribute__ctor_m11325 (SecurityAttribute_t2021 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement/SecurityAttribute::get_Name()
extern "C" String_t* SecurityAttribute_get_Name_m11326 (SecurityAttribute_t2021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement/SecurityAttribute::get_Value()
extern "C" String_t* SecurityAttribute_get_Value_m11327 (SecurityAttribute_t2021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
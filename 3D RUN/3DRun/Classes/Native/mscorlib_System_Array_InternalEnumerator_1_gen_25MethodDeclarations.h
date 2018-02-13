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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16762_gshared (InternalEnumerator_1_t2583 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16762(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2583 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16762_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16763_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16763(__this, method) (( void (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16763_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16764_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16764(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16764_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16765_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16765(__this, method) (( void (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16765_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16766_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16766(__this, method) (( bool (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16766_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2582  InternalEnumerator_1_get_Current_m16767_gshared (InternalEnumerator_1_t2583 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16767(__this, method) (( KeyValuePair_2_t2582  (*) (InternalEnumerator_1_t2583 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16767_gshared)(__this, method)
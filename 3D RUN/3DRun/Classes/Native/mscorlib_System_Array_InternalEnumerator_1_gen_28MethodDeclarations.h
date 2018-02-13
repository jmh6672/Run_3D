#pragma once

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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17125_gshared (InternalEnumerator_1_t2613 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17125(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2613 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17125_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17126_gshared (InternalEnumerator_1_t2613 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17126(__this, method) (( void (*) (InternalEnumerator_1_t2613 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17126_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17127_gshared (InternalEnumerator_1_t2613 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17127(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2613 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17127_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17128_gshared (InternalEnumerator_1_t2613 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17128(__this, method) (( void (*) (InternalEnumerator_1_t2613 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17128_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17129_gshared (InternalEnumerator_1_t2613 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17129(__this, method) (( bool (*) (InternalEnumerator_1_t2613 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17129_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t2612  InternalEnumerator_1_get_Current_m17130_gshared (InternalEnumerator_1_t2613 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17130(__this, method) (( KeyValuePair_2_t2612  (*) (InternalEnumerator_1_t2613 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17130_gshared)(__this, method)

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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21408_gshared (InternalEnumerator_1_t2954 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m21408(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2954 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m21408_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21409_gshared (InternalEnumerator_1_t2954 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21409(__this, method) (( void (*) (InternalEnumerator_1_t2954 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21409_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21410_gshared (InternalEnumerator_1_t2954 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21410(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2954 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21410_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21411_gshared (InternalEnumerator_1_t2954 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21411(__this, method) (( void (*) (InternalEnumerator_1_t2954 *, const MethodInfo*))InternalEnumerator_1_Dispose_m21411_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21412_gshared (InternalEnumerator_1_t2954 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21412(__this, method) (( bool (*) (InternalEnumerator_1_t2954 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m21412_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t2953  InternalEnumerator_1_get_Current_m21413_gshared (InternalEnumerator_1_t2954 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21413(__this, method) (( KeyValuePair_2_t2953  (*) (InternalEnumerator_1_t2954 *, const MethodInfo*))InternalEnumerator_1_get_Current_m21413_gshared)(__this, method)

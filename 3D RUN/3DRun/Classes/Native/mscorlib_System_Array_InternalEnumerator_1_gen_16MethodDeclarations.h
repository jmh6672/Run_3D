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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14382_gshared (InternalEnumerator_1_t2382 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14382(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2382 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14382_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14383_gshared (InternalEnumerator_1_t2382 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14383(__this, method) (( void (*) (InternalEnumerator_1_t2382 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14383_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14384_gshared (InternalEnumerator_1_t2382 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14384(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2382 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14384_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14385_gshared (InternalEnumerator_1_t2382 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14385(__this, method) (( void (*) (InternalEnumerator_1_t2382 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14385_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14386_gshared (InternalEnumerator_1_t2382 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14386(__this, method) (( bool (*) (InternalEnumerator_1_t2382 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14386_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
extern "C" IntPtr_t InternalEnumerator_1_get_Current_m14387_gshared (InternalEnumerator_1_t2382 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14387(__this, method) (( IntPtr_t (*) (InternalEnumerator_1_t2382 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14387_gshared)(__this, method)

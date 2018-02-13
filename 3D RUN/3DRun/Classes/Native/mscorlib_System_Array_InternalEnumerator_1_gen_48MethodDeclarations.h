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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48.h"
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20583_gshared (InternalEnumerator_1_t2884 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20583(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2884 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20583_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20584_gshared (InternalEnumerator_1_t2884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20584(__this, method) (( void (*) (InternalEnumerator_1_t2884 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20584_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20585_gshared (InternalEnumerator_1_t2884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20585(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2884 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20585_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20586_gshared (InternalEnumerator_1_t2884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20586(__this, method) (( void (*) (InternalEnumerator_1_t2884 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20586_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20587_gshared (InternalEnumerator_1_t2884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20587(__this, method) (( bool (*) (InternalEnumerator_1_t2884 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20587_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern "C" Keyframe_t1013  InternalEnumerator_1_get_Current_m20588_gshared (InternalEnumerator_1_t2884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20588(__this, method) (( Keyframe_t1013  (*) (InternalEnumerator_1_t2884 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20588_gshared)(__this, method)

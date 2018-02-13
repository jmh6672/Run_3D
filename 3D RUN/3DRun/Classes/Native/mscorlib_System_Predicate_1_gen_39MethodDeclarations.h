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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2830;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20153_gshared (Predicate_1_t2830 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20153(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2830 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20153_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20154_gshared (Predicate_1_t2830 * __this, Vector4_t815  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20154(__this, ___obj, method) (( bool (*) (Predicate_1_t2830 *, Vector4_t815 , const MethodInfo*))Predicate_1_Invoke_m20154_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20155_gshared (Predicate_1_t2830 * __this, Vector4_t815  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20155(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2830 *, Vector4_t815 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20155_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20156_gshared (Predicate_1_t2830 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20156(__this, ___result, method) (( bool (*) (Predicate_1_t2830 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20156_gshared)(__this, ___result, method)

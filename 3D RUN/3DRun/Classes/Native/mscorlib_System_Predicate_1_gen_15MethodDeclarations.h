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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2545;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16198_gshared (Predicate_1_t2545 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16198(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2545 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16198_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16199_gshared (Predicate_1_t2545 * __this, RaycastResult_t633  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16199(__this, ___obj, method) (( bool (*) (Predicate_1_t2545 *, RaycastResult_t633 , const MethodInfo*))Predicate_1_Invoke_m16199_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16200_gshared (Predicate_1_t2545 * __this, RaycastResult_t633  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16200(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2545 *, RaycastResult_t633 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16200_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16201_gshared (Predicate_1_t2545 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16201(__this, ___result, method) (( bool (*) (Predicate_1_t2545 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16201_gshared)(__this, ___result, method)

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

// System.Action`1<UnityEngine.Vector4>
struct Action_1_t2831;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Action`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m20157_gshared (Action_1_t2831 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m20157(__this, ___object, ___method, method) (( void (*) (Action_1_t2831 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m20157_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Vector4>::Invoke(T)
extern "C" void Action_1_Invoke_m20158_gshared (Action_1_t2831 * __this, Vector4_t815  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m20158(__this, ___obj, method) (( void (*) (Action_1_t2831 *, Vector4_t815 , const MethodInfo*))Action_1_Invoke_m20158_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m20159_gshared (Action_1_t2831 * __this, Vector4_t815  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m20159(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2831 *, Vector4_t815 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m20159_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m20160_gshared (Action_1_t2831 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m20160(__this, ___result, method) (( void (*) (Action_1_t2831 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m20160_gshared)(__this, ___result, method)

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

// System.Action`1<UnityEngine.UIVertex>
struct Action_1_t2680;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Action`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m18010_gshared (Action_1_t2680 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m18010(__this, ___object, ___method, method) (( void (*) (Action_1_t2680 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m18010_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" void Action_1_Invoke_m18011_gshared (Action_1_t2680 * __this, UIVertex_t737  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m18011(__this, ___obj, method) (( void (*) (Action_1_t2680 *, UIVertex_t737 , const MethodInfo*))Action_1_Invoke_m18011_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m18012_gshared (Action_1_t2680 * __this, UIVertex_t737  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m18012(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2680 *, UIVertex_t737 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m18012_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m18013_gshared (Action_1_t2680 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m18013(__this, ___result, method) (( void (*) (Action_1_t2680 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m18013_gshared)(__this, ___result, method)

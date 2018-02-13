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

// System.Action`1<UnityEngine.UILineInfo>
struct Action_1_t2902;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Action`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m20879_gshared (Action_1_t2902 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m20879(__this, ___object, ___method, method) (( void (*) (Action_1_t2902 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m20879_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m20880_gshared (Action_1_t2902 * __this, UILineInfo_t888  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m20880(__this, ___obj, method) (( void (*) (Action_1_t2902 *, UILineInfo_t888 , const MethodInfo*))Action_1_Invoke_m20880_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m20881_gshared (Action_1_t2902 * __this, UILineInfo_t888  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m20881(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2902 *, UILineInfo_t888 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m20881_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m20882_gshared (Action_1_t2902 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m20882(__this, ___result, method) (( void (*) (Action_1_t2902 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m20882_gshared)(__this, ___result, method)

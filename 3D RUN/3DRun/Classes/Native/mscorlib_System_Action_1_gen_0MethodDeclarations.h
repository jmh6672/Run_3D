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

// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t207;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_UIStatus.h"

// System.Void System.Action`1<GooglePlayGames.BasicApi.UIStatus>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m12894_gshared (Action_1_t207 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m12894(__this, ___object, ___method, method) (( void (*) (Action_1_t207 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m12894_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.UIStatus>::Invoke(T)
extern "C" void Action_1_Invoke_m1919_gshared (Action_1_t207 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1919(__this, ___obj, method) (( void (*) (Action_1_t207 *, int32_t, const MethodInfo*))Action_1_Invoke_m1919_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<GooglePlayGames.BasicApi.UIStatus>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m12895_gshared (Action_1_t207 * __this, int32_t ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m12895(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t207 *, int32_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m12895_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.UIStatus>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m12896_gshared (Action_1_t207 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m12896(__this, ___result, method) (( void (*) (Action_1_t207 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m12896_gshared)(__this, ___result, method)

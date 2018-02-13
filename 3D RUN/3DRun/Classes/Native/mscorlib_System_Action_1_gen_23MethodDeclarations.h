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

// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>
struct Action_1_t477;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"

// System.Void System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m2156_gshared (Action_1_t477 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m2156(__this, ___object, ___method, method) (( void (*) (Action_1_t477 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2156_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>::Invoke(T)
extern "C" void Action_1_Invoke_m2279_gshared (Action_1_t477 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2279(__this, ___obj, method) (( void (*) (Action_1_t477 *, int32_t, const MethodInfo*))Action_1_Invoke_m2279_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m15002_gshared (Action_1_t477 * __this, int32_t ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m15002(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t477 *, int32_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m15002_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m15003_gshared (Action_1_t477 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m15003(__this, ___result, method) (( void (*) (Action_1_t477 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m15003_gshared)(__this, ___result, method)

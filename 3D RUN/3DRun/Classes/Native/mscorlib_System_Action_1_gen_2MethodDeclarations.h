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

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_t429;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Connection.h"

// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m13737_gshared (Action_1_t429 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m13737(__this, ___object, ___method, method) (( void (*) (Action_1_t429 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m13737_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::Invoke(T)
extern "C" void Action_1_Invoke_m13738_gshared (Action_1_t429 * __this, ConnectionRequest_t24  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m13738(__this, ___obj, method) (( void (*) (Action_1_t429 *, ConnectionRequest_t24 , const MethodInfo*))Action_1_Invoke_m13738_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m13739_gshared (Action_1_t429 * __this, ConnectionRequest_t24  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m13739(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t429 *, ConnectionRequest_t24 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m13739_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m13740_gshared (Action_1_t429 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m13740(__this, ___result, method) (( void (*) (Action_1_t429 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m13740_gshared)(__this, ___result, method)

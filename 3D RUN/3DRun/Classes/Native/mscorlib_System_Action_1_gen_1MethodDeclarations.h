﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t428;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_Advertisin.h"

// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m13734_gshared (Action_1_t428 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m13734(__this, ___object, ___method, method) (( void (*) (Action_1_t428 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m13734_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
extern "C" void Action_1_Invoke_m1947_gshared (Action_1_t428 * __this, AdvertisingResult_t23  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1947(__this, ___obj, method) (( void (*) (Action_1_t428 *, AdvertisingResult_t23 , const MethodInfo*))Action_1_Invoke_m1947_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m13735_gshared (Action_1_t428 * __this, AdvertisingResult_t23  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m13735(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t428 *, AdvertisingResult_t23 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m13735_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m13736_gshared (Action_1_t428 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m13736(__this, ___result, method) (( void (*) (Action_1_t428 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m13736_gshared)(__this, ___result, method)

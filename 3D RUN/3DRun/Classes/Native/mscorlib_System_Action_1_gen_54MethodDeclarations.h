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

// System.Action`1<UnityEngine.EventSystems.RaycastResult>
struct Action_1_t2546;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m16202_gshared (Action_1_t2546 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m16202(__this, ___object, ___method, method) (( void (*) (Action_1_t2546 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m16202_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" void Action_1_Invoke_m16203_gshared (Action_1_t2546 * __this, RaycastResult_t633  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m16203(__this, ___obj, method) (( void (*) (Action_1_t2546 *, RaycastResult_t633 , const MethodInfo*))Action_1_Invoke_m16203_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m16204_gshared (Action_1_t2546 * __this, RaycastResult_t633  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m16204(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2546 *, RaycastResult_t633 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m16204_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m16205_gshared (Action_1_t2546 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m16205(__this, ___result, method) (( void (*) (Action_1_t2546 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m16205_gshared)(__this, ___result, method)
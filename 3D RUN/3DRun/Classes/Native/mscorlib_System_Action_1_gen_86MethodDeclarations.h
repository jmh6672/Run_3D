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

// System.Action`1<System.Reflection.CustomAttributeNamedArgument>
struct Action_1_t3033;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m22121_gshared (Action_1_t3033 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m22121(__this, ___object, ___method, method) (( void (*) (Action_1_t3033 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m22121_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" void Action_1_Invoke_m22122_gshared (Action_1_t3033 * __this, CustomAttributeNamedArgument_t1766  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m22122(__this, ___obj, method) (( void (*) (Action_1_t3033 *, CustomAttributeNamedArgument_t1766 , const MethodInfo*))Action_1_Invoke_m22122_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m22123_gshared (Action_1_t3033 * __this, CustomAttributeNamedArgument_t1766  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m22123(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3033 *, CustomAttributeNamedArgument_t1766 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m22123_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m22124_gshared (Action_1_t3033 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m22124(__this, ___result, method) (( void (*) (Action_1_t3033 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m22124_gshared)(__this, ___result, method)

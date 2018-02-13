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

// System.Action`1<System.Reflection.CustomAttributeTypedArgument>
struct Action_1_t3021;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m21949_gshared (Action_1_t3021 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m21949(__this, ___object, ___method, method) (( void (*) (Action_1_t3021 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m21949_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" void Action_1_Invoke_m21950_gshared (Action_1_t3021 * __this, CustomAttributeTypedArgument_t1767  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m21950(__this, ___obj, method) (( void (*) (Action_1_t3021 *, CustomAttributeTypedArgument_t1767 , const MethodInfo*))Action_1_Invoke_m21950_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m21951_gshared (Action_1_t3021 * __this, CustomAttributeTypedArgument_t1767  ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m21951(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3021 *, CustomAttributeTypedArgument_t1767 , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m21951_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m21952_gshared (Action_1_t3021 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m21952(__this, ___result, method) (( void (*) (Action_1_t3021 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m21952_gshared)(__this, ___result, method)

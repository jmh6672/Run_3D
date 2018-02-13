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

// System.Action`2<System.Object,System.Object>
struct Action_2_t2376;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_2__ctor_m14366_gshared (Action_2_t2376 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m14366(__this, ___object, ___method, method) (( void (*) (Action_2_t2376 *, Object_t *, IntPtr_t, const MethodInfo*))Action_2__ctor_m14366_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void Action_2_Invoke_m14367_gshared (Action_2_t2376 * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m14367(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t2376 *, Object_t *, Object_t *, const MethodInfo*))Action_2_Invoke_m14367_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_2_BeginInvoke_m14368_gshared (Action_2_t2376 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m14368(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t2376 *, Object_t *, Object_t *, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_2_BeginInvoke_m14368_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_2_EndInvoke_m14369_gshared (Action_2_t2376 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m14369(__this, ___result, method) (( void (*) (Action_2_t2376 *, Object_t *, const MethodInfo*))Action_2_EndInvoke_m14369_gshared)(__this, ___result, method)

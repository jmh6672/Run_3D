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

// System.Action`2<System.Object,System.Boolean>
struct Action_2_t514;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_2__ctor_m14388_gshared (Action_2_t514 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m14388(__this, ___object, ___method, method) (( void (*) (Action_2_t514 *, Object_t *, IntPtr_t, const MethodInfo*))Action_2__ctor_m14388_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C" void Action_2_Invoke_m14389_gshared (Action_2_t514 * __this, Object_t * ___arg1, bool ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m14389(__this, ___arg1, ___arg2, method) (( void (*) (Action_2_t514 *, Object_t *, bool, const MethodInfo*))Action_2_Invoke_m14389_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_2_BeginInvoke_m14391_gshared (Action_2_t514 * __this, Object_t * ___arg1, bool ___arg2, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m14391(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Action_2_t514 *, Object_t *, bool, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_2_BeginInvoke_m14391_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_2_EndInvoke_m14393_gshared (Action_2_t514 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m14393(__this, ___result, method) (( void (*) (Action_2_t514 *, Object_t *, const MethodInfo*))Action_2_EndInvoke_m14393_gshared)(__this, ___result, method)

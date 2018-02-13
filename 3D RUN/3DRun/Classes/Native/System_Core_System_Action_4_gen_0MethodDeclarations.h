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

// System.Action`4<System.Object,System.Object,System.Object,System.Boolean>
struct Action_4_t2413;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_4__ctor_m14671_gshared (Action_4_t2413 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_4__ctor_m14671(__this, ___object, ___method, method) (( void (*) (Action_4_t2413 *, Object_t *, IntPtr_t, const MethodInfo*))Action_4__ctor_m14671_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::Invoke(T1,T2,T3,T4)
extern "C" void Action_4_Invoke_m14672_gshared (Action_4_t2413 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, bool ___arg4, const MethodInfo* method);
#define Action_4_Invoke_m14672(__this, ___arg1, ___arg2, ___arg3, ___arg4, method) (( void (*) (Action_4_t2413 *, Object_t *, Object_t *, Object_t *, bool, const MethodInfo*))Action_4_Invoke_m14672_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, method)
// System.IAsyncResult System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_4_BeginInvoke_m14674_gshared (Action_4_t2413 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, bool ___arg4, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_4_BeginInvoke_m14674(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method) (( Object_t * (*) (Action_4_t2413 *, Object_t *, Object_t *, Object_t *, bool, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_4_BeginInvoke_m14674_gshared)(__this, ___arg1, ___arg2, ___arg3, ___arg4, ___callback, ___object, method)
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void Action_4_EndInvoke_m14676_gshared (Action_4_t2413 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_4_EndInvoke_m14676(__this, ___result, method) (( void (*) (Action_4_t2413 *, Object_t *, const MethodInfo*))Action_4_EndInvoke_m14676_gshared)(__this, ___result, method)

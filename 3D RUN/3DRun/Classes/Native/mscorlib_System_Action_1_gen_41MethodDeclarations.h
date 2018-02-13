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

// System.Action`1<System.IntPtr>
struct Action_1_t538;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m2264_gshared (Action_1_t538 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m2264(__this, ___object, ___method, method) (( void (*) (Action_1_t538 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2264_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
extern "C" void Action_1_Invoke_m2192_gshared (Action_1_t538 * __this, IntPtr_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m2192(__this, ___obj, method) (( void (*) (Action_1_t538 *, IntPtr_t, const MethodInfo*))Action_1_Invoke_m2192_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.IntPtr>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m15209_gshared (Action_1_t538 * __this, IntPtr_t ___obj, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m15209(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t538 *, IntPtr_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m15209_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m15210_gshared (Action_1_t538 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m15210(__this, ___result, method) (( void (*) (Action_1_t538 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m15210_gshared)(__this, ___result, method)

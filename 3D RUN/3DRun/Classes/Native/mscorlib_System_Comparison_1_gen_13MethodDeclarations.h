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

// System.Comparison`1<System.IntPtr>
struct Comparison_1_t2497;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15616_gshared (Comparison_1_t2497 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15616(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2497 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15616_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.IntPtr>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15617_gshared (Comparison_1_t2497 * __this, IntPtr_t ___x, IntPtr_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15617(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2497 *, IntPtr_t, IntPtr_t, const MethodInfo*))Comparison_1_Invoke_m15617_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.IntPtr>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15618_gshared (Comparison_1_t2497 * __this, IntPtr_t ___x, IntPtr_t ___y, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15618(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2497 *, IntPtr_t, IntPtr_t, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15618_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15619_gshared (Comparison_1_t2497 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15619(__this, ___result, method) (( int32_t (*) (Comparison_1_t2497 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15619_gshared)(__this, ___result, method)

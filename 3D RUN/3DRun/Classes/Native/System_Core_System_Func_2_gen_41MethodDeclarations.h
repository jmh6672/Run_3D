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

// System.Func`2<System.Object,System.IntPtr>
struct Func_2_t591;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m15447_gshared (Func_2_t591 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m15447(__this, ___object, ___method, method) (( void (*) (Func_2_t591 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m15447_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.IntPtr>::Invoke(T)
extern "C" IntPtr_t Func_2_Invoke_m15449_gshared (Func_2_t591 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m15449(__this, ___arg1, method) (( IntPtr_t (*) (Func_2_t591 *, Object_t *, const MethodInfo*))Func_2_Invoke_m15449_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.IntPtr>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m15451_gshared (Func_2_t591 * __this, Object_t * ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m15451(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t591 *, Object_t *, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m15451_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C" IntPtr_t Func_2_EndInvoke_m15453_gshared (Func_2_t591 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m15453(__this, ___result, method) (( IntPtr_t (*) (Func_2_t591 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m15453_gshared)(__this, ___result, method)

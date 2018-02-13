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

// System.Func`2<System.Object,System.Single>
struct Func_2_t2778;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m19414_gshared (Func_2_t2778 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m19414(__this, ___object, ___method, method) (( void (*) (Func_2_t2778 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m19414_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m19415_gshared (Func_2_t2778 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m19415(__this, ___arg1, method) (( float (*) (Func_2_t2778 *, Object_t *, const MethodInfo*))Func_2_Invoke_m19415_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m19417_gshared (Func_2_t2778 * __this, Object_t * ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m19417(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2778 *, Object_t *, AsyncCallback_t74 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m19417_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m19419_gshared (Func_2_t2778 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m19419(__this, ___result, method) (( float (*) (Func_2_t2778 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m19419_gshared)(__this, ___result, method)

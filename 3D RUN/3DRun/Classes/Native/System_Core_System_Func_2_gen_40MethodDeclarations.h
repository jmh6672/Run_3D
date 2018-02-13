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

// System.Func`2<System.UIntPtr,System.Object>
struct Func_2_t561;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void System.Func`2<System.UIntPtr,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m15216_gshared (Func_2_t561 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m15216(__this, ___object, ___method, method) (( void (*) (Func_2_t561 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m15216_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UIntPtr,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m15218_gshared (Func_2_t561 * __this, UIntPtr_t  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m15218(__this, ___arg1, method) (( Object_t * (*) (Func_2_t561 *, UIntPtr_t , const MethodInfo*))Func_2_Invoke_m15218_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UIntPtr,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m15220_gshared (Func_2_t561 * __this, UIntPtr_t  ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m15220(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t561 *, UIntPtr_t , AsyncCallback_t74 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m15220_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UIntPtr,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m15222_gshared (Func_2_t561 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m15222(__this, ___result, method) (( Object_t * (*) (Func_2_t561 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m15222_gshared)(__this, ___result, method)

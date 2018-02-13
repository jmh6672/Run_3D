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

// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>
struct OutMethod_1_t540;
// System.Object
struct Object_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t443;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C" void OutMethod_1__ctor_m2195_gshared (OutMethod_1_t540 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define OutMethod_1__ctor_m2195(__this, ___object, ___method, method) (( void (*) (OutMethod_1_t540 *, Object_t *, IntPtr_t, const MethodInfo*))OutMethod_1__ctor_m2195_gshared)(__this, ___object, ___method, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::Invoke(T[],System.UIntPtr)
extern "C" UIntPtr_t  OutMethod_1_Invoke_m15254_gshared (OutMethod_1_t540 * __this, IntPtrU5BU5D_t443* ___out_bytes, UIntPtr_t  ___out_size, const MethodInfo* method);
#define OutMethod_1_Invoke_m15254(__this, ___out_bytes, ___out_size, method) (( UIntPtr_t  (*) (OutMethod_1_t540 *, IntPtrU5BU5D_t443*, UIntPtr_t , const MethodInfo*))OutMethod_1_Invoke_m15254_gshared)(__this, ___out_bytes, ___out_size, method)
// System.IAsyncResult GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::BeginInvoke(T[],System.UIntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OutMethod_1_BeginInvoke_m15255_gshared (OutMethod_1_t540 * __this, IntPtrU5BU5D_t443* ___out_bytes, UIntPtr_t  ___out_size, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method);
#define OutMethod_1_BeginInvoke_m15255(__this, ___out_bytes, ___out_size, ___callback, ___object, method) (( Object_t * (*) (OutMethod_1_t540 *, IntPtrU5BU5D_t443*, UIntPtr_t , AsyncCallback_t74 *, Object_t *, const MethodInfo*))OutMethod_1_BeginInvoke_m15255_gshared)(__this, ___out_bytes, ___out_size, ___callback, ___object, method)
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutMethod`1<System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C" UIntPtr_t  OutMethod_1_EndInvoke_m15256_gshared (OutMethod_1_t540 * __this, Object_t * ___result, const MethodInfo* method);
#define OutMethod_1_EndInvoke_m15256(__this, ___result, method) (( UIntPtr_t  (*) (OutMethod_1_t540 *, Object_t *, const MethodInfo*))OutMethod_1_EndInvoke_m15256_gshared)(__this, ___result, method)

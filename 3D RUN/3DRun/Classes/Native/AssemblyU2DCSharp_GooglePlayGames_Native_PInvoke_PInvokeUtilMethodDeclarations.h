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

// GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod
struct OutStringMethod_t360;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t361;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_UIntPtr.h"
#include "mscorlib_System_Text_StringBuilder.h"

// System.Void GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::.ctor(System.Object,System.IntPtr)
extern "C" void OutStringMethod__ctor_m1524 (OutStringMethod_t360 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::Invoke(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  OutStringMethod_Invoke_m1525 (OutStringMethod_t360 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" UIntPtr_t  pinvoke_delegate_wrapper_OutStringMethod_t360(Il2CppObject* delegate, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size);
// System.IAsyncResult GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::BeginInvoke(System.Text.StringBuilder,System.UIntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OutStringMethod_BeginInvoke_m1526 (OutStringMethod_t360 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.PInvokeUtilities/OutStringMethod::EndInvoke(System.IAsyncResult)
extern "C" UIntPtr_t  OutStringMethod_EndInvoke_m1527 (OutStringMethod_t360 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

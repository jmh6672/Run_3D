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

// GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback
struct OnAuthActionFinishedCallback_t80;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Auth.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_0.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnAuthActionFinishedCallback__ctor_m334 (OnAuthActionFinishedCallback_t80 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.IntPtr)
extern "C" void OnAuthActionFinishedCallback_Invoke_m335 (OnAuthActionFinishedCallback_t80 * __this, int32_t ___arg0, int32_t ___arg1, IntPtr_t ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnAuthActionFinishedCallback_t80(Il2CppObject* delegate, int32_t ___arg0, int32_t ___arg1, IntPtr_t ___arg2);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnAuthActionFinishedCallback_BeginInvoke_m336 (OnAuthActionFinishedCallback_t80 * __this, int32_t ___arg0, int32_t ___arg1, IntPtr_t ___arg2, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnAuthActionFinishedCallback_EndInvoke_m337 (OnAuthActionFinishedCallback_t80 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

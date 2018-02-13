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

// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback
struct AuthFinishedCallback_t344;
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

// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::.ctor(System.Object,System.IntPtr)
extern "C" void AuthFinishedCallback__ctor_m1343 (AuthFinishedCallback_t344 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus)
extern "C" void AuthFinishedCallback_Invoke_m1344 (AuthFinishedCallback_t344 * __this, int32_t ___operation, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AuthFinishedCallback_t344(Il2CppObject* delegate, int32_t ___operation, int32_t ___status);
// System.IAsyncResult GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.AsyncCallback,System.Object)
extern "C" Object_t * AuthFinishedCallback_BeginInvoke_m1345 (AuthFinishedCallback_t344 * __this, int32_t ___operation, int32_t ___status, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback::EndInvoke(System.IAsyncResult)
extern "C" void AuthFinishedCallback_EndInvoke_m1346 (AuthFinishedCallback_t344 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

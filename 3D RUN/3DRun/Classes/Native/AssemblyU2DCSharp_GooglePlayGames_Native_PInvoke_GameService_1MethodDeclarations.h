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

// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback
struct AuthStartedCallback_t345;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Auth.h"

// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::.ctor(System.Object,System.IntPtr)
extern "C" void AuthStartedCallback__ctor_m1347 (AuthStartedCallback_t345 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation)
extern "C" void AuthStartedCallback_Invoke_m1348 (AuthStartedCallback_t345 * __this, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AuthStartedCallback_t345(Il2CppObject* delegate, int32_t ___operation);
// System.IAsyncResult GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,System.AsyncCallback,System.Object)
extern "C" Object_t * AuthStartedCallback_BeginInvoke_m1349 (AuthStartedCallback_t345 * __this, int32_t ___operation, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback::EndInvoke(System.IAsyncResult)
extern "C" void AuthStartedCallback_EndInvoke_m1350 (AuthStartedCallback_t345 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

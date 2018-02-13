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

// GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback
struct OnAuthActionStartedCallback_t79;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Auth.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnAuthActionStartedCallback__ctor_m330 (OnAuthActionStartedCallback_t79 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,System.IntPtr)
extern "C" void OnAuthActionStartedCallback_Invoke_m331 (OnAuthActionStartedCallback_t79 * __this, int32_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnAuthActionStartedCallback_t79(Il2CppObject* delegate, int32_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnAuthActionStartedCallback_BeginInvoke_m332 (OnAuthActionStartedCallback_t79 * __this, int32_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnAuthActionStartedCallback_EndInvoke_m333 (OnAuthActionStartedCallback_t79 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

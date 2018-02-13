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

// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback
struct SendReliableMessageCallback_t136;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"

// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::.ctor(System.Object,System.IntPtr)
extern "C" void SendReliableMessageCallback__ctor_m636 (SendReliableMessageCallback_t136 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
extern "C" void SendReliableMessageCallback_Invoke_m637 (SendReliableMessageCallback_t136 * __this, int32_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SendReliableMessageCallback_t136(Il2CppObject* delegate, int32_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * SendReliableMessageCallback_BeginInvoke_m638 (SendReliableMessageCallback_t136 * __this, int32_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback::EndInvoke(System.IAsyncResult)
extern "C" void SendReliableMessageCallback_EndInvoke_m639 (SendReliableMessageCallback_t136 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

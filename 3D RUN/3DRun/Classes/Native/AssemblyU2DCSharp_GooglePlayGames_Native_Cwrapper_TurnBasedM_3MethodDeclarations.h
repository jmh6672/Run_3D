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

// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback
struct MultiplayerStatusCallback_t173;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"

// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::.ctor(System.Object,System.IntPtr)
extern "C" void MultiplayerStatusCallback__ctor_m856 (MultiplayerStatusCallback_t173 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::Invoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
extern "C" void MultiplayerStatusCallback_Invoke_m857 (MultiplayerStatusCallback_t173 * __this, int32_t ___arg0, IntPtr_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MultiplayerStatusCallback_t173(Il2CppObject* delegate, int32_t ___arg0, IntPtr_t ___arg1);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * MultiplayerStatusCallback_BeginInvoke_m858 (MultiplayerStatusCallback_t173 * __this, int32_t ___arg0, IntPtr_t ___arg1, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback::EndInvoke(System.IAsyncResult)
extern "C" void MultiplayerStatusCallback_EndInvoke_m859 (MultiplayerStatusCallback_t173 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

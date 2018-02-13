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

// GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback
struct OnMultiplayerInvitationEventCallback_t81;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Mult.h"
#include "mscorlib_System_String.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnMultiplayerInvitationEventCallback__ctor_m338 (OnMultiplayerInvitationEventCallback_t81 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr)
extern "C" void OnMultiplayerInvitationEventCallback_Invoke_m339 (OnMultiplayerInvitationEventCallback_t81 * __this, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, IntPtr_t ___arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnMultiplayerInvitationEventCallback_t81(Il2CppObject* delegate, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, IntPtr_t ___arg3);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnMultiplayerInvitationEventCallback_BeginInvoke_m340 (OnMultiplayerInvitationEventCallback_t81 * __this, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, IntPtr_t ___arg3, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnMultiplayerInvitationEventCallback_EndInvoke_m341 (OnMultiplayerInvitationEventCallback_t81 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

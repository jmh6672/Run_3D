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

// GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback
struct OnTurnBasedMatchEventCallback_t82;
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

// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnTurnBasedMatchEventCallback__ctor_m342 (OnTurnBasedMatchEventCallback_t82 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback::Invoke(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr)
extern "C" void OnTurnBasedMatchEventCallback_Invoke_m343 (OnTurnBasedMatchEventCallback_t82 * __this, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, IntPtr_t ___arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnTurnBasedMatchEventCallback_t82(Il2CppObject* delegate, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, IntPtr_t ___arg3);
// System.IAsyncResult GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback::BeginInvoke(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * OnTurnBasedMatchEventCallback_BeginInvoke_m344 (OnTurnBasedMatchEventCallback_t82 * __this, int32_t ___arg0, String_t* ___arg1, IntPtr_t ___arg2, IntPtr_t ___arg3, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback::EndInvoke(System.IAsyncResult)
extern "C" void OnTurnBasedMatchEventCallback_EndInvoke_m345 (OnTurnBasedMatchEventCallback_t82 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

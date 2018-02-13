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
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback
struct OnLogCallback_t78;
// GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback
struct OnAuthActionFinishedCallback_t80;
// GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback
struct OnTurnBasedMatchEventCallback_t82;
// GooglePlayGames.Native.Cwrapper.Builder/OnQuestCompletedCallback
struct OnQuestCompletedCallback_t83;
// GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback
struct OnMultiplayerInvitationEventCallback_t81;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_LogL.h"

// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnAuthActionStarted(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionStartedCallback,System.IntPtr)
extern "C" void Builder_GameServices_Builder_SetOnAuthActionStarted_m350 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, OnAuthActionStartedCallback_t79 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_AddOauthScope(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" void Builder_GameServices_Builder_AddOauthScope_m351 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetLogging(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback,System.IntPtr,GooglePlayGames.Native.Cwrapper.Types/LogLevel)
extern "C" void Builder_GameServices_Builder_SetLogging_m352 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, OnLogCallback_t78 * ___callback, IntPtr_t ___callback_arg, int32_t ___min_level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_Construct()
extern "C" IntPtr_t Builder_GameServices_Builder_Construct_m353 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_EnableSnapshots(System.Runtime.InteropServices.HandleRef)
extern "C" void Builder_GameServices_Builder_EnableSnapshots_m354 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnLog(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnLogCallback,System.IntPtr,GooglePlayGames.Native.Cwrapper.Types/LogLevel)
extern "C" void Builder_GameServices_Builder_SetOnLog_m355 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, OnLogCallback_t78 * ___callback, IntPtr_t ___callback_arg, int32_t ___min_level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetDefaultOnLog(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/LogLevel)
extern "C" void Builder_GameServices_Builder_SetDefaultOnLog_m356 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, int32_t ___min_level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnAuthActionFinished(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnAuthActionFinishedCallback,System.IntPtr)
extern "C" void Builder_GameServices_Builder_SetOnAuthActionFinished_m357 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, OnAuthActionFinishedCallback_t80 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnTurnBasedMatchEvent(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnTurnBasedMatchEventCallback,System.IntPtr)
extern "C" void Builder_GameServices_Builder_SetOnTurnBasedMatchEvent_m358 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, OnTurnBasedMatchEventCallback_t82 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnQuestCompleted(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnQuestCompletedCallback,System.IntPtr)
extern "C" void Builder_GameServices_Builder_SetOnQuestCompleted_m359 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, OnQuestCompletedCallback_t83 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_SetOnMultiplayerInvitationEvent(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Builder/OnMultiplayerInvitationEventCallback,System.IntPtr)
extern "C" void Builder_GameServices_Builder_SetOnMultiplayerInvitationEvent_m360 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, OnMultiplayerInvitationEventCallback_t81 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_Create(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" IntPtr_t Builder_GameServices_Builder_Create_m361 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___platform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.Builder::GameServices_Builder_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void Builder_GameServices_Builder_Dispose_m362 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;

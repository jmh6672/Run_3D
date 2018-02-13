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

// GooglePlayGames.Native.PInvoke.GameServicesBuilder
struct GameServicesBuilder_t346;
// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback
struct AuthFinishedCallback_t344;
// GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback
struct AuthStartedCallback_t345;
// System.String
struct String_t;
// System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_3_t457;
// System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Action_3_t458;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// GooglePlayGames.Native.PInvoke.PlatformConfiguration
struct PlatformConfiguration_t348;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Auth.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_0.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Mult.h"

// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::.ctor(System.IntPtr)
extern "C" void GameServicesBuilder__ctor_m1351 (GameServicesBuilder_t346 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnAuthFinishedCallback(GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthFinishedCallback)
extern "C" void GameServicesBuilder_SetOnAuthFinishedCallback_m1352 (GameServicesBuilder_t346 * __this, AuthFinishedCallback_t344 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::EnableSnapshots()
extern "C" void GameServicesBuilder_EnableSnapshots_m1353 (GameServicesBuilder_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalAuthFinishedCallback(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus,System.IntPtr)
extern "C" void GameServicesBuilder_InternalAuthFinishedCallback_m1354 (Object_t * __this /* static, unused */, int32_t ___op, int32_t ___status, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnAuthStartedCallback(GooglePlayGames.Native.PInvoke.GameServicesBuilder/AuthStartedCallback)
extern "C" void GameServicesBuilder_SetOnAuthStartedCallback_m1355 (GameServicesBuilder_t346 * __this, AuthStartedCallback_t345 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalAuthStartedCallback(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,System.IntPtr)
extern "C" void GameServicesBuilder_InternalAuthStartedCallback_m1356 (Object_t * __this /* static, unused */, int32_t ___op, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void GameServicesBuilder_CallDispose_m1357 (GameServicesBuilder_t346 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalOnTurnBasedMatchEventCallback(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr)
extern "C" void GameServicesBuilder_InternalOnTurnBasedMatchEventCallback_m1358 (Object_t * __this /* static, unused */, int32_t ___eventType, String_t* ___matchId, IntPtr_t ___match, IntPtr_t ___userData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnTurnBasedMatchEventCallback(System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>)
extern "C" void GameServicesBuilder_SetOnTurnBasedMatchEventCallback_m1359 (GameServicesBuilder_t346 * __this, Action_3_t457 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::InternalOnMultiplayerInvitationEventCallback(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,System.IntPtr,System.IntPtr)
extern "C" void GameServicesBuilder_InternalOnMultiplayerInvitationEventCallback_m1360 (Object_t * __this /* static, unused */, int32_t ___eventType, String_t* ___matchId, IntPtr_t ___match, IntPtr_t ___userData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServicesBuilder::SetOnMultiplayerInvitationEventCallback(System.Action`3<GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.MultiplayerInvitation>)
extern "C" void GameServicesBuilder_SetOnMultiplayerInvitationEventCallback_m1361 (GameServicesBuilder_t346 * __this, Action_3_t458 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.GameServicesBuilder::Build(GooglePlayGames.Native.PInvoke.PlatformConfiguration)
extern "C" GameServices_t210 * GameServicesBuilder_Build_m1362 (GameServicesBuilder_t346 * __this, PlatformConfiguration_t348 * ___configRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.GameServicesBuilder GooglePlayGames.Native.PInvoke.GameServicesBuilder::Create()
extern "C" GameServicesBuilder_t346 * GameServicesBuilder_Create_m1363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

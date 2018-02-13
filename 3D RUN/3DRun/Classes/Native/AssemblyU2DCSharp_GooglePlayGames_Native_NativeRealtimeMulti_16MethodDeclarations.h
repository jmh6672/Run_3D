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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom
struct LeavingRoom_t266;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// System.Action
struct Action_t267;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_1.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession,GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Action)
extern "C" void LeavingRoom__ctor_m1113 (LeavingRoom_t266 * __this, RoomSession_t239 * ___session, NativeRealTimeRoom_t252 * ___room, Action_t267 * ___leavingCompleteCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::IsActive()
extern "C" bool LeavingRoom_IsActive_m1114 (LeavingRoom_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::OnStateEntered()
extern "C" void LeavingRoom_OnStateEntered_m1115 (LeavingRoom_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::<OnStateEntered>m__46(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus)
extern "C" void LeavingRoom_U3COnStateEnteredU3Em__46_m1116 (LeavingRoom_t266 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/AbortingRoomCreationState
struct AbortingRoomCreationState_t268;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_t375;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/AbortingRoomCreationState::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C" void AbortingRoomCreationState__ctor_m1117 (AbortingRoomCreationState_t268 * __this, RoomSession_t239 * ___session, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/AbortingRoomCreationState::IsActive()
extern "C" bool AbortingRoomCreationState_IsActive_m1118 (AbortingRoomCreationState_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/AbortingRoomCreationState::HandleRoomResponse(GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse)
extern "C" void AbortingRoomCreationState_HandleRoomResponse_m1119 (AbortingRoomCreationState_t268 * __this, RealTimeRoomResponse_t375 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/AbortingRoomCreationState::<HandleRoomResponse>m__47()
extern "C" void AbortingRoomCreationState_U3CHandleRoomResponseU3Em__47_m1120 (AbortingRoomCreationState_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

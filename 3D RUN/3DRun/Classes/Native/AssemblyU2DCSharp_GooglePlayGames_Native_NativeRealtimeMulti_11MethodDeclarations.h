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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState
struct RoomCreationPendingState_t259;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_t375;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C" void RoomCreationPendingState__ctor_m1080 (RoomCreationPendingState_t259 * __this, RoomSession_t239 * ___session, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::HandleRoomResponse(GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse)
extern "C" void RoomCreationPendingState_HandleRoomResponse_m1081 (RoomCreationPendingState_t259 * __this, RealTimeRoomResponse_t375 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::IsActive()
extern "C" bool RoomCreationPendingState_IsActive_m1082 (RoomCreationPendingState_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::LeaveRoom()
extern "C" void RoomCreationPendingState_LeaveRoom_m1083 (RoomCreationPendingState_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

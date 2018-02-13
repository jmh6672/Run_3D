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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState
struct ConnectingState_t260;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse
struct WaitingRoomUIResponse_t377;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::.ctor(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C" void ConnectingState__ctor_m1084 (ConnectingState_t260 * __this, NativeRealTimeRoom_t252 * ___room, RoomSession_t239 * ___session, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::.cctor()
extern "C" void ConnectingState__cctor_m1085 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::OnStateEntered()
extern "C" void ConnectingState_OnStateEntered_m1086 (ConnectingState_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::HandleConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void ConnectingState_HandleConnectedSetChanged_m1087 (ConnectingState_t260 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::HandleParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" void ConnectingState_HandleParticipantStatusChanged_m1088 (ConnectingState_t260 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___participant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::LeaveRoom()
extern "C" void ConnectingState_LeaveRoom_m1089 (ConnectingState_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::ShowWaitingRoomUI(System.UInt32)
extern "C" void ConnectingState_ShowWaitingRoomUI_m1090 (ConnectingState_t260 * __this, uint32_t ___minimumParticipantsBeforeStarting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::<LeaveRoom>m__3B()
extern "C" void ConnectingState_U3CLeaveRoomU3Em__3B_m1091 (ConnectingState_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::<ShowWaitingRoomUI>m__3C(GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse)
extern "C" void ConnectingState_U3CShowWaitingRoomUIU3Em__3C_m1092 (ConnectingState_t260 * __this, WaitingRoomUIResponse_t377 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;

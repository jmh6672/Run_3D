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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState
struct ActiveState_t264;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::.ctor(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C" void ActiveState__ctor_m1098 (ActiveState_t264 * __this, NativeRealTimeRoom_t252 * ___room, RoomSession_t239 * ___session, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::OnStateEntered()
extern "C" void ActiveState_OnStateEntered_m1099 (ActiveState_t264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::IsRoomConnected()
extern "C" bool ActiveState_IsRoomConnected_m1100 (ActiveState_t264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::GetParticipant(System.String)
extern "C" Participant_t9 * ActiveState_GetParticipant_m1101 (ActiveState_t264 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::GetSelf()
extern "C" Participant_t9 * ActiveState_GetSelf_m1102 (ActiveState_t264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::HandleConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void ActiveState_HandleConnectedSetChanged_m1103 (ActiveState_t264 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::LeaveRoom()
extern "C" void ActiveState_LeaveRoom_m1104 (ActiveState_t264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__3D(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" String_t* ActiveState_U3CHandleConnectedSetChangedU3Em__3D_m1105 (Object_t * __this /* static, unused */, MultiplayerParticipant_t350 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__3E(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" Participant_t9 * ActiveState_U3CHandleConnectedSetChangedU3Em__3E_m1106 (Object_t * __this /* static, unused */, MultiplayerParticipant_t350 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__3F(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" String_t* ActiveState_U3CHandleConnectedSetChangedU3Em__3F_m1107 (Object_t * __this /* static, unused */, Participant_t9 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__40(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" String_t* ActiveState_U3CHandleConnectedSetChangedU3Em__40_m1108 (Object_t * __this /* static, unused */, Participant_t9 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<LeaveRoom>m__45()
extern "C" void ActiveState_U3CLeaveRoomU3Em__45_m1109 (ActiveState_t264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State
struct State_t242;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_t375;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t21;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::.ctor()
extern "C" void State__ctor_m1046 (State_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::HandleRoomResponse(GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse)
extern "C" void State_HandleRoomResponse_m1047 (State_t242 * __this, RealTimeRoomResponse_t375 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::IsActive()
extern "C" bool State_IsActive_m1048 (State_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::LeaveRoom()
extern "C" void State_LeaveRoom_m1049 (State_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::ShowWaitingRoomUI(System.UInt32)
extern "C" void State_ShowWaitingRoomUI_m1050 (State_t242 * __this, uint32_t ___minimumParticipantsBeforeStarting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnStateEntered()
extern "C" void State_OnStateEntered_m1051 (State_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void State_OnRoomStatusChanged_m1052 (State_t242 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void State_OnConnectedSetChanged_m1053 (State_t242 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" void State_OnParticipantStatusChanged_m1054 (State_t242 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___participant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnDataReceived(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean)
extern "C" void State_OnDataReceived_m1055 (State_t242 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___sender, ByteU5BU5D_t20* ___data, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::SendToSpecificRecipient(System.String,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" void State_SendToSpecificRecipient_m1056 (State_t242 * __this, String_t* ___recipientId, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::SendToAll(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" void State_SendToAll_m1057 (State_t242 * __this, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::GetConnectedParticipants()
extern "C" List_1_t21 * State_GetConnectedParticipants_m1058 (State_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::GetSelf()
extern "C" Participant_t9 * State_GetSelf_m1059 (State_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::GetParticipant(System.String)
extern "C" Participant_t9 * State_GetParticipant_m1060 (State_t242 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::IsRoomConnected()
extern "C" bool State_IsRoomConnected_m1061 (State_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

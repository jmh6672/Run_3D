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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState
struct MessagingEnabledState_t251;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t21;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession,GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void MessagingEnabledState__ctor_m1062 (MessagingEnabledState_t251 * __this, RoomSession_t239 * ___session, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::UpdateCurrentRoom(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void MessagingEnabledState_UpdateCurrentRoom_m1063 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void MessagingEnabledState_OnRoomStatusChanged_m1064 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::HandleRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void MessagingEnabledState_HandleRoomStatusChanged_m1065 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void MessagingEnabledState_OnConnectedSetChanged_m1066 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::HandleConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void MessagingEnabledState_HandleConnectedSetChanged_m1067 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" void MessagingEnabledState_OnParticipantStatusChanged_m1068 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___participant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::HandleParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" void MessagingEnabledState_HandleParticipantStatusChanged_m1069 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___participant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::GetConnectedParticipants()
extern "C" List_1_t21 * MessagingEnabledState_GetConnectedParticipants_m1070 (MessagingEnabledState_t251 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::SendToSpecificRecipient(System.String,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" void MessagingEnabledState_SendToSpecificRecipient_m1071 (MessagingEnabledState_t251 * __this, String_t* ___recipientId, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::SendToAll(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C" void MessagingEnabledState_SendToAll_m1072 (MessagingEnabledState_t251 * __this, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnDataReceived(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean)
extern "C" void MessagingEnabledState_OnDataReceived_m1073 (MessagingEnabledState_t251 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___sender, ByteU5BU5D_t20* ___data, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<UpdateCurrentRoom>m__37(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" String_t* MessagingEnabledState_U3CUpdateCurrentRoomU3Em__37_m1074 (Object_t * __this /* static, unused */, MultiplayerParticipant_t350 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<UpdateCurrentRoom>m__38(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" Participant_t9 * MessagingEnabledState_U3CUpdateCurrentRoomU3Em__38_m1075 (Object_t * __this /* static, unused */, MultiplayerParticipant_t350 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<UpdateCurrentRoom>m__39(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" String_t* MessagingEnabledState_U3CUpdateCurrentRoomU3Em__39_m1076 (Object_t * __this /* static, unused */, Participant_t9 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<GetConnectedParticipants>m__3A(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" bool MessagingEnabledState_U3CGetConnectedParticipantsU3Em__3A_m1077 (Object_t * __this /* static, unused */, Participant_t9 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;

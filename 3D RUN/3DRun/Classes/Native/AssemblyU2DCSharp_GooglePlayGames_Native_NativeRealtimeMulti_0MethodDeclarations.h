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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t241;
// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_t250;
// System.String
struct String_t;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t240;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State
struct State_t242;
// System.Action
struct Action_t267;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_t375;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t21;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::.ctor(GooglePlayGames.Native.PInvoke.RealtimeManager,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C" void RoomSession__ctor_m1001 (RoomSession_t239 * __this, RealtimeManager_t241 * ___manager, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::get_MinPlayersToStart()
extern "C" uint32_t RoomSession_get_MinPlayersToStart_m1002 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::set_MinPlayersToStart(System.UInt32)
extern "C" void RoomSession_set_MinPlayersToStart_m1003 (RoomSession_t239 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeManager GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::Manager()
extern "C" RealtimeManager_t241 * RoomSession_Manager_m1004 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::IsActive()
extern "C" bool RoomSession_IsActive_m1005 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SelfPlayerId()
extern "C" String_t* RoomSession_SelfPlayerId_m1006 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnGameThreadListener()
extern "C" OnGameThreadForwardingListener_t240 * RoomSession_OnGameThreadListener_m1007 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::EnterState(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State)
extern "C" void RoomSession_EnterState_m1008 (RoomSession_t239 * __this, State_t242 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::LeaveRoom()
extern "C" void RoomSession_LeaveRoom_m1009 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::ShowWaitingRoomUI()
extern "C" void RoomSession_ShowWaitingRoomUI_m1010 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::StartRoomCreation(System.String,System.Action)
extern "C" void RoomSession_StartRoomCreation_m1011 (RoomSession_t239 * __this, String_t* ___currentPlayerId, Action_t267 * ___createRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void RoomSession_OnRoomStatusChanged_m1012 (RoomSession_t239 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C" void RoomSession_OnConnectedSetChanged_m1013 (RoomSession_t239 * __this, NativeRealTimeRoom_t252 * ___room, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C" void RoomSession_OnParticipantStatusChanged_m1014 (RoomSession_t239 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___participant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::HandleRoomResponse(GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse)
extern "C" void RoomSession_HandleRoomResponse_m1015 (RoomSession_t239 * __this, RealTimeRoomResponse_t375 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnDataReceived(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean)
extern "C" void RoomSession_OnDataReceived_m1016 (RoomSession_t239 * __this, NativeRealTimeRoom_t252 * ___room, MultiplayerParticipant_t350 * ___sender, ByteU5BU5D_t20* ___data, bool ___isReliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessageToAll(System.Boolean,System.Byte[])
extern "C" void RoomSession_SendMessageToAll_m1017 (RoomSession_t239 * __this, bool ___reliable, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessageToAll(System.Boolean,System.Byte[],System.Int32,System.Int32)
extern "C" void RoomSession_SendMessageToAll_m1018 (RoomSession_t239 * __this, bool ___reliable, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessage(System.Boolean,System.String,System.Byte[])
extern "C" void RoomSession_SendMessage_m1019 (RoomSession_t239 * __this, bool ___reliable, String_t* ___participantId, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessage(System.Boolean,System.String,System.Byte[],System.Int32,System.Int32)
extern "C" void RoomSession_SendMessage_m1020 (RoomSession_t239 * __this, bool ___reliable, String_t* ___participantId, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::GetConnectedParticipants()
extern "C" List_1_t21 * RoomSession_GetConnectedParticipants_m1021 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::GetSelf()
extern "C" Participant_t9 * RoomSession_GetSelf_m1022 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::GetParticipant(System.String)
extern "C" Participant_t9 * RoomSession_GetParticipant_m1023 (RoomSession_t239 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::IsRoomConnected()
extern "C" bool RoomSession_IsRoomConnected_m1024 (RoomSession_t239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient
struct NativeRealtimeMultiplayerClient_t212;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t201;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t241;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_t250;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper
struct RealTimeEventListenerHelper_t273;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t21;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::.ctor(GooglePlayGames.Native.NativeClient,GooglePlayGames.Native.PInvoke.RealtimeManager)
extern "C" void NativeRealtimeMultiplayerClient__ctor_m1150 (NativeRealtimeMultiplayerClient_t212 * __this, NativeClient_t201 * ___nativeClient, RealtimeManager_t241 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetTerminatedSession()
extern "C" RoomSession_t239 * NativeRealtimeMultiplayerClient_GetTerminatedSession_m1151 (NativeRealtimeMultiplayerClient_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::CreateQuickGame(System.UInt32,System.UInt32,System.UInt32,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C" void NativeRealtimeMultiplayerClient_CreateQuickGame_m1152 (NativeRealtimeMultiplayerClient_t212 * __this, uint32_t ___minOpponents, uint32_t ___maxOpponents, uint32_t ___variant, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::CreateQuickGame(System.UInt32,System.UInt32,System.UInt32,System.UInt64,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C" void NativeRealtimeMultiplayerClient_CreateQuickGame_m1153 (NativeRealtimeMultiplayerClient_t212 * __this, uint32_t ___minOpponents, uint32_t ___maxOpponents, uint32_t ___variant, uint64_t ___exclusiveBitMask, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.NativeRealtimeMultiplayerClient::HelperForSession(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C" RealTimeEventListenerHelper_t273 * NativeRealtimeMultiplayerClient_HelperForSession_m1154 (Object_t * __this /* static, unused */, RoomSession_t239 * ___session, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::CreateWithInvitationScreen(System.UInt32,System.UInt32,System.UInt32,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C" void NativeRealtimeMultiplayerClient_CreateWithInvitationScreen_m1155 (NativeRealtimeMultiplayerClient_t212 * __this, uint32_t ___minOpponents, uint32_t ___maxOppponents, uint32_t ___variant, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::ShowWaitingRoomUI()
extern "C" void NativeRealtimeMultiplayerClient_ShowWaitingRoomUI_m1156 (NativeRealtimeMultiplayerClient_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::AcceptFromInbox(GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C" void NativeRealtimeMultiplayerClient_AcceptFromInbox_m1157 (NativeRealtimeMultiplayerClient_t212 * __this, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::AcceptInvitation(System.String,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C" void NativeRealtimeMultiplayerClient_AcceptInvitation_m1158 (NativeRealtimeMultiplayerClient_t212 * __this, String_t* ___invitationId, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::LeaveRoom()
extern "C" void NativeRealtimeMultiplayerClient_LeaveRoom_m1159 (NativeRealtimeMultiplayerClient_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessageToAll(System.Boolean,System.Byte[])
extern "C" void NativeRealtimeMultiplayerClient_SendMessageToAll_m1160 (NativeRealtimeMultiplayerClient_t212 * __this, bool ___reliable, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessageToAll(System.Boolean,System.Byte[],System.Int32,System.Int32)
extern "C" void NativeRealtimeMultiplayerClient_SendMessageToAll_m1161 (NativeRealtimeMultiplayerClient_t212 * __this, bool ___reliable, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessage(System.Boolean,System.String,System.Byte[])
extern "C" void NativeRealtimeMultiplayerClient_SendMessage_m1162 (NativeRealtimeMultiplayerClient_t212 * __this, bool ___reliable, String_t* ___participantId, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessage(System.Boolean,System.String,System.Byte[],System.Int32,System.Int32)
extern "C" void NativeRealtimeMultiplayerClient_SendMessage_m1163 (NativeRealtimeMultiplayerClient_t212 * __this, bool ___reliable, String_t* ___participantId, ByteU5BU5D_t20* ___data, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetConnectedParticipants()
extern "C" List_1_t21 * NativeRealtimeMultiplayerClient_GetConnectedParticipants_m1164 (NativeRealtimeMultiplayerClient_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetSelf()
extern "C" Participant_t9 * NativeRealtimeMultiplayerClient_GetSelf_m1165 (NativeRealtimeMultiplayerClient_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetParticipant(System.String)
extern "C" Participant_t9 * NativeRealtimeMultiplayerClient_GetParticipant_m1166 (NativeRealtimeMultiplayerClient_t212 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient::IsRoomConnected()
extern "C" bool NativeRealtimeMultiplayerClient_IsRoomConnected_m1167 (NativeRealtimeMultiplayerClient_t212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::DeclineInvitation(System.String)
extern "C" void NativeRealtimeMultiplayerClient_DeclineInvitation_m1168 (NativeRealtimeMultiplayerClient_t212 * __this, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;

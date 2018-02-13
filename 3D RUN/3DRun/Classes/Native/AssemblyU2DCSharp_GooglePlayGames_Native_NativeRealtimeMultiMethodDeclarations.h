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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener
struct NoopListener_t238;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;
// System.String[]
struct StringU5BU5D_t246;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::.ctor()
extern "C" void NoopListener__ctor_m993 (NoopListener_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnRoomSetupProgress(System.Single)
extern "C" void NoopListener_OnRoomSetupProgress_m994 (NoopListener_t238 * __this, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnRoomConnected(System.Boolean)
extern "C" void NoopListener_OnRoomConnected_m995 (NoopListener_t238 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnLeftRoom()
extern "C" void NoopListener_OnLeftRoom_m996 (NoopListener_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnParticipantLeft(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" void NoopListener_OnParticipantLeft_m997 (NoopListener_t238 * __this, Participant_t9 * ___participant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnPeersConnected(System.String[])
extern "C" void NoopListener_OnPeersConnected_m998 (NoopListener_t238 * __this, StringU5BU5D_t246* ___participantIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnPeersDisconnected(System.String[])
extern "C" void NoopListener_OnPeersDisconnected_m999 (NoopListener_t238 * __this, StringU5BU5D_t246* ___participantIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnRealTimeMessageReceived(System.Boolean,System.String,System.Byte[])
extern "C" void NoopListener_OnRealTimeMessageReceived_m1000 (NoopListener_t238 * __this, bool ___isReliable, String_t* ___senderId, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

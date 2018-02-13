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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t240;
// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_t250;
// System.String[]
struct StringU5BU5D_t246;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::.ctor(GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C" void OnGameThreadForwardingListener__ctor_m1037 (OnGameThreadForwardingListener_t240 * __this, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::RoomSetupProgress(System.Single)
extern "C" void OnGameThreadForwardingListener_RoomSetupProgress_m1038 (OnGameThreadForwardingListener_t240 * __this, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::RoomConnected(System.Boolean)
extern "C" void OnGameThreadForwardingListener_RoomConnected_m1039 (OnGameThreadForwardingListener_t240 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::LeftRoom()
extern "C" void OnGameThreadForwardingListener_LeftRoom_m1040 (OnGameThreadForwardingListener_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::PeersConnected(System.String[])
extern "C" void OnGameThreadForwardingListener_PeersConnected_m1041 (OnGameThreadForwardingListener_t240 * __this, StringU5BU5D_t246* ___participantIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::PeersDisconnected(System.String[])
extern "C" void OnGameThreadForwardingListener_PeersDisconnected_m1042 (OnGameThreadForwardingListener_t240 * __this, StringU5BU5D_t246* ___participantIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::RealTimeMessageReceived(System.Boolean,System.String,System.Byte[])
extern "C" void OnGameThreadForwardingListener_RealTimeMessageReceived_m1043 (OnGameThreadForwardingListener_t240 * __this, bool ___isReliable, String_t* ___senderId, ByteU5BU5D_t20* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::ParticipantLeft(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" void OnGameThreadForwardingListener_ParticipantLeft_m1044 (OnGameThreadForwardingListener_t240 * __this, Participant_t9 * ___participant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::<LeftRoom>m__32()
extern "C" void OnGameThreadForwardingListener_U3CLeftRoomU3Em__32_m1045 (OnGameThreadForwardingListener_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

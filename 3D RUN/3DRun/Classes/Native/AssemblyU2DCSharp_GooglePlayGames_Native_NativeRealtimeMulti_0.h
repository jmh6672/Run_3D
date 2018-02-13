#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t240;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t241;
// System.String modreq(System.Runtime.CompilerServices.IsVolatile)
struct String_t;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State modreq(System.Runtime.CompilerServices.IsVolatile)
struct State_t242;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Boolean.h"

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct  RoomSession_t239  : public Object_t
{
	// System.Object GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mLifecycleLock
	Object_t * ___mLifecycleLock_0;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mListener
	OnGameThreadForwardingListener_t240 * ___mListener_1;
	// GooglePlayGames.Native.PInvoke.RealtimeManager GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mManager
	RealtimeManager_t241 * ___mManager_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mCurrentPlayerId
	String_t* ___mCurrentPlayerId_3;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mState
	State_t242 * ___mState_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mStillPreRoomCreation
	bool ___mStillPreRoomCreation_5;
	// System.UInt32 GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mMinPlayersToStart
	uint32_t ___mMinPlayersToStart_6;
};

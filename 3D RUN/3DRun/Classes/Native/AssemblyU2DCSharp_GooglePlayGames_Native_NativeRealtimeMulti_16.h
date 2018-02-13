#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// System.Action
struct Action_t267;

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRealtimeMulti_8.h"

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom
struct  LeavingRoom_t266  : public State_t242
{
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::mSession
	RoomSession_t239 * ___mSession_0;
	// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::mRoomToLeave
	NativeRealTimeRoom_t252 * ___mRoomToLeave_1;
	// System.Action GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::mLeavingCompleteCallback
	Action_t267 * ___mLeavingCompleteCallback_2;
};

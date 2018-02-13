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
// GooglePlayGames.Native.NativeClient
struct NativeClient_t201;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t241;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession modreq(System.Runtime.CompilerServices.IsVolatile)
struct RoomSession_t239;

#include "mscorlib_System_Object.h"

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient
struct  NativeRealtimeMultiplayerClient_t212  : public Object_t
{
	// System.Object GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mSessionLock
	Object_t * ___mSessionLock_0;
	// GooglePlayGames.Native.NativeClient GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mNativeClient
	NativeClient_t201 * ___mNativeClient_1;
	// GooglePlayGames.Native.PInvoke.RealtimeManager GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mRealtimeManager
	RealtimeManager_t241 * ___mRealtimeManager_2;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mCurrentSession
	RoomSession_t239 * ___mCurrentSession_3;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.PInvoke.TurnBasedManager
struct TurnBasedManager_t330;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t201;
// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile)
struct Action_2_t331;

#include "mscorlib_System_Object.h"

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct  NativeTurnBasedMultiplayerClient_t211  : public Object_t
{
	// GooglePlayGames.Native.PInvoke.TurnBasedManager GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::mTurnBasedManager
	TurnBasedManager_t330 * ___mTurnBasedManager_0;
	// GooglePlayGames.Native.NativeClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::mNativeClient
	NativeClient_t201 * ___mNativeClient_1;
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::mMatchDelegate
	Action_2_t331 * ___mMatchDelegate_2;
};

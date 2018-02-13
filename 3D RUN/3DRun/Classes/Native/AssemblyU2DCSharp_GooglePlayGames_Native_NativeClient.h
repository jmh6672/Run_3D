#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object
struct Object_t;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile)
struct NativeTurnBasedMultiplayerClient_t211;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile)
struct NativeRealtimeMultiplayerClient_t212;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient modreq(System.Runtime.CompilerServices.IsVolatile)
struct ISavedGameClient_t216;
// GooglePlayGames.BasicApi.Events.IEventsClient modreq(System.Runtime.CompilerServices.IsVolatile)
struct IEventsClient_t217;
// GooglePlayGames.BasicApi.Quests.IQuestsClient modreq(System.Runtime.CompilerServices.IsVolatile)
struct IQuestsClient_t218;
// GooglePlayGames.Native.AppStateClient modreq(System.Runtime.CompilerServices.IsVolatile)
struct AppStateClient_t219;
// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile)
struct Action_2_t213;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Achievement> modreq(System.Runtime.CompilerServices.IsVolatile)
struct Dictionary_2_t214;
// GooglePlayGames.BasicApi.Multiplayer.Player modreq(System.Runtime.CompilerServices.IsVolatile)
struct Player_t16;
// System.Action`1<System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile)
struct Action_1_t66;
// System.Predicate`1<GooglePlayGames.BasicApi.Achievement>
struct Predicate_1_t215;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGamesClientCo_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeClient_AuthSt.h"
#include "mscorlib_System_UInt32.h"
#include "mscorlib_System_Boolean.h"

// GooglePlayGames.Native.NativeClient
struct  NativeClient_t201  : public Object_t
{
	// System.Object GooglePlayGames.Native.NativeClient::GameServicesLock
	Object_t * ___GameServicesLock_3;
	// System.Object GooglePlayGames.Native.NativeClient::AuthStateLock
	Object_t * ___AuthStateLock_4;
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.Native.NativeClient::mConfiguration
	PlayGamesClientConfiguration_t35  ___mConfiguration_5;
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.NativeClient::mServices
	GameServices_t210 * ___mServices_6;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mTurnBasedClient
	NativeTurnBasedMultiplayerClient_t211 * ___mTurnBasedClient_7;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mRealTimeClient
	NativeRealtimeMultiplayerClient_t212 * ___mRealTimeClient_8;
	// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSavedGameClient
	Object_t * ___mSavedGameClient_9;
	// GooglePlayGames.BasicApi.Events.IEventsClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mEventsClient
	Object_t * ___mEventsClient_10;
	// GooglePlayGames.BasicApi.Quests.IQuestsClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mQuestsClient
	Object_t * ___mQuestsClient_11;
	// GooglePlayGames.Native.AppStateClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAppStateClient
	Object_t * ___mAppStateClient_12;
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mInvitationDelegate
	Action_2_t213 * ___mInvitationDelegate_13;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Achievement> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAchievements
	Dictionary_2_t214 * ___mAchievements_14;
	// GooglePlayGames.BasicApi.Multiplayer.Player modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mUser
	Player_t16 * ___mUser_15;
	// System.Action`1<System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mPendingAuthCallbacks
	Action_1_t66 * ___mPendingAuthCallbacks_16;
	// System.Action`1<System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSilentAuthCallbacks
	Action_1_t66 * ___mSilentAuthCallbacks_17;
	// GooglePlayGames.Native.NativeClient/AuthState modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAuthState
	int32_t ___mAuthState_18;
	// System.UInt32 modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAuthGeneration
	uint32_t ___mAuthGeneration_19;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSilentAuthFailed
	bool ___mSilentAuthFailed_20;
};
struct NativeClient_t201_StaticFields{
	// System.Predicate`1<GooglePlayGames.BasicApi.Achievement> GooglePlayGames.Native.NativeClient::<>f__am$cache12
	Predicate_1_t215 * ___U3CU3Ef__amU24cache12_21;
	// System.Predicate`1<GooglePlayGames.BasicApi.Achievement> GooglePlayGames.Native.NativeClient::<>f__am$cache13
	Predicate_1_t215 * ___U3CU3Ef__amU24cache13_22;
};

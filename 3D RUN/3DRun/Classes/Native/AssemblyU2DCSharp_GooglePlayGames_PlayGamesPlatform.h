#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile)
struct PlayGamesPlatform_t54;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t52;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_t58;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile)
struct INearbyConnectionClient_t59;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t57;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGamesClientCo_0.h"
#include "mscorlib_System_Boolean.h"

// GooglePlayGames.PlayGamesPlatform
struct  PlayGamesPlatform_t54  : public Object_t
{
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.PlayGamesPlatform::mConfiguration
	PlayGamesClientConfiguration_t35  ___mConfiguration_1;
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t52 * ___mLocalUser_2;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	Object_t * ___mClient_3;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_t57 * ___mIdMap_7;
};
struct PlayGamesPlatform_t54_StaticFields{
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_t54 * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_4;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	Object_t * ___sNearbyConnectionClient_5;
};

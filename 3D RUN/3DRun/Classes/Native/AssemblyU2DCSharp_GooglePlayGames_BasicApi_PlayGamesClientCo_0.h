#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t33;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t34;

#include "mscorlib_System_ValueType.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGamesClientCo_0.h"

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct  PlayGamesClientConfiguration_t35 
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableDeprecatedCloudSave
	bool ___mEnableDeprecatedCloudSave_2;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mInvitationDelegate
	InvitationReceivedDelegate_t33 * ___mInvitationDelegate_3;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mMatchDelegate
	MatchDelegate_t34 * ___mMatchDelegate_4;
};
struct PlayGamesClientConfiguration_t35_StaticFields{
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_t35  ___DefaultConfiguration_0;
};

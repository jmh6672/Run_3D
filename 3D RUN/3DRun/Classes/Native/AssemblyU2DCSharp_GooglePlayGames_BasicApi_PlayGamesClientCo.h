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

#include "mscorlib_System_Object.h"

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct  Builder_t32  : public Object_t
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableDeprecatedCloudSave
	bool ___mEnableDeprecatedCloudSave_1;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mInvitationDelegate
	InvitationReceivedDelegate_t33 * ___mInvitationDelegate_2;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mMatchDelegate
	MatchDelegate_t34 * ___mMatchDelegate_3;
};
struct Builder_t32_StaticFields{
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<>f__am$cache4
	InvitationReceivedDelegate_t33 * ___U3CU3Ef__amU24cache4_4;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<>f__am$cache5
	MatchDelegate_t34 * ___U3CU3Ef__amU24cache5_5;
};

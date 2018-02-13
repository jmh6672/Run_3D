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
// System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_2_t323;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t19;
// System.Action`1<System.Boolean>
struct Action_1_t66;

#include "mscorlib_System_Object.h"

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStorey48
struct  U3CFindEqualVersionMatchWithParticipantU3Ec__AnonStorey48_t322  : public Object_t
{
	// System.String GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStorey48::participantId
	String_t* ___participantId_0;
	// System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStorey48::onFoundParticipantAndMatch
	Action_2_t323 * ___onFoundParticipantAndMatch_1;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStorey48::match
	TurnBasedMatch_t19 * ___match_2;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStorey48::onFailure
	Action_1_t66 * ___onFailure_3;
};

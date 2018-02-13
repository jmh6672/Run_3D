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
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t16;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Parti.h"

// GooglePlayGames.BasicApi.Multiplayer.Participant
struct  Participant_t9  : public Object_t
{
	// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::mParticipantId
	String_t* ___mParticipantId_1;
	// GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus GooglePlayGames.BasicApi.Multiplayer.Participant::mStatus
	int32_t ___mStatus_2;
	// GooglePlayGames.BasicApi.Multiplayer.Player GooglePlayGames.BasicApi.Multiplayer.Participant::mPlayer
	Player_t16 * ___mPlayer_3;
	// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::mIsConnectedToRoom
	bool ___mIsConnectedToRoom_4;
};

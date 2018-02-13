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
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Invit.h"

// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct  Invitation_t8  : public Object_t
{
	// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType GooglePlayGames.BasicApi.Multiplayer.Invitation::mInvitationType
	int32_t ___mInvitationType_0;
	// System.String GooglePlayGames.BasicApi.Multiplayer.Invitation::mInvitationId
	String_t* ___mInvitationId_1;
	// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.Invitation::mInviter
	Participant_t9 * ___mInviter_2;
	// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Invitation::mVariant
	int32_t ___mVariant_3;
};

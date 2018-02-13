#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>
struct HashSet_1_t262;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t261;

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRealtimeMulti_9.h"

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState
struct  ConnectingState_t260  : public MessagingEnabledState_t251
{
	// System.Collections.Generic.HashSet`1<System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::mConnectedParticipants
	HashSet_1_t261 * ___mConnectedParticipants_10;
	// System.Single GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::mPercentComplete
	float ___mPercentComplete_11;
	// System.Single GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::mPercentPerParticipant
	float ___mPercentPerParticipant_12;
};
struct ConnectingState_t260_StaticFields{
	// System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::FailedStatuses
	HashSet_1_t262 * ___FailedStatuses_9;
};

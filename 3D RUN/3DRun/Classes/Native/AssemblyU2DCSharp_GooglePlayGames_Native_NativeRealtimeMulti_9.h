#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t239;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t252;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct Dictionary_2_t253;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct Dictionary_2_t254;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String>
struct Func_2_t255;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct Func_2_t256;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String>
struct Func_2_t22;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean>
struct Func_2_t257;

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRealtimeMulti_8.h"

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState
struct  MessagingEnabledState_t251  : public State_t242
{
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mSession
	RoomSession_t239 * ___mSession_0;
	// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mRoom
	NativeRealTimeRoom_t252 * ___mRoom_1;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.Native.PInvoke.MultiplayerParticipant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mNativeParticipants
	Dictionary_2_t253 * ___mNativeParticipants_2;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mParticipants
	Dictionary_2_t254 * ___mParticipants_3;
};
struct MessagingEnabledState_t251_StaticFields{
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache4
	Func_2_t255 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache5
	Func_2_t256 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache6
	Func_2_t22 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache7
	Func_2_t257 * ___U3CU3Ef__amU24cache7_7;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t16;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Parti.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.Participant::.ctor(System.String,System.String,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Player,System.Boolean)
extern "C" void Participant__ctor_m58 (Participant_t9 * __this, String_t* ___displayName, String_t* ___participantId, int32_t ___status, Player_t16 * ___player, bool ___connectedToRoom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::get_DisplayName()
extern "C" String_t* Participant_get_DisplayName_m59 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::get_ParticipantId()
extern "C" String_t* Participant_get_ParticipantId_m60 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus GooglePlayGames.BasicApi.Multiplayer.Participant::get_Status()
extern "C" int32_t Participant_get_Status_m61 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Player GooglePlayGames.BasicApi.Multiplayer.Participant::get_Player()
extern "C" Player_t16 * Participant_get_Player_m62 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::get_IsConnectedToRoom()
extern "C" bool Participant_get_IsConnectedToRoom_m63 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::get_IsAutomatch()
extern "C" bool Participant_get_IsAutomatch_m64 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::ToString()
extern "C" String_t* Participant_ToString_m65 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Participant::CompareTo(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" int32_t Participant_CompareTo_m66 (Participant_t9 * __this, Participant_t9 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::Equals(System.Object)
extern "C" bool Participant_Equals_m67 (Participant_t9 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Participant::GetHashCode()
extern "C" int32_t Participant_GetHashCode_m68 (Participant_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

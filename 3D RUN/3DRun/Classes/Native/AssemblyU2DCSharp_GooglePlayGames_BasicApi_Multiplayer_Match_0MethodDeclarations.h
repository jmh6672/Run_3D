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

// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome
struct MatchOutcome_t11;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t12;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Match.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::.ctor()
extern "C" void MatchOutcome__ctor_m50 (MatchOutcome_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::SetParticipantResult(System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult,System.UInt32)
extern "C" void MatchOutcome_SetParticipantResult_m51 (MatchOutcome_t11 * __this, String_t* ___participantId, int32_t ___result, uint32_t ___placement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::SetParticipantResult(System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult)
extern "C" void MatchOutcome_SetParticipantResult_m52 (MatchOutcome_t11 * __this, String_t* ___participantId, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::SetParticipantResult(System.String,System.UInt32)
extern "C" void MatchOutcome_SetParticipantResult_m53 (MatchOutcome_t11 * __this, String_t* ___participantId, uint32_t ___placement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::get_ParticipantIds()
extern "C" List_1_t12 * MatchOutcome_get_ParticipantIds_m54 (MatchOutcome_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::GetResultFor(System.String)
extern "C" int32_t MatchOutcome_GetResultFor_m55 (MatchOutcome_t11 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::GetPlacementFor(System.String)
extern "C" uint32_t MatchOutcome_GetPlacementFor_m56 (MatchOutcome_t11 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::ToString()
extern "C" String_t* MatchOutcome_ToString_m57 (MatchOutcome_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

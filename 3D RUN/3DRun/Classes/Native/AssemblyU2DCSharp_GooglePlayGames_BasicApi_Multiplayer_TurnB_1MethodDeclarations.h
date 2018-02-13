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

// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t19;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t21;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t9;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_TurnB_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_TurnB.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::.ctor(System.String,System.Byte[],System.Boolean,System.String,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>,System.UInt32,System.String,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus,System.UInt32,System.UInt32)
extern "C" void TurnBasedMatch__ctor_m76 (TurnBasedMatch_t19 * __this, String_t* ___matchId, ByteU5BU5D_t20* ___data, bool ___canRematch, String_t* ___selfParticipantId, List_1_t21 * ___participants, uint32_t ___availableAutomatchSlots, String_t* ___pendingParticipantId, int32_t ___turnStatus, int32_t ___matchStatus, uint32_t ___variant, uint32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_MatchId()
extern "C" String_t* TurnBasedMatch_get_MatchId_m77 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Data()
extern "C" ByteU5BU5D_t20* TurnBasedMatch_get_Data_m78 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_CanRematch()
extern "C" bool TurnBasedMatch_get_CanRematch_m79 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_SelfParticipantId()
extern "C" String_t* TurnBasedMatch_get_SelfParticipantId_m80 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Self()
extern "C" Participant_t9 * TurnBasedMatch_get_Self_m81 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::GetParticipant(System.String)
extern "C" Participant_t9 * TurnBasedMatch_GetParticipant_m82 (TurnBasedMatch_t19 * __this, String_t* ___participantId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Participants()
extern "C" List_1_t21 * TurnBasedMatch_get_Participants_m83 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_PendingParticipantId()
extern "C" String_t* TurnBasedMatch_get_PendingParticipantId_m84 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_PendingParticipant()
extern "C" Participant_t9 * TurnBasedMatch_get_PendingParticipant_m85 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_TurnStatus()
extern "C" int32_t TurnBasedMatch_get_TurnStatus_m86 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Status()
extern "C" int32_t TurnBasedMatch_get_Status_m87 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Variant()
extern "C" uint32_t TurnBasedMatch_get_Variant_m88 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_Version()
extern "C" uint32_t TurnBasedMatch_get_Version_m89 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::get_AvailableAutomatchSlots()
extern "C" uint32_t TurnBasedMatch_get_AvailableAutomatchSlots_m90 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::ToString()
extern "C" String_t* TurnBasedMatch_ToString_m91 (TurnBasedMatch_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::<ToString>m__0(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C" String_t* TurnBasedMatch_U3CToStringU3Em__0_m92 (Object_t * __this /* static, unused */, Participant_t9 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;

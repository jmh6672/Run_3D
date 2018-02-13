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

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t211;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t201;
// GooglePlayGames.Native.PInvoke.TurnBasedManager
struct TurnBasedManager_t330;
// System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>
struct Action_2_t312;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>
struct Action_1_t448;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Action_1_t317;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t34;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t359;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t19;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_1_t321;
// System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_2_t323;
// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome
struct MatchOutcome_t11;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t280;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Mult.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Matc.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multiplayer_Match.h"

// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::.ctor(GooglePlayGames.Native.NativeClient,GooglePlayGames.Native.PInvoke.TurnBasedManager)
extern "C" void NativeTurnBasedMultiplayerClient__ctor_m1252 (NativeTurnBasedMultiplayerClient_t211 * __this, NativeClient_t201 * ___nativeClient, TurnBasedManager_t330 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::CreateQuickMatch(System.UInt32,System.UInt32,System.UInt32,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C" void NativeTurnBasedMultiplayerClient_CreateQuickMatch_m1253 (NativeTurnBasedMultiplayerClient_t211 * __this, uint32_t ___minOpponents, uint32_t ___maxOpponents, uint32_t ___variant, Action_2_t312 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::CreateWithInvitationScreen(System.UInt32,System.UInt32,System.UInt32,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C" void NativeTurnBasedMultiplayerClient_CreateWithInvitationScreen_m1254 (NativeTurnBasedMultiplayerClient_t211 * __this, uint32_t ___minOpponents, uint32_t ___maxOpponents, uint32_t ___variant, Action_2_t312 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::BridgeMatchToUserCallback(System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C" Action_1_t448 * NativeTurnBasedMultiplayerClient_BridgeMatchToUserCallback_m1255 (NativeTurnBasedMultiplayerClient_t211 * __this, Action_2_t312 * ___userCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::AcceptFromInbox(System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C" void NativeTurnBasedMultiplayerClient_AcceptFromInbox_m1256 (NativeTurnBasedMultiplayerClient_t211 * __this, Action_2_t312 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::AcceptInvitation(System.String,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C" void NativeTurnBasedMultiplayerClient_AcceptInvitation_m1257 (NativeTurnBasedMultiplayerClient_t211 * __this, String_t* ___invitationId, Action_2_t312 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::FindInvitationWithId(System.String,System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>)
extern "C" void NativeTurnBasedMultiplayerClient_FindInvitationWithId_m1258 (NativeTurnBasedMultiplayerClient_t211 * __this, String_t* ___invitationId, Action_1_t317 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::RegisterMatchDelegate(GooglePlayGames.BasicApi.Multiplayer.MatchDelegate)
extern "C" void NativeTurnBasedMultiplayerClient_RegisterMatchDelegate_m1259 (NativeTurnBasedMultiplayerClient_t211 * __this, MatchDelegate_t34 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::HandleMatchEvent(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch)
extern "C" void NativeTurnBasedMultiplayerClient_HandleMatchEvent_m1260 (NativeTurnBasedMultiplayerClient_t211 * __this, int32_t ___eventType, String_t* ___matchId, NativeTurnBasedMatch_t359 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::TakeTurn(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Byte[],System.String,System.Action`1<System.Boolean>)
extern "C" void NativeTurnBasedMultiplayerClient_TakeTurn_m1261 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, ByteU5BU5D_t20* ___data, String_t* ___pendingParticipantId, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::FindEqualVersionMatch(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>,System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>)
extern "C" void NativeTurnBasedMultiplayerClient_FindEqualVersionMatch_m1262 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, Action_1_t66 * ___onFailure, Action_1_t321 * ___onVersionMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::FindEqualVersionMatchWithParticipant(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.String,System.Action`1<System.Boolean>,System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>)
extern "C" void NativeTurnBasedMultiplayerClient_FindEqualVersionMatchWithParticipant_m1263 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, String_t* ___participantId, Action_1_t66 * ___onFailure, Action_2_t323 * ___onFoundParticipantAndMatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::GetMaxMatchDataSize()
extern "C" int32_t NativeTurnBasedMultiplayerClient_GetMaxMatchDataSize_m1264 (NativeTurnBasedMultiplayerClient_t211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Finish(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Byte[],GooglePlayGames.BasicApi.Multiplayer.MatchOutcome,System.Action`1<System.Boolean>)
extern "C" void NativeTurnBasedMultiplayerClient_Finish_m1265 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, ByteU5BU5D_t20* ___data, MatchOutcome_t11 * ___outcome, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MatchResult GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::ResultToMatchResult(GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult)
extern "C" int32_t NativeTurnBasedMultiplayerClient_ResultToMatchResult_m1266 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::AcknowledgeFinished(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>)
extern "C" void NativeTurnBasedMultiplayerClient_AcknowledgeFinished_m1267 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Leave(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>)
extern "C" void NativeTurnBasedMultiplayerClient_Leave_m1268 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::LeaveDuringTurn(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.String,System.Action`1<System.Boolean>)
extern "C" void NativeTurnBasedMultiplayerClient_LeaveDuringTurn_m1269 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, String_t* ___pendingParticipantId, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Cancel(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>)
extern "C" void NativeTurnBasedMultiplayerClient_Cancel_m1270 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Rematch(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C" void NativeTurnBasedMultiplayerClient_Rematch_m1271 (NativeTurnBasedMultiplayerClient_t211 * __this, TurnBasedMatch_t19 * ___match, Action_2_t312 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::DeclineInvitation(System.String)
extern "C" void NativeTurnBasedMultiplayerClient_DeclineInvitation_m1272 (NativeTurnBasedMultiplayerClient_t211 * __this, String_t* ___invitationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::<DeclineInvitation>m__67(GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C" void NativeTurnBasedMultiplayerClient_U3CDeclineInvitationU3Em__67_m1273 (NativeTurnBasedMultiplayerClient_t211 * __this, MultiplayerInvitation_t280 * ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;

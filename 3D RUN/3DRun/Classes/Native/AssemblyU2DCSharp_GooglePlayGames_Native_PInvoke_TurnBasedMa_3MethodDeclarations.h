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

// GooglePlayGames.Native.PInvoke.TurnBasedManager
struct TurnBasedManager_t330;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>
struct Action_1_t448;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig
struct TurnBasedMatchConfig_t391;
// System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>
struct Action_1_t472;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse>
struct Action_1_t485;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t280;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t359;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t350;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse>
struct Action_1_t486;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>
struct Action_1_t477;
// GooglePlayGames.Native.PInvoke.ParticipantResults
struct ParticipantResults_t363;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"

// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void TurnBasedManager__ctor_m1753 (TurnBasedManager_t330 * __this, GameServices_t210 * ___services, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::GetMatch(System.String,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" void TurnBasedManager_GetMatch_m1754 (TurnBasedManager_t330 * __this, String_t* ___matchId, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalTurnBasedMatchCallback(System.IntPtr,System.IntPtr)
extern "C" void TurnBasedManager_InternalTurnBasedMatchCallback_m1755 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::CreateMatch(GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" void TurnBasedManager_CreateMatch_m1756 (TurnBasedManager_t330 * __this, TurnBasedMatchConfig_t391 * ___config, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::ShowPlayerSelectUI(System.UInt32,System.UInt32,System.Boolean,System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>)
extern "C" void TurnBasedManager_ShowPlayerSelectUI_m1757 (TurnBasedManager_t330 * __this, uint32_t ___minimumPlayers, uint32_t ___maxiumPlayers, bool ___allowAutomatching, Action_1_t472 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalPlayerSelectUIcallback(System.IntPtr,System.IntPtr)
extern "C" void TurnBasedManager_InternalPlayerSelectUIcallback_m1758 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::GetAllTurnbasedMatches(System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse>)
extern "C" void TurnBasedManager_GetAllTurnbasedMatches_m1759 (TurnBasedManager_t330 * __this, Action_1_t485 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalTurnBasedMatchesCallback(System.IntPtr,System.IntPtr)
extern "C" void TurnBasedManager_InternalTurnBasedMatchesCallback_m1760 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::AcceptInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" void TurnBasedManager_AcceptInvitation_m1761 (TurnBasedManager_t330 * __this, MultiplayerInvitation_t280 * ___invitation, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::DeclineInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C" void TurnBasedManager_DeclineInvitation_m1762 (TurnBasedManager_t330 * __this, MultiplayerInvitation_t280 * ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::TakeTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Byte[],GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" void TurnBasedManager_TakeTurn_m1763 (TurnBasedManager_t330 * __this, NativeTurnBasedMatch_t359 * ___match, ByteU5BU5D_t20* ___data, MultiplayerParticipant_t350 * ___nextParticipant, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalMatchInboxUICallback(System.IntPtr,System.IntPtr)
extern "C" void TurnBasedManager_InternalMatchInboxUICallback_m1764 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::ShowInboxUI(System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse>)
extern "C" void TurnBasedManager_ShowInboxUI_m1765 (TurnBasedManager_t330 * __this, Action_1_t486 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalMultiplayerStatusCallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
extern "C" void TurnBasedManager_InternalMultiplayerStatusCallback_m1766 (Object_t * __this /* static, unused */, int32_t ___status, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::LeaveDuringMyTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C" void TurnBasedManager_LeaveDuringMyTurn_m1767 (TurnBasedManager_t330 * __this, NativeTurnBasedMatch_t359 * ___match, MultiplayerParticipant_t350 * ___nextParticipant, Action_1_t477 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::FinishMatchDuringMyTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Byte[],GooglePlayGames.Native.PInvoke.ParticipantResults,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" void TurnBasedManager_FinishMatchDuringMyTurn_m1768 (TurnBasedManager_t330 * __this, NativeTurnBasedMatch_t359 * ___match, ByteU5BU5D_t20* ___data, ParticipantResults_t363 * ___results, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::ConfirmPendingCompletion(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" void TurnBasedManager_ConfirmPendingCompletion_m1769 (TurnBasedManager_t330 * __this, NativeTurnBasedMatch_t359 * ___match, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::LeaveMatchDuringTheirTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C" void TurnBasedManager_LeaveMatchDuringTheirTurn_m1770 (TurnBasedManager_t330 * __this, NativeTurnBasedMatch_t359 * ___match, Action_1_t477 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::CancelMatch(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C" void TurnBasedManager_CancelMatch_m1771 (TurnBasedManager_t330 * __this, NativeTurnBasedMatch_t359 * ___match, Action_1_t477 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::Rematch(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" void TurnBasedManager_Rematch_m1772 (TurnBasedManager_t330 * __this, NativeTurnBasedMatch_t359 * ___match, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.TurnBasedManager::ToCallbackPointer(System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C" IntPtr_t TurnBasedManager_ToCallbackPointer_m1773 (Object_t * __this /* static, unused */, Action_1_t448 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;

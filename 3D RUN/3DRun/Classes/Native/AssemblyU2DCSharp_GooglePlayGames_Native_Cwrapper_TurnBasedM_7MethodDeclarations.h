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

// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t176;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback
struct MultiplayerStatusCallback_t173;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback
struct MatchInboxUICallback_t175;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t172;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback
struct TurnBasedMatchesCallback_t174;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_UIntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_3.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"

// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_ShowPlayerSelectUI(System.Runtime.InteropServices.HandleRef,System.UInt32,System.UInt32,System.Boolean,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_ShowPlayerSelectUI_m872 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, uint32_t ___minimum_players, uint32_t ___maximum_players, bool ___allow_automatch, PlayerSelectUICallback_t176 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_CancelMatch(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_CancelMatch_m873 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, MultiplayerStatusCallback_t173 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_DismissMatch(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_DismissMatch_m874 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_ShowMatchInboxUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_ShowMatchInboxUI_m875 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, MatchInboxUICallback_t175 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_SynchronizeData(System.Runtime.InteropServices.HandleRef)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_SynchronizeData_m876 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_Rematch(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_Rematch_m877 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, TurnBasedMatchCallback_t172 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_DismissInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_DismissInvitation_m878 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_FetchMatch(System.Runtime.InteropServices.HandleRef,System.String,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_FetchMatch_m879 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, String_t* ___match_id, TurnBasedMatchCallback_t172 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_DeclineInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_DeclineInvitation_m880 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_FinishMatchDuringMyTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.Byte[],System.UIntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_FinishMatchDuringMyTurn_m881 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, ByteU5BU5D_t20* ___match_data, UIntPtr_t  ___match_data_size, IntPtr_t ___results, TurnBasedMatchCallback_t172 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_FetchMatches(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_FetchMatches_m882 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, TurnBasedMatchesCallback_t174 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_CreateTurnBasedMatch(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_CreateTurnBasedMatch_m883 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___config, TurnBasedMatchCallback_t172 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_AcceptInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_AcceptInvitation_m884 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___invitation, TurnBasedMatchCallback_t172 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TakeMyTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.Byte[],System.UIntPtr,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TakeMyTurn_m885 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, ByteU5BU5D_t20* ___match_data, UIntPtr_t  ___match_data_size, IntPtr_t ___results, IntPtr_t ___next_participant, TurnBasedMatchCallback_t172 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_ConfirmPendingCompletion(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_ConfirmPendingCompletion_m886 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, TurnBasedMatchCallback_t172 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_LeaveMatchDuringMyTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_LeaveMatchDuringMyTurn_m887 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, IntPtr_t ___next_participant, MultiplayerStatusCallback_t173 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_LeaveMatchDuringTheirTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback,System.IntPtr)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_LeaveMatchDuringTheirTurn_m888 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, IntPtr_t ___match, MultiplayerStatusCallback_t173 * ___callback, IntPtr_t ___callback_arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose_m889 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus_m890 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch_m891 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose_m892 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus_m893 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length_m894 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement_m895 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length_m896 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement_m897 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length_m898 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement_m899 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length_m900 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C" IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement_m901 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose_m902 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus_m903 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch(System.Runtime.InteropServices.HandleRef)
extern "C" IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch_m904 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C" void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_Dispose_m905 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C" int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetStatus_m906 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_Length(System.Runtime.InteropServices.HandleRef)
extern "C" UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_Length_m907 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr,System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement_m908 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, UIntPtr_t  ___index, StringBuilder_t361 * ___out_arg, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMinimumAutomatchingPlayers(System.Runtime.InteropServices.HandleRef)
extern "C" uint32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMinimumAutomatchingPlayers_m909 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMaximumAutomatchingPlayers(System.Runtime.InteropServices.HandleRef)
extern "C" uint32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMaximumAutomatchingPlayers_m910 (Object_t * __this /* static, unused */, HandleRef_t336  ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;

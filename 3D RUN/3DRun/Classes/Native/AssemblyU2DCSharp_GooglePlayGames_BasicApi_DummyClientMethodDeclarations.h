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

// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_t5;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Achievement>
struct List_1_t424;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t207;
// GooglePlayGames.BasicApi.OnStateLoadedListener
struct OnStateLoadedListener_t425;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient
struct IRealTimeMultiplayerClient_t426;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient
struct ITurnBasedMultiplayerClient_t427;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_t216;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_t217;
// GooglePlayGames.BasicApi.Quests.IQuestsClient
struct IQuestsClient_t218;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t33;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t8;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.BasicApi.DummyClient::.ctor()
extern "C" void DummyClient__ctor_m18 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C" void DummyClient_Authenticate_m19 (DummyClient_t5 * __this, Action_1_t66 * ___callback, bool ___silent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.DummyClient::IsAuthenticated()
extern "C" bool DummyClient_IsAuthenticated_m20 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::SignOut()
extern "C" void DummyClient_SignOut_m21 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserId()
extern "C" String_t* DummyClient_GetUserId_m22 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserDisplayName()
extern "C" String_t* DummyClient_GetUserDisplayName_m23 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserImageUrl()
extern "C" String_t* DummyClient_GetUserImageUrl_m24 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Achievement> GooglePlayGames.BasicApi.DummyClient::GetAchievements()
extern "C" List_1_t424 * DummyClient_GetAchievements_m25 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Achievement GooglePlayGames.BasicApi.DummyClient::GetAchievement(System.String)
extern "C" Achievement_t1 * DummyClient_GetAchievement_m26 (DummyClient_t5 * __this, String_t* ___achId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
extern "C" void DummyClient_UnlockAchievement_m27 (DummyClient_t5 * __this, String_t* ___achId, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::RevealAchievement(System.String,System.Action`1<System.Boolean>)
extern "C" void DummyClient_RevealAchievement_m28 (DummyClient_t5 * __this, String_t* ___achId, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C" void DummyClient_IncrementAchievement_m29 (DummyClient_t5 * __this, String_t* ___achId, int32_t ___steps, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C" void DummyClient_ShowAchievementsUI_m30 (DummyClient_t5 * __this, Action_1_t207 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowLeaderboardUI(System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C" void DummyClient_ShowLeaderboardUI_m31 (DummyClient_t5 * __this, String_t* ___lbId, Action_1_t207 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>)
extern "C" void DummyClient_SubmitScore_m32 (DummyClient_t5 * __this, String_t* ___lbId, int64_t ___score, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadState(System.Int32,GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void DummyClient_LoadState_m33 (DummyClient_t5 * __this, int32_t ___slot, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::UpdateState(System.Int32,System.Byte[],GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void DummyClient_UpdateState_m34 (DummyClient_t5 * __this, int32_t ___slot, ByteU5BU5D_t20* ___data, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient GooglePlayGames.BasicApi.DummyClient::GetRtmpClient()
extern "C" Object_t * DummyClient_GetRtmpClient_m35 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient GooglePlayGames.BasicApi.DummyClient::GetTbmpClient()
extern "C" Object_t * DummyClient_GetTbmpClient_m36 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.BasicApi.DummyClient::GetSavedGameClient()
extern "C" Object_t * DummyClient_GetSavedGameClient_m37 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.BasicApi.DummyClient::GetEventsClient()
extern "C" Object_t * DummyClient_GetEventsClient_m38 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.IQuestsClient GooglePlayGames.BasicApi.DummyClient::GetQuestsClient()
extern "C" Object_t * DummyClient_GetQuestsClient_m39 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::RegisterInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C" void DummyClient_RegisterInvitationDelegate_m40 (DummyClient_t5 * __this, InvitationReceivedDelegate_t33 * ___deleg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.BasicApi.DummyClient::GetInvitationFromNotification()
extern "C" Invitation_t8 * DummyClient_GetInvitationFromNotification_m41 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.DummyClient::HasInvitationFromNotification()
extern "C" bool DummyClient_HasInvitationFromNotification_m42 (DummyClient_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
extern "C" void DummyClient_LogUsage_m43 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t54;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_t58;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_t435;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_t59;
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
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t440;
// System.String[]
struct StringU5BU5D_t246;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t436;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t437;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t438;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t441;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t439;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t442;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t207;
// GooglePlayGames.BasicApi.OnStateLoadedListener
struct OnStateLoadedListener_t425;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t33;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGamesClientCo_0.h"

// System.Void GooglePlayGames.PlayGamesPlatform::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
extern "C" void PlayGamesPlatform__ctor_m194 (PlayGamesPlatform_t54 * __this, PlayGamesClientConfiguration_t35  ___configuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::.ctor(GooglePlayGames.BasicApi.IPlayGamesClient)
extern "C" void PlayGamesPlatform__ctor_m195 (PlayGamesPlatform_t54 * __this, Object_t * ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::.cctor()
extern "C" void PlayGamesPlatform__cctor_m196 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::InitializeInstance(GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
extern "C" void PlayGamesPlatform_InitializeInstance_m197 (Object_t * __this /* static, unused */, PlayGamesClientConfiguration_t35  ___configuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
extern "C" PlayGamesPlatform_t54 * PlayGamesPlatform_get_Instance_m198 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::InitializeNearby(System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>)
extern "C" void PlayGamesPlatform_InitializeNearby_m199 (Object_t * __this /* static, unused */, Action_1_t435 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient GooglePlayGames.PlayGamesPlatform::get_Nearby()
extern "C" Object_t * PlayGamesPlatform_get_Nearby_m200 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesPlatform::get_DebugLogEnabled()
extern "C" bool PlayGamesPlatform_get_DebugLogEnabled_m201 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::set_DebugLogEnabled(System.Boolean)
extern "C" void PlayGamesPlatform_set_DebugLogEnabled_m202 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient GooglePlayGames.PlayGamesPlatform::get_RealTime()
extern "C" Object_t * PlayGamesPlatform_get_RealTime_m203 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient GooglePlayGames.PlayGamesPlatform::get_TurnBased()
extern "C" Object_t * PlayGamesPlatform_get_TurnBased_m204 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.PlayGamesPlatform::get_SavedGame()
extern "C" Object_t * PlayGamesPlatform_get_SavedGame_m205 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.PlayGamesPlatform::get_Events()
extern "C" Object_t * PlayGamesPlatform_get_Events_m206 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.IQuestsClient GooglePlayGames.PlayGamesPlatform::get_Quests()
extern "C" Object_t * PlayGamesPlatform_get_Quests_m207 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::Activate()
extern "C" PlayGamesPlatform_t54 * PlayGamesPlatform_Activate_m208 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::AddIdMapping(System.String,System.String)
extern "C" void PlayGamesPlatform_AddIdMapping_m209 (PlayGamesPlatform_t54 * __this, String_t* ___fromId, String_t* ___toId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<System.Boolean>)
extern "C" void PlayGamesPlatform_Authenticate_m210 (PlayGamesPlatform_t54 * __this, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C" void PlayGamesPlatform_Authenticate_m211 (PlayGamesPlatform_t54 * __this, Action_1_t66 * ___callback, bool ___silent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C" void PlayGamesPlatform_Authenticate_m212 (PlayGamesPlatform_t54 * __this, Object_t * ___unused, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesPlatform::IsAuthenticated()
extern "C" bool PlayGamesPlatform_IsAuthenticated_m213 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::SignOut()
extern "C" void PlayGamesPlatform_SignOut_m214 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C" void PlayGamesPlatform_LoadUsers_m215 (PlayGamesPlatform_t54 * __this, StringU5BU5D_t246* ___userIDs, Action_1_t436 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetUserId()
extern "C" String_t* PlayGamesPlatform_GetUserId_m216 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Achievement GooglePlayGames.PlayGamesPlatform::GetAchievement(System.String)
extern "C" Achievement_t1 * PlayGamesPlatform_GetAchievement_m217 (PlayGamesPlatform_t54 * __this, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetUserDisplayName()
extern "C" String_t* PlayGamesPlatform_GetUserDisplayName_m218 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::GetUserImageUrl()
extern "C" String_t* PlayGamesPlatform_GetUserImageUrl_m219 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C" void PlayGamesPlatform_ReportProgress_m220 (PlayGamesPlatform_t54 * __this, String_t* ___achievementID, double ___progress, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C" void PlayGamesPlatform_IncrementAchievement_m221 (PlayGamesPlatform_t54 * __this, String_t* ___achievementID, int32_t ___steps, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C" void PlayGamesPlatform_LoadAchievementDescriptions_m222 (PlayGamesPlatform_t54 * __this, Action_1_t437 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern "C" void PlayGamesPlatform_LoadAchievements_m223 (PlayGamesPlatform_t54 * __this, Action_1_t438 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IAchievement GooglePlayGames.PlayGamesPlatform::CreateAchievement()
extern "C" Object_t * PlayGamesPlatform_CreateAchievement_m224 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C" void PlayGamesPlatform_ReportScore_m225 (PlayGamesPlatform_t54 * __this, int64_t ___score, String_t* ___board, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C" void PlayGamesPlatform_LoadScores_m226 (PlayGamesPlatform_t54 * __this, String_t* ___leaderboardID, Action_1_t439 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform::CreateLeaderboard()
extern "C" Object_t * PlayGamesPlatform_CreateLeaderboard_m227 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowAchievementsUI()
extern "C" void PlayGamesPlatform_ShowAchievementsUI_m228 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C" void PlayGamesPlatform_ShowAchievementsUI_m229 (PlayGamesPlatform_t54 * __this, Action_1_t207 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI()
extern "C" void PlayGamesPlatform_ShowLeaderboardUI_m230 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String)
extern "C" void PlayGamesPlatform_ShowLeaderboardUI_m231 (PlayGamesPlatform_t54 * __this, String_t* ___lbId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::ShowLeaderboardUI(System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C" void PlayGamesPlatform_ShowLeaderboardUI_m232 (PlayGamesPlatform_t54 * __this, String_t* ___lbId, Action_1_t207 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::SetDefaultLeaderboardForUI(System.String)
extern "C" void PlayGamesPlatform_SetDefaultLeaderboardForUI_m233 (PlayGamesPlatform_t54 * __this, String_t* ___lbid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C" void PlayGamesPlatform_LoadFriends_m234 (PlayGamesPlatform_t54 * __this, Object_t * ___user, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern "C" void PlayGamesPlatform_LoadScores_m235 (PlayGamesPlatform_t54 * __this, Object_t * ___board, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern "C" bool PlayGamesPlatform_GetLoading_m236 (PlayGamesPlatform_t54 * __this, Object_t * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::LoadState(System.Int32,GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void PlayGamesPlatform_LoadState_m237 (PlayGamesPlatform_t54 * __this, int32_t ___slot, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::UpdateState(System.Int32,System.Byte[],GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void PlayGamesPlatform_UpdateState_m238 (PlayGamesPlatform_t54 * __this, int32_t ___slot, ByteU5BU5D_t20* ___data, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser GooglePlayGames.PlayGamesPlatform::get_localUser()
extern "C" Object_t * PlayGamesPlatform_get_localUser_m239 (PlayGamesPlatform_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesPlatform::RegisterInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C" void PlayGamesPlatform_RegisterInvitationDelegate_m240 (PlayGamesPlatform_t54 * __this, InvitationReceivedDelegate_t33 * ___deleg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesPlatform::MapId(System.String)
extern "C" String_t* PlayGamesPlatform_MapId_m241 (PlayGamesPlatform_t54 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;

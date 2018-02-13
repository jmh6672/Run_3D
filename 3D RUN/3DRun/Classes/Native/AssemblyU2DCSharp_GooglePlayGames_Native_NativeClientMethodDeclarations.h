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

// GooglePlayGames.Native.NativeClient
struct NativeClient_t201;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// GooglePlayGames.Native.AppStateClient
struct AppStateClient_t219;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t280;
// GooglePlayGames.Native.PInvoke.PlatformConfiguration
struct PlatformConfiguration_t348;
// GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse
struct FetchAllResponse_t334;
// GooglePlayGames.Native.PlayerManager/FetchSelfResponse
struct FetchSelfResponse_t364;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1;
// System.Predicate`1<GooglePlayGames.BasicApi.Achievement>
struct Predicate_1_t215;
// System.Action`1<GooglePlayGames.BasicApi.Achievement>
struct Action_1_t444;
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
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t359;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGamesClientCo_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Mult.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Auth.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_0.h"

// System.Void GooglePlayGames.Native.NativeClient::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
extern "C" void NativeClient__ctor_m928 (NativeClient_t201 * __this, PlayGamesClientConfiguration_t35  ___configuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.NativeClient::GameServices()
extern "C" GameServices_t210 * NativeClient_GameServices_m929 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C" void NativeClient_Authenticate_m930 (NativeClient_t201 * __this, Action_1_t66 * ___callback, bool ___silent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::InitializeGameServices()
extern "C" void NativeClient_InitializeGameServices_m931 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.AppStateClient GooglePlayGames.Native.NativeClient::CreateAppStateClient()
extern "C" Object_t * NativeClient_CreateAppStateClient_m932 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::HandleInvitation(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C" void NativeClient_HandleInvitation_m933 (NativeClient_t201 * __this, int32_t ___eventType, String_t* ___invitationId, MultiplayerInvitation_t280 * ___invitation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.PlatformConfiguration GooglePlayGames.Native.NativeClient::CreatePlatformConfiguration()
extern "C" PlatformConfiguration_t348 * NativeClient_CreatePlatformConfiguration_m934 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeClient::IsAuthenticated()
extern "C" bool NativeClient_IsAuthenticated_m935 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::PopulateAchievements(System.UInt32,GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse)
extern "C" void NativeClient_PopulateAchievements_m936 (NativeClient_t201 * __this, uint32_t ___authGeneration, FetchAllResponse_t334 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::MaybeFinishAuthentication()
extern "C" void NativeClient_MaybeFinishAuthentication_m937 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::PopulateUser(System.UInt32,GooglePlayGames.Native.PlayerManager/FetchSelfResponse)
extern "C" void NativeClient_PopulateUser_m938 (NativeClient_t201 * __this, uint32_t ___authGeneration, FetchSelfResponse_t364 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::HandleAuthTransition(GooglePlayGames.Native.Cwrapper.Types/AuthOperation,GooglePlayGames.Native.Cwrapper.CommonErrorStatus/AuthStatus)
extern "C" void NativeClient_HandleAuthTransition_m939 (NativeClient_t201 * __this, int32_t ___operation, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::ToUnauthenticated()
extern "C" void NativeClient_ToUnauthenticated_m940 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::SignOut()
extern "C" void NativeClient_SignOut_m941 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetUserId()
extern "C" String_t* NativeClient_GetUserId_m942 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetUserDisplayName()
extern "C" String_t* NativeClient_GetUserDisplayName_m943 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeClient::GetUserImageUrl()
extern "C" String_t* NativeClient_GetUserImageUrl_m944 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Achievement GooglePlayGames.Native.NativeClient::GetAchievement(System.String)
extern "C" Achievement_t1 * NativeClient_GetAchievement_m945 (NativeClient_t201 * __this, String_t* ___achId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
extern "C" void NativeClient_UnlockAchievement_m946 (NativeClient_t201 * __this, String_t* ___achId, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::RevealAchievement(System.String,System.Action`1<System.Boolean>)
extern "C" void NativeClient_RevealAchievement_m947 (NativeClient_t201 * __this, String_t* ___achId, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::UpdateAchievement(System.String,System.String,System.Action`1<System.Boolean>,System.Predicate`1<GooglePlayGames.BasicApi.Achievement>,System.Action`1<GooglePlayGames.BasicApi.Achievement>)
extern "C" void NativeClient_UpdateAchievement_m948 (NativeClient_t201 * __this, String_t* ___updateType, String_t* ___achId, Action_1_t66 * ___callback, Predicate_1_t215 * ___alreadyDone, Action_1_t444 * ___updateAchievment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
extern "C" void NativeClient_IncrementAchievement_m949 (NativeClient_t201 * __this, String_t* ___achId, int32_t ___steps, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C" void NativeClient_ShowAchievementsUI_m950 (NativeClient_t201 * __this, Action_1_t207 * ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::ShowLeaderboardUI(System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
extern "C" void NativeClient_ShowLeaderboardUI_m951 (NativeClient_t201 * __this, String_t* ___leaderboardId, Action_1_t207 * ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>)
extern "C" void NativeClient_SubmitScore_m952 (NativeClient_t201 * __this, String_t* ___leaderboardId, int64_t ___score, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::LoadState(System.Int32,GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void NativeClient_LoadState_m953 (NativeClient_t201 * __this, int32_t ___slot, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::UpdateState(System.Int32,System.Byte[],GooglePlayGames.BasicApi.OnStateLoadedListener)
extern "C" void NativeClient_UpdateState_m954 (NativeClient_t201 * __this, int32_t ___slot, ByteU5BU5D_t20* ___data, Object_t * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.IRealTimeMultiplayerClient GooglePlayGames.Native.NativeClient::GetRtmpClient()
extern "C" Object_t * NativeClient_GetRtmpClient_m955 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.ITurnBasedMultiplayerClient GooglePlayGames.Native.NativeClient::GetTbmpClient()
extern "C" Object_t * NativeClient_GetTbmpClient_m956 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.Native.NativeClient::GetSavedGameClient()
extern "C" Object_t * NativeClient_GetSavedGameClient_m957 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.Native.NativeClient::GetEventsClient()
extern "C" Object_t * NativeClient_GetEventsClient_m958 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.IQuestsClient GooglePlayGames.Native.NativeClient::GetQuestsClient()
extern "C" Object_t * NativeClient_GetQuestsClient_m959 (NativeClient_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::RegisterInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C" void NativeClient_RegisterInvitationDelegate_m960 (NativeClient_t201 * __this, InvitationReceivedDelegate_t33 * ___invitationDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeClient::<InitializeGameServices>m__10(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch)
extern "C" void NativeClient_U3CInitializeGameServicesU3Em__10_m961 (NativeClient_t201 * __this, int32_t ___eventType, String_t* ___matchId, NativeTurnBasedMatch_t359 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeClient::<UnlockAchievement>m__13(GooglePlayGames.BasicApi.Achievement)
extern "C" bool NativeClient_U3CUnlockAchievementU3Em__13_m962 (Object_t * __this /* static, unused */, Achievement_t1 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeClient::<RevealAchievement>m__15(GooglePlayGames.BasicApi.Achievement)
extern "C" bool NativeClient_U3CRevealAchievementU3Em__15_m963 (Object_t * __this /* static, unused */, Achievement_t1 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;

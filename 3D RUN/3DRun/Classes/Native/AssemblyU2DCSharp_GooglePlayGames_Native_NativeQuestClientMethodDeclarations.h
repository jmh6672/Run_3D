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

// GooglePlayGames.Native.NativeQuestClient
struct NativeQuestClient_t236;
// GooglePlayGames.Native.PInvoke.QuestManager
struct QuestManager_t237;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Quests.IQuest>
struct Action_2_t227;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Quests.IQuest>>
struct Action_2_t229;
// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>
struct Action_3_t231;
// GooglePlayGames.BasicApi.Quests.IQuest
struct IQuest_t446;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>
struct Action_1_t445;
// System.Action`2<GooglePlayGames.BasicApi.Quests.QuestAcceptStatus,GooglePlayGames.BasicApi.Quests.IQuest>
struct Action_2_t233;
// GooglePlayGames.BasicApi.Quests.IQuestMilestone
struct IQuestMilestone_t447;
// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>
struct Action_3_t235;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSource.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_QuestFetch.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_QuestUiRes.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_QuestAccep.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_4.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_QuestClaim.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_5.h"

// System.Void GooglePlayGames.Native.NativeQuestClient::.ctor(GooglePlayGames.Native.PInvoke.QuestManager)
extern "C" void NativeQuestClient__ctor_m982 (NativeQuestClient_t236 * __this, QuestManager_t237 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::Fetch(GooglePlayGames.BasicApi.DataSource,System.String,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Quests.IQuest>)
extern "C" void NativeQuestClient_Fetch_m983 (NativeQuestClient_t236 * __this, int32_t ___source, String_t* ___questId, Action_2_t227 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::FetchMatchingState(GooglePlayGames.BasicApi.DataSource,GooglePlayGames.BasicApi.Quests.QuestFetchFlags,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Quests.IQuest>>)
extern "C" void NativeQuestClient_FetchMatchingState_m984 (NativeQuestClient_t236 * __this, int32_t ___source, int32_t ___flags, Action_2_t229 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::ShowAllQuestsUI(System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C" void NativeQuestClient_ShowAllQuestsUI_m985 (NativeQuestClient_t236 * __this, Action_3_t231 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::ShowSpecificQuestUI(GooglePlayGames.BasicApi.Quests.IQuest,System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C" void NativeQuestClient_ShowSpecificQuestUI_m986 (NativeQuestClient_t236 * __this, Object_t * ___quest, Action_3_t231 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.QuestUiResult GooglePlayGames.Native.NativeQuestClient::UiErrorToQuestUiResult(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus)
extern "C" int32_t NativeQuestClient_UiErrorToQuestUiResult_m987 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse> GooglePlayGames.Native.NativeQuestClient::FromQuestUICallback(System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C" Action_1_t445 * NativeQuestClient_FromQuestUICallback_m988 (Object_t * __this /* static, unused */, Action_3_t231 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::Accept(GooglePlayGames.BasicApi.Quests.IQuest,System.Action`2<GooglePlayGames.BasicApi.Quests.QuestAcceptStatus,GooglePlayGames.BasicApi.Quests.IQuest>)
extern "C" void NativeQuestClient_Accept_m989 (NativeQuestClient_t236 * __this, Object_t * ___quest, Action_2_t233 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.QuestAcceptStatus GooglePlayGames.Native.NativeQuestClient::FromAcceptStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestAcceptStatus)
extern "C" int32_t NativeQuestClient_FromAcceptStatus_m990 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::ClaimMilestone(GooglePlayGames.BasicApi.Quests.IQuestMilestone,System.Action`3<GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C" void NativeQuestClient_ClaimMilestone_m991 (NativeQuestClient_t236 * __this, Object_t * ___milestone, Action_3_t235 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus GooglePlayGames.Native.NativeQuestClient::FromClaimStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestClaimMilestoneStatus)
extern "C" int32_t NativeQuestClient_FromClaimStatus_m992 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;

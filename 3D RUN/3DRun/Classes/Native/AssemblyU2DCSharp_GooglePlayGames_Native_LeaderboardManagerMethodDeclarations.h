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

// GooglePlayGames.Native.LeaderboardManager
struct LeaderboardManager_t349;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>
struct Action_1_t340;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.Native.LeaderboardManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void LeaderboardManager__ctor_m1368 (LeaderboardManager_t349 * __this, GameServices_t210 * ___services, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.LeaderboardManager::SubmitScore(System.String,System.Int64)
extern "C" void LeaderboardManager_SubmitScore_m1369 (LeaderboardManager_t349 * __this, String_t* ___leaderboardId, int64_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.LeaderboardManager::ShowAllUI(System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>)
extern "C" void LeaderboardManager_ShowAllUI_m1370 (LeaderboardManager_t349 * __this, Action_1_t340 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.LeaderboardManager::ShowUI(System.String,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>)
extern "C" void LeaderboardManager_ShowUI_m1371 (LeaderboardManager_t349 * __this, String_t* ___leaderboardId, Action_1_t340 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;

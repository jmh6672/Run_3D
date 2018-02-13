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

// GooglePlayGames.Native.PInvoke.AchievementManager
struct AchievementManager_t335;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>
struct Action_1_t340;
// System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse>
struct Action_1_t451;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchResponse>
struct Action_1_t452;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void AchievementManager__ctor_m1288 (AchievementManager_t335 * __this, GameServices_t210 * ___services, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::ShowAllUI(System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>)
extern "C" void AchievementManager_ShowAllUI_m1289 (AchievementManager_t335 * __this, Action_1_t340 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::FetchAll(System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchAllResponse>)
extern "C" void AchievementManager_FetchAll_m1290 (AchievementManager_t335 * __this, Action_1_t451 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::InternalFetchAllCallback(System.IntPtr,System.IntPtr)
extern "C" void AchievementManager_InternalFetchAllCallback_m1291 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Fetch(System.String,System.Action`1<GooglePlayGames.Native.PInvoke.AchievementManager/FetchResponse>)
extern "C" void AchievementManager_Fetch_m1292 (AchievementManager_t335 * __this, String_t* ___achId, Action_1_t452 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C" void AchievementManager_InternalFetchCallback_m1293 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Increment(System.String,System.UInt32)
extern "C" void AchievementManager_Increment_m1294 (AchievementManager_t335 * __this, String_t* ___achievementId, uint32_t ___numSteps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Reveal(System.String)
extern "C" void AchievementManager_Reveal_m1295 (AchievementManager_t335 * __this, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.AchievementManager::Unlock(System.String)
extern "C" void AchievementManager_Unlock_m1296 (AchievementManager_t335 * __this, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;

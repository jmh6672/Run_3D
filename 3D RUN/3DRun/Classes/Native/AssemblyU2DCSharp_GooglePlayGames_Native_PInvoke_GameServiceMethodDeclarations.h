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

// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// GooglePlayGames.Native.PInvoke.AchievementManager
struct AchievementManager_t335;
// GooglePlayGames.Native.LeaderboardManager
struct LeaderboardManager_t349;
// GooglePlayGames.Native.PlayerManager
struct PlayerManager_t365;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"

// System.Void GooglePlayGames.Native.PInvoke.GameServices::.ctor(System.IntPtr)
extern "C" void GameServices__ctor_m1334 (GameServices_t210 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.GameServices::IsAuthenticated()
extern "C" bool GameServices_IsAuthenticated_m1335 (GameServices_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::SignOut()
extern "C" void GameServices_SignOut_m1336 (GameServices_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::StartAuthorizationUI()
extern "C" void GameServices_StartAuthorizationUI_m1337 (GameServices_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.AchievementManager GooglePlayGames.Native.PInvoke.GameServices::AchievementManager()
extern "C" AchievementManager_t335 * GameServices_AchievementManager_m1338 (GameServices_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.LeaderboardManager GooglePlayGames.Native.PInvoke.GameServices::LeaderboardManager()
extern "C" LeaderboardManager_t349 * GameServices_LeaderboardManager_m1339 (GameServices_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PlayerManager GooglePlayGames.Native.PInvoke.GameServices::PlayerManager()
extern "C" PlayerManager_t365 * GameServices_PlayerManager_m1340 (GameServices_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef GooglePlayGames.Native.PInvoke.GameServices::AsHandle()
extern "C" HandleRef_t336  GameServices_AsHandle_m1341 (GameServices_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.GameServices::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void GameServices_CallDispose_m1342 (GameServices_t210 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.Native.PlayerManager
struct PlayerManager_t365;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t210;
// System.Action`1<GooglePlayGames.Native.PlayerManager/FetchSelfResponse>
struct Action_1_t461;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GooglePlayGames.Native.PlayerManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C" void PlayerManager__ctor_m1548 (PlayerManager_t365 * __this, GameServices_t210 * ___services, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PlayerManager::FetchSelf(System.Action`1<GooglePlayGames.Native.PlayerManager/FetchSelfResponse>)
extern "C" void PlayerManager_FetchSelf_m1549 (PlayerManager_t365 * __this, Action_1_t461 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PlayerManager::InternalFetchSelfCallback(System.IntPtr,System.IntPtr)
extern "C" void PlayerManager_InternalFetchSelfCallback_m1550 (Object_t * __this /* static, unused */, IntPtr_t ___response, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

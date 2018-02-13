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

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t32;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t33;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t34;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGamesClientCo_0.h"

// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
extern "C" void PlayGamesClientConfiguration__ctor_m150 (PlayGamesClientConfiguration_t35 * __this, Builder_t32 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.cctor()
extern "C" void PlayGamesClientConfiguration__cctor_m151 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableSavedGames()
extern "C" bool PlayGamesClientConfiguration_get_EnableSavedGames_m152 (PlayGamesClientConfiguration_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableDeprecatedCloudSave()
extern "C" bool PlayGamesClientConfiguration_get_EnableDeprecatedCloudSave_m153 (PlayGamesClientConfiguration_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_InvitationDelegate()
extern "C" InvitationReceivedDelegate_t33 * PlayGamesClientConfiguration_get_InvitationDelegate_m154 (PlayGamesClientConfiguration_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_MatchDelegate()
extern "C" MatchDelegate_t34 * PlayGamesClientConfiguration_get_MatchDelegate_m155 (PlayGamesClientConfiguration_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

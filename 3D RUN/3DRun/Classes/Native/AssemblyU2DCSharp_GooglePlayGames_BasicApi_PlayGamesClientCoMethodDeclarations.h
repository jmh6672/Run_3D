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
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t8;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t19;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGamesClientCo_0.h"

// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
extern "C" void Builder__ctor_m138 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableSavedGames()
extern "C" Builder_t32 * Builder_EnableSavedGames_m139 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableDeprecatedCloudSave()
extern "C" Builder_t32 * Builder_EnableDeprecatedCloudSave_m140 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::WithInvitationDelegate(GooglePlayGames.BasicApi.InvitationReceivedDelegate)
extern "C" Builder_t32 * Builder_WithInvitationDelegate_m141 (Builder_t32 * __this, InvitationReceivedDelegate_t33 * ___invitationDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::WithMatchDelegate(GooglePlayGames.BasicApi.Multiplayer.MatchDelegate)
extern "C" Builder_t32 * Builder_WithMatchDelegate_m142 (Builder_t32 * __this, MatchDelegate_t34 * ___matchDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
extern "C" bool Builder_HasEnableSaveGames_m143 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableDeprecatedCloudSave()
extern "C" bool Builder_HasEnableDeprecatedCloudSave_m144 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetMatchDelegate()
extern "C" MatchDelegate_t34 * Builder_GetMatchDelegate_m145 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetInvitationDelegate()
extern "C" InvitationReceivedDelegate_t33 * Builder_GetInvitationDelegate_m146 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
extern "C" PlayGamesClientConfiguration_t35  Builder_Build_m147 (Builder_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<mInvitationDelegate>m__1(GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean)
extern "C" void Builder_U3CmInvitationDelegateU3Em__1_m148 (Object_t * __this /* static, unused */, Invitation_t8 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<mMatchDelegate>m__2(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean)
extern "C" void Builder_U3CmMatchDelegateU3Em__2_m149 (Object_t * __this /* static, unused */, TurnBasedMatch_t19 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t52;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t54;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t434;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t56;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"

// System.Void GooglePlayGames.PlayGamesLocalUser::.ctor(GooglePlayGames.PlayGamesPlatform)
extern "C" void PlayGamesLocalUser__ctor_m181 (PlayGamesLocalUser_t52 * __this, PlayGamesPlatform_t54 * ___plaf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::Authenticate(System.Action`1<System.Boolean>)
extern "C" void PlayGamesLocalUser_Authenticate_m182 (PlayGamesLocalUser_t52 * __this, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::Authenticate(System.Action`1<System.Boolean>,System.Boolean)
extern "C" void PlayGamesLocalUser_Authenticate_m183 (PlayGamesLocalUser_t52 * __this, Action_1_t66 * ___callback, bool ___silent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesLocalUser::LoadFriends(System.Action`1<System.Boolean>)
extern "C" void PlayGamesLocalUser_LoadFriends_m184 (PlayGamesLocalUser_t52 * __this, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.PlayGamesLocalUser::get_friends()
extern "C" IUserProfileU5BU5D_t434* PlayGamesLocalUser_get_friends_m185 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_authenticated()
extern "C" bool PlayGamesLocalUser_get_authenticated_m186 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_underage()
extern "C" bool PlayGamesLocalUser_get_underage_m187 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLocalUser::get_userName()
extern "C" String_t* PlayGamesLocalUser_get_userName_m188 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesLocalUser::get_id()
extern "C" String_t* PlayGamesLocalUser_get_id_m189 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_isFriend()
extern "C" bool PlayGamesLocalUser_get_isFriend_m190 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState GooglePlayGames.PlayGamesLocalUser::get_state()
extern "C" int32_t PlayGamesLocalUser_get_state_m191 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GooglePlayGames.PlayGamesLocalUser::LoadImage()
extern "C" Texture2D_t56 * PlayGamesLocalUser_LoadImage_m192 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GooglePlayGames.PlayGamesLocalUser::get_image()
extern "C" Texture2D_t56 * PlayGamesLocalUser_get_image_m193 (PlayGamesLocalUser_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t54;
// UnityEngine.WWW
struct WWW_t55;
// UnityEngine.Texture2D
struct Texture2D_t56;

#include "AssemblyU2DCSharp_GooglePlayGames_PlayGamesUserProfile.h"

// GooglePlayGames.PlayGamesLocalUser
struct  PlayGamesLocalUser_t52  : public PlayGamesUserProfile_t53
{
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesLocalUser::mPlatform
	PlayGamesPlatform_t54 * ___mPlatform_0;
	// UnityEngine.WWW GooglePlayGames.PlayGamesLocalUser::mAvatarUrl
	WWW_t55 * ___mAvatarUrl_1;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesLocalUser::mImage
	Texture2D_t56 * ___mImage_2;
};

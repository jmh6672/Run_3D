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

// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t16;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GooglePlayGames.BasicApi.Multiplayer.Player::.ctor(System.String,System.String,System.String)
extern "C" void Player__ctor_m69 (Player_t16 * __this, String_t* ___displayName, String_t* ___playerId, String_t* ___avatarUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Player::get_DisplayName()
extern "C" String_t* Player_get_DisplayName_m70 (Player_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Player::get_PlayerId()
extern "C" String_t* Player_get_PlayerId_m71 (Player_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Player::get_AvatarURL()
extern "C" String_t* Player_get_AvatarURL_m72 (Player_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.BasicApi.Multiplayer.Player::ToString()
extern "C" String_t* Player_ToString_m73 (Player_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Player::Equals(System.Object)
extern "C" bool Player_Equals_m74 (Player_t16 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Player::GetHashCode()
extern "C" int32_t Player_GetHashCode_m75 (Player_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

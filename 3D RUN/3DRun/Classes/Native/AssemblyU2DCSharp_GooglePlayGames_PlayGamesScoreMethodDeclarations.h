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

// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t60;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void GooglePlayGames.PlayGamesScore::.ctor()
extern "C" void PlayGamesScore__ctor_m242 (PlayGamesScore_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesScore::ReportScore(System.Action`1<System.Boolean>)
extern "C" void PlayGamesScore_ReportScore_m243 (PlayGamesScore_t60 * __this, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesScore::get_leaderboardID()
extern "C" String_t* PlayGamesScore_get_leaderboardID_m244 (PlayGamesScore_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesScore::set_leaderboardID(System.String)
extern "C" void PlayGamesScore_set_leaderboardID_m245 (PlayGamesScore_t60 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GooglePlayGames.PlayGamesScore::get_value()
extern "C" int64_t PlayGamesScore_get_value_m246 (PlayGamesScore_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesScore::set_value(System.Int64)
extern "C" void PlayGamesScore_set_value_m247 (PlayGamesScore_t60 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.PlayGamesScore::get_date()
extern "C" DateTime_t51  PlayGamesScore_get_date_m248 (PlayGamesScore_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesScore::get_formattedValue()
extern "C" String_t* PlayGamesScore_get_formattedValue_m249 (PlayGamesScore_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesScore::get_userID()
extern "C" String_t* PlayGamesScore_get_userID_m250 (PlayGamesScore_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.PlayGamesScore::get_rank()
extern "C" int32_t PlayGamesScore_get_rank_m251 (PlayGamesScore_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

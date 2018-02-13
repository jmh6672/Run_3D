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

// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t49;
// GooglePlayGames.ReportProgress
struct ReportProgress_t50;
// System.Action`1<System.Boolean>
struct Action_1_t66;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void GooglePlayGames.PlayGamesAchievement::.ctor()
extern "C" void PlayGamesAchievement__ctor_m170 (PlayGamesAchievement_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.ReportProgress)
extern "C" void PlayGamesAchievement__ctor_m171 (PlayGamesAchievement_t49 * __this, ReportProgress_t50 * ___progressCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::.cctor()
extern "C" void PlayGamesAchievement__cctor_m172 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::ReportProgress(System.Action`1<System.Boolean>)
extern "C" void PlayGamesAchievement_ReportProgress_m173 (PlayGamesAchievement_t49 * __this, Action_1_t66 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.PlayGamesAchievement::get_id()
extern "C" String_t* PlayGamesAchievement_get_id_m174 (PlayGamesAchievement_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::set_id(System.String)
extern "C" void PlayGamesAchievement_set_id_m175 (PlayGamesAchievement_t49 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double GooglePlayGames.PlayGamesAchievement::get_percentCompleted()
extern "C" double PlayGamesAchievement_get_percentCompleted_m176 (PlayGamesAchievement_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.PlayGamesAchievement::set_percentCompleted(System.Double)
extern "C" void PlayGamesAchievement_set_percentCompleted_m177 (PlayGamesAchievement_t49 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_completed()
extern "C" bool PlayGamesAchievement_get_completed_m178 (PlayGamesAchievement_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.PlayGamesAchievement::get_hidden()
extern "C" bool PlayGamesAchievement_get_hidden_m179 (PlayGamesAchievement_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.PlayGamesAchievement::get_lastReportedDate()
extern "C" DateTime_t51  PlayGamesAchievement_get_lastReportedDate_m180 (PlayGamesAchievement_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

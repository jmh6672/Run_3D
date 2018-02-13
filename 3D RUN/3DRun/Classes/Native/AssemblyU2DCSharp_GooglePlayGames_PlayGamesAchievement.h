#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GooglePlayGames.ReportProgress
struct ReportProgress_t50;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// GooglePlayGames.PlayGamesAchievement
struct  PlayGamesAchievement_t49  : public Object_t
{
	// GooglePlayGames.ReportProgress GooglePlayGames.PlayGamesAchievement::mProgressCallback
	ReportProgress_t50 * ___mProgressCallback_0;
	// System.String GooglePlayGames.PlayGamesAchievement::mId
	String_t* ___mId_1;
	// System.Double GooglePlayGames.PlayGamesAchievement::mPercentComplete
	double ___mPercentComplete_2;
};
struct PlayGamesAchievement_t49_StaticFields{
	// System.DateTime GooglePlayGames.PlayGamesAchievement::Thesentinel
	DateTime_t51  ___Thesentinel_3;
};

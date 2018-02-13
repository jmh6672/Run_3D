#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// GooglePlayGames.BasicApi.Achievement
struct  Achievement_t1  : public Object_t
{
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_0;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_3;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_5;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_7;
};

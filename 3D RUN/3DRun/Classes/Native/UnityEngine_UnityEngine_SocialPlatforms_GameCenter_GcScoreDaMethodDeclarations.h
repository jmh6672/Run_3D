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

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1060;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t1060 * GcScoreData_ToScore_m5158 (GcScoreData_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t1050_marshal(const GcScoreData_t1050& unmarshaled, GcScoreData_t1050_marshaled& marshaled);
extern "C" void GcScoreData_t1050_marshal_back(const GcScoreData_t1050_marshaled& marshaled, GcScoreData_t1050& unmarshaled);
extern "C" void GcScoreData_t1050_marshal_cleanup(GcScoreData_t1050_marshaled& marshaled);

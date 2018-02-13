#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t402;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t403;
// UnityEngine.Transform
struct Transform_t404;
// UnityEngine.UI.Slider
struct Slider_t405;
// UnityEngine.UI.Text
struct Text_t406;
// UnityEngine.GameObject
struct GameObject_t399;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameManager
struct  GameManager_t402  : public MonoBehaviour_t64
{
	// UnityEngine.GameObject[] GameManager::goal
	GameObjectU5BU5D_t403* ___goal_3;
	// UnityEngine.Transform GameManager::Fever
	Transform_t404 * ___Fever_4;
	// UnityEngine.Transform GameManager::Item
	Transform_t404 * ___Item_5;
	// UnityEngine.UI.Slider GameManager::gage
	Slider_t405 * ___gage_6;
	// System.Boolean GameManager::end
	bool ___end_7;
	// System.Single GameManager::playTime
	float ___playTime_8;
	// System.Single GameManager::playSeTime
	float ___playSeTime_9;
	// System.Single GameManager::playMiTime
	float ___playMiTime_10;
	// System.Single GameManager::randomNum
	float ___randomNum_11;
	// System.Single GameManager::difficult
	float ___difficult_12;
	// System.Single GameManager::makeTime
	float ___makeTime_13;
	// System.Single GameManager::scTime
	float ___scTime_14;
	// System.Single GameManager::stageTime
	float ___stageTime_15;
	// System.Single GameManager::stage
	float ___stage_16;
	// System.Single GameManager::speed
	float ___speed_17;
	// System.Int32 GameManager::score
	int32_t ___score_18;
	// UnityEngine.UI.Text GameManager::txtTime
	Text_t406 * ___txtTime_19;
	// UnityEngine.UI.Text GameManager::txtStage
	Text_t406 * ___txtStage_20;
	// UnityEngine.UI.Text GameManager::txtScore
	Text_t406 * ___txtScore_21;
	// UnityEngine.UI.Text GameManager::StageOn
	Text_t406 * ___StageOn_22;
	// UnityEngine.GameObject GameManager::newScore
	GameObject_t399 * ___newScore_23;
	// UnityEngine.UI.Text GameManager::bestSc
	Text_t406 * ___bestSc_24;
	// UnityEngine.UI.Text GameManager::FianlSc
	Text_t406 * ___FianlSc_25;
	// System.String GameManager::timeStr
	String_t* ___timeStr_26;
};
struct GameManager_t402_StaticFields{
	// GameManager GameManager::manager
	GameManager_t402 * ___manager_2;
};

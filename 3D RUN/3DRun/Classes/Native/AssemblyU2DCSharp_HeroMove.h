#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeroMove
struct HeroMove_t410;
// UnityEngine.Transform[]
struct TransformU5BU5D_t415;
// UnityEngine.Transform
struct Transform_t404;
// UnityEngine.GameObject
struct GameObject_t399;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t403;
// UnityEngine.UI.Text
struct Text_t406;
// UnityEngine.AudioClip
struct AudioClip_t400;
// UnityEngine.Canvas
struct Canvas_t416;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// HeroMove
struct  HeroMove_t410  : public MonoBehaviour_t64
{
	// UnityEngine.Transform[] HeroMove::Item
	TransformU5BU5D_t415* ___Item_3;
	// UnityEngine.Transform HeroMove::HeroPoint
	Transform_t404 * ___HeroPoint_4;
	// UnityEngine.Transform HeroMove::Mcamera
	Transform_t404 * ___Mcamera_5;
	// UnityEngine.Transform HeroMove::firstPoint
	Transform_t404 * ___firstPoint_6;
	// UnityEngine.GameObject HeroMove::EndUI
	GameObject_t399 * ___EndUI_7;
	// UnityEngine.GameObject HeroMove::StageOn
	GameObject_t399 * ___StageOn_8;
	// System.Single HeroMove::dump
	float ___dump_9;
	// UnityEngine.GameObject HeroMove::FeverParticle
	GameObject_t399 * ___FeverParticle_10;
	// UnityEngine.GameObject[] HeroMove::ItemParticle
	GameObjectU5BU5D_t403* ___ItemParticle_11;
	// UnityEngine.UI.Text HeroMove::Bonus
	Text_t406 * ___Bonus_12;
	// System.Single HeroMove::jumpTime
	float ___jumpTime_13;
	// System.Boolean HeroMove::keyRock
	bool ___keyRock_14;
	// UnityEngine.AudioClip HeroMove::moveSnd
	AudioClip_t400 * ___moveSnd_15;
	// UnityEngine.AudioClip HeroMove::jumpSnd
	AudioClip_t400 * ___jumpSnd_16;
	// UnityEngine.AudioClip HeroMove::ItemSnd
	AudioClip_t400 * ___ItemSnd_17;
	// UnityEngine.AudioClip HeroMove::feverSnd
	AudioClip_t400 * ___feverSnd_18;
	// UnityEngine.AudioClip HeroMove::getSnd
	AudioClip_t400 * ___getSnd_19;
	// UnityEngine.Canvas HeroMove::canvas
	Canvas_t416 * ___canvas_20;
	// System.Boolean HeroMove::delay
	bool ___delay_21;
	// System.Boolean HeroMove::jump
	bool ___jump_22;
	// System.Boolean HeroMove::nonGoal
	bool ___nonGoal_23;
	// System.Boolean HeroMove::fever
	bool ___fever_24;
	// UnityEngine.Vector3 HeroMove::ang
	Vector3_t417  ___ang_25;
	// System.Single HeroMove::halfWidth
	float ___halfWidth_26;
	// System.Single HeroMove::touchHiehgt
	float ___touchHiehgt_27;
	// UnityEngine.Vector2 HeroMove::firstFingerPos
	Vector2_t418  ___firstFingerPos_28;
	// UnityEngine.Vector2 HeroMove::lastFingerPos
	Vector2_t418  ___lastFingerPos_29;
	// System.Single HeroMove::random
	float ___random_30;
	// System.Single HeroMove::randomPos
	float ___randomPos_31;
	// System.Single HeroMove::makeTime
	float ___makeTime_32;
	// System.Int32 HeroMove::m
	int32_t ___m_33;
	// System.Int32 HeroMove::score
	int32_t ___score_34;
};
struct HeroMove_t410_StaticFields{
	// HeroMove HeroMove::manager
	HeroMove_t410 * ___manager_2;
};

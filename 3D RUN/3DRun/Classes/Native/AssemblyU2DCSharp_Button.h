#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t399;
// UnityEngine.AudioClip
struct AudioClip_t400;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Button
struct  Button_t398  : public MonoBehaviour_t64
{
	// UnityEngine.GameObject Button::FullGage
	GameObject_t399 * ___FullGage_2;
	// UnityEngine.GameObject Button::PuaseUI
	GameObject_t399 * ___PuaseUI_3;
	// UnityEngine.GameObject Button::EndUI
	GameObject_t399 * ___EndUI_4;
	// UnityEngine.GameObject Button::QuitUI
	GameObject_t399 * ___QuitUI_5;
	// UnityEngine.GameObject Button::RankUI
	GameObject_t399 * ___RankUI_6;
	// UnityEngine.GameObject Button::OffSound
	GameObject_t399 * ___OffSound_7;
	// UnityEngine.AudioClip Button::snd
	AudioClip_t400 * ___snd_8;
	// UnityEngine.AudioClip Button::GageSnd
	AudioClip_t400 * ___GageSnd_9;
	// System.Boolean Button::EfGage
	bool ___EfGage_10;
};

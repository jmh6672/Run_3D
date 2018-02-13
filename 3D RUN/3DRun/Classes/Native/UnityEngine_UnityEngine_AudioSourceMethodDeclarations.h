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

// UnityEngine.AudioSource
struct AudioSource_t585;
// UnityEngine.AudioClip
struct AudioClip_t400;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m4940 (AudioSource_t585 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" void AudioSource_set_pitch_m2336 (AudioSource_t585 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m4941 (AudioSource_t585 * __this, AudioClip_t400 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m4942 (AudioSource_t585 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m4943 (AudioSource_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C" void AudioSource_PlayClipAtPoint_m2316 (Object_t * __this /* static, unused */, AudioClip_t400 * ___clip, Vector3_t417  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
extern "C" void AudioSource_PlayClipAtPoint_m4944 (Object_t * __this /* static, unused */, AudioClip_t400 * ___clip, Vector3_t417  ___position, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C" void AudioSource_set_spatialBlend_m4945 (AudioSource_t585 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

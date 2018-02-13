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

// UnityEngine.AnimationCurve
struct AnimationCurve_t1014;
struct AnimationCurve_t1014_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t1102;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m4971 (AnimationCurve_t1014 * __this, KeyframeU5BU5D_t1102* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m4972 (AnimationCurve_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4973 (AnimationCurve_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m4974 (AnimationCurve_t1014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4975 (AnimationCurve_t1014 * __this, KeyframeU5BU5D_t1102* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t1014_marshal(const AnimationCurve_t1014& unmarshaled, AnimationCurve_t1014_marshaled& marshaled);
extern "C" void AnimationCurve_t1014_marshal_back(const AnimationCurve_t1014_marshaled& marshaled, AnimationCurve_t1014& unmarshaled);
extern "C" void AnimationCurve_t1014_marshal_cleanup(AnimationCurve_t1014_marshaled& marshaled);

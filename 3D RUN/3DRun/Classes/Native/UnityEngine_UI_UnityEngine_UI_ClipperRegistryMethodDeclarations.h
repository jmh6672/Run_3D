﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.ClipperRegistry
struct ClipperRegistry_t781;
// UnityEngine.UI.IClipper
struct IClipper_t851;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ClipperRegistry::.ctor()
extern "C" void ClipperRegistry__ctor_m3548 (ClipperRegistry_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ClipperRegistry UnityEngine.UI.ClipperRegistry::get_instance()
extern "C" ClipperRegistry_t781 * ClipperRegistry_get_instance_m3549 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Cull()
extern "C" void ClipperRegistry_Cull_m3550 (ClipperRegistry_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Register(UnityEngine.UI.IClipper)
extern "C" void ClipperRegistry_Register_m3551 (Object_t * __this /* static, unused */, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Unregister(UnityEngine.UI.IClipper)
extern "C" void ClipperRegistry_Unregister_m3552 (Object_t * __this /* static, unused */, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;

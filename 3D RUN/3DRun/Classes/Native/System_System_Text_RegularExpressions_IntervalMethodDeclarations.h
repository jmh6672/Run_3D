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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern "C" void Interval__ctor_m7108 (Interval_t1457 * __this, int32_t ___low, int32_t ___high, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern "C" Interval_t1457  Interval_get_Empty_m7109 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern "C" bool Interval_get_IsDiscontiguous_m7110 (Interval_t1457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern "C" bool Interval_get_IsSingleton_m7111 (Interval_t1457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern "C" bool Interval_get_IsEmpty_m7112 (Interval_t1457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern "C" int32_t Interval_get_Size_m7113 (Interval_t1457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_IsDisjoint_m7114 (Interval_t1457 * __this, Interval_t1457  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_IsAdjacent_m7115 (Interval_t1457 * __this, Interval_t1457  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Contains_m7116 (Interval_t1457 * __this, Interval_t1457  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern "C" bool Interval_Contains_m7117 (Interval_t1457 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Intersects_m7118 (Interval_t1457 * __this, Interval_t1457  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern "C" void Interval_Merge_m7119 (Interval_t1457 * __this, Interval_t1457  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern "C" int32_t Interval_CompareTo_m7120 (Interval_t1457 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Interval_t1457_marshal(const Interval_t1457& unmarshaled, Interval_t1457_marshaled& marshaled);
extern "C" void Interval_t1457_marshal_back(const Interval_t1457_marshaled& marshaled, Interval_t1457& unmarshaled);
extern "C" void Interval_t1457_marshal_cleanup(Interval_t1457_marshaled& marshaled);

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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern "C" void SphericalHarmonicsL2_Clear_m4707 (SphericalHarmonicsL2_t966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m4708 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t966 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m4709 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t966 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m4710 (SphericalHarmonicsL2_t966 * __this, Color_t659  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m4711 (Object_t * __this /* static, unused */, Color_t659  ___color, SphericalHarmonicsL2_t966 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m4712 (Object_t * __this /* static, unused */, Color_t659 * ___color, SphericalHarmonicsL2_t966 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m4713 (SphericalHarmonicsL2_t966 * __this, Vector3_t417  ___direction, Color_t659  ___color, float ___intensity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m4714 (Object_t * __this /* static, unused */, Vector3_t417  ___direction, Color_t659  ___color, SphericalHarmonicsL2_t966 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m4715 (Object_t * __this /* static, unused */, Vector3_t417 * ___direction, Color_t659 * ___color, SphericalHarmonicsL2_t966 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern "C" float SphericalHarmonicsL2_get_Item_m4716 (SphericalHarmonicsL2_t966 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void SphericalHarmonicsL2_set_Item_m4717 (SphericalHarmonicsL2_t966 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m4718 (SphericalHarmonicsL2_t966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern "C" bool SphericalHarmonicsL2_Equals_m4719 (SphericalHarmonicsL2_t966 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern "C" SphericalHarmonicsL2_t966  SphericalHarmonicsL2_op_Multiply_m4720 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t966  ___lhs, float ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" SphericalHarmonicsL2_t966  SphericalHarmonicsL2_op_Multiply_m4721 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t966  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" SphericalHarmonicsL2_t966  SphericalHarmonicsL2_op_Addition_m4722 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t966  ___lhs, SphericalHarmonicsL2_t966  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m4723 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t966  ___lhs, SphericalHarmonicsL2_t966  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m4724 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t966  ___lhs, SphericalHarmonicsL2_t966  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

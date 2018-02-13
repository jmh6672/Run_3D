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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m4577 (Quaternion_t589 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t589  Quaternion_get_identity_m2369 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m4578 (Object_t * __this /* static, unused */, Quaternion_t589  ___a, Quaternion_t589  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t589  Quaternion_Lerp_m2366 (Object_t * __this /* static, unused */, Quaternion_t589  ___a, Quaternion_t589  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t589  Quaternion_INTERNAL_CALL_Lerp_m4579 (Object_t * __this /* static, unused */, Quaternion_t589 * ___a, Quaternion_t589 * ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t589  Quaternion_Inverse_m4275 (Object_t * __this /* static, unused */, Quaternion_t589  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t589  Quaternion_INTERNAL_CALL_Inverse_m4580 (Object_t * __this /* static, unused */, Quaternion_t589 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m4581 (Quaternion_t589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t417  Quaternion_get_eulerAngles_m4582 (Quaternion_t589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t589  Quaternion_Euler_m4583 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t589  Quaternion_Euler_m4584 (Object_t * __this /* static, unused */, Vector3_t417  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t417  Quaternion_Internal_ToEulerRad_m4585 (Object_t * __this /* static, unused */, Quaternion_t589  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t417  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m4586 (Object_t * __this /* static, unused */, Quaternion_t589 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t589  Quaternion_Internal_FromEulerRad_m4587 (Object_t * __this /* static, unused */, Vector3_t417  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t589  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m4588 (Object_t * __this /* static, unused */, Vector3_t417 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m4589 (Quaternion_t589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m4590 (Quaternion_t589 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t589  Quaternion_op_Multiply_m4591 (Object_t * __this /* static, unused */, Quaternion_t589  ___lhs, Quaternion_t589  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t417  Quaternion_op_Multiply_m4076 (Object_t * __this /* static, unused */, Quaternion_t589  ___rotation, Vector3_t417  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m4191 (Object_t * __this /* static, unused */, Quaternion_t589  ___lhs, Quaternion_t589  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

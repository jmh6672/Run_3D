#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Red_rotateThis
struct Red_rotateThis_t594;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScript_Red_rotateThis.h"
#include "AssemblyU2DUnityScript_Red_rotateThisMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_Space.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Red_rotateThis::.ctor()
extern "C" void Red_rotateThis__ctor_m2383 (Red_rotateThis_t594 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1987(__this, /*hidden argument*/NULL);
		__this->___rotationSpeedX_2 = (((float)((float)((int32_t)90))));
		__this->___local_5 = 1;
		float L_0 = (__this->___rotationSpeedX_2);
		float L_1 = (__this->___rotationSpeedY_3);
		float L_2 = (__this->___rotationSpeedZ_4);
		Vector3_t417  L_3 = {0};
		Vector3__ctor_m2368(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___rotationVector_6 = L_3;
		return;
	}
}
// System.Void Red_rotateThis::Update()
extern "C" void Red_rotateThis_Update_m2384 (Red_rotateThis_t594 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___local_5);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		Transform_t404 * L_1 = Component_get_transform_m2314(__this, /*hidden argument*/NULL);
		float L_2 = (__this->___rotationSpeedX_2);
		float L_3 = (__this->___rotationSpeedY_3);
		float L_4 = (__this->___rotationSpeedZ_4);
		Vector3_t417  L_5 = {0};
		Vector3__ctor_m2368(&L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m2317(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t417  L_7 = Vector3_op_Multiply_m2376(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m2386(L_1, L_7, /*hidden argument*/NULL);
	}

IL_0038:
	{
		bool L_8 = (__this->___local_5);
		if (L_8)
		{
			goto IL_0070;
		}
	}
	{
		Transform_t404 * L_9 = Component_get_transform_m2314(__this, /*hidden argument*/NULL);
		float L_10 = (__this->___rotationSpeedX_2);
		float L_11 = (__this->___rotationSpeedY_3);
		float L_12 = (__this->___rotationSpeedZ_4);
		Vector3_t417  L_13 = {0};
		Vector3__ctor_m2368(&L_13, L_10, L_11, L_12, /*hidden argument*/NULL);
		float L_14 = Time_get_deltaTime_m2317(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t417  L_15 = Vector3_op_Multiply_m2376(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Rotate_m2387(L_9, L_15, 0, /*hidden argument*/NULL);
	}

IL_0070:
	{
		return;
	}
}
// System.Void Red_rotateThis::Main()
extern "C" void Red_rotateThis_Main_m2385 (Red_rotateThis_t594 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

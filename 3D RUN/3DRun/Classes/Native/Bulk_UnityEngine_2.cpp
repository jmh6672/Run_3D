﻿#include "il2cpp-config.h"

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

// UnityEngine.StackTraceUtility
struct StackTraceUtility_t1078;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Diagnostics.StackTrace
struct StackTrace_t1107;
// UnityEngine.UnityException
struct UnityException_t883;
// System.Exception
struct Exception_t492;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1108;
// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t1079;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t1080;
// UnityEngine.TrackedReference
struct TrackedReference_t1015;
struct TrackedReference_t1015_marshaled;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t1082;
// UnityEngine.Object
struct Object_t498;
struct Object_t498_marshaled;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1083;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Delegate
struct Delegate_t453;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t1084;
// UnityEngine.Events.UnityAction
struct UnityAction_t697;
// System.Object[]
struct ObjectU5BU5D_t488;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1086;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t1091;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t1087;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1089;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1106;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t665;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t1092;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t1093;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t1094;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t1096;
// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t987;
// System.IAsyncResult
struct IAsyncResult_t73;
// System.AsyncCallback
struct AsyncCallback_t74;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackTrace.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
#include "mscorlib_System_Exception.h"
#include "mscorlib_System_Text_StringBuilder.h"
#include "mscorlib_System_ArgumentException.h"
#include "mscorlib_System_ExceptionMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_Reflection_MemberInfo.h"
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Char.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "mscorlib_System_Diagnostics_StackFrame.h"
#include "mscorlib_System_Reflection_MethodBase.h"
#include "mscorlib_System_Reflection_ParameterInfo.h"
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_UnityException.h"
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"
#include "mscorlib_System_AttributeMethodDeclarations.h"
#include "mscorlib_System_Attribute.h"
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#include "UnityEngine_UnityEngine_Font.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "UnityEngine_UnityEngine_TrackedReference.h"
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"
#include "mscorlib_System_IntPtrMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException.h"
#include "mscorlib_System_Delegate.h"
#include "mscorlib_System_DelegateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
#include "mscorlib_System_Reflection_ConstructorInfo.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_40MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_40.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_41MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_41.h"
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
#include "mscorlib_System_Predicate_1_gen_2.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_Binder.h"
#include "mscorlib_System_Reflection_ParameterModifier.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
#include "mscorlib_System_Enum.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensions.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegate.h"
#include "UnityEngine_UnityEngine_Advertisements_UnityAdsDelegateMethodDeclarations.h"
#include "mscorlib_System_AsyncCallback.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m5242 (StackTraceUtility_t1078 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1078_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m5243 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTraceUtility_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t1078_StaticFields*)StackTraceUtility_t1078_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t1078_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m5244 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		((StackTraceUtility_t1078_StaticFields*)StackTraceUtility_t1078_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t1107_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1078_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m5245 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		StackTraceUtility_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t1107 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t1107 * L_0 = (StackTrace_t1107 *)il2cpp_codegen_object_new (StackTrace_t1107_il2cpp_TypeInfo_var);
		StackTrace__ctor_m5363(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t1107 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m5250(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_ToString_m5364(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral522;
extern Il2CppCodeGenString* _stringLiteral523;
extern Il2CppCodeGenString* _stringLiteral524;
extern Il2CppCodeGenString* _stringLiteral525;
extern Il2CppCodeGenString* _stringLiteral526;
extern Il2CppCodeGenString* _stringLiteral527;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m5246 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral522 = il2cpp_codegen_string_literal_from_index(522);
		_stringLiteral523 = il2cpp_codegen_string_literal_from_index(523);
		_stringLiteral524 = il2cpp_codegen_string_literal_from_index(524);
		_stringLiteral525 = il2cpp_codegen_string_literal_from_index(525);
		_stringLiteral526 = il2cpp_codegen_string_literal_from_index(526);
		_stringLiteral527 = il2cpp_codegen_string_literal_from_index(527);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)CastclassSealed(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m5365(L_1, _stringLiteral522, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m5365(L_3, _stringLiteral523, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m5365(L_5, _stringLiteral524, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m5365(L_7, _stringLiteral525, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m5365(L_9, _stringLiteral526, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m5365(L_11, _stringLiteral527, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1078_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral528;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m5247 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTraceUtility_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		_stringLiteral528 = il2cpp_codegen_string_literal_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m5248(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m2020(NULL /*static, unused*/, L_3, _stringLiteral528, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t903_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t492_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t361_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t1107_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1078_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral529;
extern Il2CppCodeGenString* _stringLiteral530;
extern Il2CppCodeGenString* _stringLiteral528;
extern Il2CppCodeGenString* _stringLiteral107;
extern Il2CppCodeGenString* _stringLiteral531;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m5248 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t903_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(637);
		Exception_t492_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(305);
		StringBuilder_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTrace_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(743);
		StackTraceUtility_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		_stringLiteral529 = il2cpp_codegen_string_literal_from_index(529);
		_stringLiteral530 = il2cpp_codegen_string_literal_from_index(530);
		_stringLiteral528 = il2cpp_codegen_string_literal_from_index(528);
		_stringLiteral107 = il2cpp_codegen_string_literal_from_index(107);
		_stringLiteral531 = il2cpp_codegen_string_literal_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t492 * V_0 = {0};
	StringBuilder_t361 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t1107 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t903 * L_1 = (ArgumentException_t903 *)il2cpp_codegen_object_new (ArgumentException_t903_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4314(L_1, _stringLiteral529, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t492 *)IsInstClass(L_2, Exception_t492_il2cpp_TypeInfo_var));
		Exception_t492 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t903 * L_4 = (ArgumentException_t903 *)il2cpp_codegen_object_new (ArgumentException_t903_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4314(L_4, _stringLiteral530, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0029:
	{
		Exception_t492 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t492 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m4133(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t361 * L_10 = (StringBuilder_t361 *)il2cpp_codegen_object_new (StringBuilder_t361_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2226(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m4133(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t492 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t492 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2020(NULL /*static, unused*/, L_19, _stringLiteral528, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t492 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t492 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t492 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m5366(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m4133(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m1926(NULL /*static, unused*/, L_33, _stringLiteral107, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m1926(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t492 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t492 * L_41 = (Exception_t492 *)VirtFuncInvoker0< Exception_t492 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1978(NULL /*static, unused*/, _stringLiteral531, L_42, _stringLiteral528, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t492 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t492 * L_46 = (Exception_t492 *)VirtFuncInvoker0< Exception_t492 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t492 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t361 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m1926(NULL /*static, unused*/, L_49, _stringLiteral528, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m5367(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t1107 * L_51 = (StackTrace_t1107 *)il2cpp_codegen_object_new (StackTrace_t1107_il2cpp_TypeInfo_var);
		StackTrace__ctor_m5363(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t361 * L_52 = V_1;
		StackTrace_t1107 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m5250(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m5367(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t361 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = StringBuilder_ToString_m2227(L_56, /*hidden argument*/NULL);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t735_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t361_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1078_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral532;
extern Il2CppCodeGenString* _stringLiteral533;
extern Il2CppCodeGenString* _stringLiteral534;
extern Il2CppCodeGenString* _stringLiteral535;
extern Il2CppCodeGenString* _stringLiteral536;
extern Il2CppCodeGenString* _stringLiteral537;
extern Il2CppCodeGenString* _stringLiteral538;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral539;
extern Il2CppCodeGenString* _stringLiteral540;
extern Il2CppCodeGenString* _stringLiteral541;
extern Il2CppCodeGenString* _stringLiteral542;
extern Il2CppCodeGenString* _stringLiteral543;
extern Il2CppCodeGenString* _stringLiteral544;
extern Il2CppCodeGenString* _stringLiteral528;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m5249 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		CharU5BU5D_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(583);
		StringBuilder_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		StackTraceUtility_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		_stringLiteral532 = il2cpp_codegen_string_literal_from_index(532);
		_stringLiteral533 = il2cpp_codegen_string_literal_from_index(533);
		_stringLiteral534 = il2cpp_codegen_string_literal_from_index(534);
		_stringLiteral535 = il2cpp_codegen_string_literal_from_index(535);
		_stringLiteral536 = il2cpp_codegen_string_literal_from_index(536);
		_stringLiteral537 = il2cpp_codegen_string_literal_from_index(537);
		_stringLiteral538 = il2cpp_codegen_string_literal_from_index(538);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral539 = il2cpp_codegen_string_literal_from_index(539);
		_stringLiteral540 = il2cpp_codegen_string_literal_from_index(540);
		_stringLiteral541 = il2cpp_codegen_string_literal_from_index(541);
		_stringLiteral542 = il2cpp_codegen_string_literal_from_index(542);
		_stringLiteral543 = il2cpp_codegen_string_literal_from_index(543);
		_stringLiteral544 = il2cpp_codegen_string_literal_from_index(544);
		_stringLiteral528 = il2cpp_codegen_string_literal_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t246* V_0 = {0};
	StringBuilder_t361 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t735* L_3 = ((CharU5BU5D_t735*)SZArrayNew(CharU5BU5D_t735_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0, sizeof(uint16_t))) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t246* L_4 = String_Split_m5368(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m4133(L_5, /*hidden argument*/NULL);
		StringBuilder_t361 * L_7 = (StringBuilder_t361 *)il2cpp_codegen_object_new (StringBuilder_t361_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2226(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t246* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t246* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))));
		String_t* L_13 = String_Trim_m5366((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12, sizeof(String_t*))), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9, sizeof(String_t*))) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t246* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_16)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t246* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19, sizeof(String_t*)));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m4133(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m4151(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m5365(L_24, _stringLiteral532, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m5365(L_27, _stringLiteral533, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t246* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_31)->max_length))))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m5246(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t246* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m5246(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36, sizeof(String_t*))), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m5369(L_38, _stringLiteral534, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m4152(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m5369(L_44, _stringLiteral535, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m5369(L_46, _stringLiteral536, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m5369(L_48, _stringLiteral537, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m5365(L_51, _stringLiteral538, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m5370(L_53, _stringLiteral9, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m5365(L_55, _stringLiteral539, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m4175(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m5369(L_59, _stringLiteral540, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m5371(L_62, _stringLiteral9, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m4175(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m5372(L_73, _stringLiteral541, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t1078_StaticFields*)StackTraceUtility_t1078_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m5372(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m5373(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m5374(L_82, _stringLiteral542, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m4175(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m4177(L_88, L_89, _stringLiteral543, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m4133(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m4177(L_91, L_93, _stringLiteral544, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t361 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m1926(NULL /*static, unused*/, L_96, _stringLiteral528, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m5367(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t246* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_100)->max_length)))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t361 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = StringBuilder_ToString_m2227(L_101, /*hidden argument*/NULL);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t361_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t1078_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral424;
extern Il2CppCodeGenString* _stringLiteral545;
extern Il2CppCodeGenString* _stringLiteral546;
extern Il2CppCodeGenString* _stringLiteral53;
extern Il2CppCodeGenString* _stringLiteral544;
extern Il2CppCodeGenString* _stringLiteral547;
extern Il2CppCodeGenString* _stringLiteral548;
extern Il2CppCodeGenString* _stringLiteral543;
extern Il2CppCodeGenString* _stringLiteral528;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m5250 (Object_t * __this /* static, unused */, StackTrace_t1107 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		StackTraceUtility_t1078_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(742);
		_stringLiteral424 = il2cpp_codegen_string_literal_from_index(424);
		_stringLiteral545 = il2cpp_codegen_string_literal_from_index(545);
		_stringLiteral546 = il2cpp_codegen_string_literal_from_index(546);
		_stringLiteral53 = il2cpp_codegen_string_literal_from_index(53);
		_stringLiteral544 = il2cpp_codegen_string_literal_from_index(544);
		_stringLiteral547 = il2cpp_codegen_string_literal_from_index(547);
		_stringLiteral548 = il2cpp_codegen_string_literal_from_index(548);
		_stringLiteral543 = il2cpp_codegen_string_literal_from_index(543);
		_stringLiteral528 = il2cpp_codegen_string_literal_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t361 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t1122 * V_2 = {0};
	MethodBase_t1123 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t1124* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t361 * L_0 = (StringBuilder_t361 *)il2cpp_codegen_object_new (StringBuilder_t361_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2226(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t1107 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t1122 * L_3 = (StackFrame_t1122 *)VirtFuncInvoker1< StackFrame_t1122 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t1122 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t1123 * L_5 = (MethodBase_t1123 *)VirtFuncInvoker0< MethodBase_t1123 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t1123 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t1123 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m4133(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t361 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m5367(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t361 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m5367(L_17, _stringLiteral424, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t361 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m5367(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t361 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m5367(L_21, _stringLiteral545, /*hidden argument*/NULL);
		StringBuilder_t361 * L_22 = V_0;
		MethodBase_t1123 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m5367(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t361 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m5367(L_25, _stringLiteral546, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t1123 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t1124* L_27 = (ParameterInfoU5BU5D_t1124*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1124* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t361 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m5367(L_29, _stringLiteral53, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t361 * L_30 = V_0;
		ParameterInfoU5BU5D_t1124* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t1125 **)(ParameterInfo_t1125 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t1125 *))));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1125 **)(ParameterInfo_t1125 **)SZArrayLdElema(L_31, L_33, sizeof(ParameterInfo_t1125 *))));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m5367(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t1124* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_38)->max_length)))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t361 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m5367(L_39, _stringLiteral544, /*hidden argument*/NULL);
		StackFrame_t1122 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m1935(NULL /*static, unused*/, L_44, _stringLiteral547, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m1935(NULL /*static, unused*/, L_47, _stringLiteral548, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t361 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m5367(L_49, _stringLiteral543, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t1078_StaticFields*)StackTraceUtility_t1078_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m5365(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t1078_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t1078_StaticFields*)StackTraceUtility_t1078_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m4133(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m4133(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t1078_StaticFields*)StackTraceUtility_t1078_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m4133(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m4152(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t361 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m5367(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t361 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m5367(L_63, _stringLiteral545, /*hidden argument*/NULL);
		StringBuilder_t361 * L_64 = V_0;
		StackFrame_t1122 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m2344((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m5367(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t361 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m5367(L_68, _stringLiteral544, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t361 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m5367(L_69, _stringLiteral528, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t1107 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t361 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = StringBuilder_ToString_m2227(L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Void UnityEngine.UnityException::.ctor()
extern Il2CppCodeGenString* _stringLiteral549;
extern "C" void UnityException__ctor_m5251 (UnityException_t883 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral549 = il2cpp_codegen_string_literal_from_index(549);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m5348(__this, _stringLiteral549, /*hidden argument*/NULL);
		Exception_set_HResult_m5375(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m5252 (UnityException_t883 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m5348(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m5375(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m5253 (UnityException_t883 * __this, String_t* ___message, Exception_t492 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t492 * L_1 = ___innerException;
		Exception__ctor_m5376(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m5375(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m5254 (UnityException_t883 * __this, SerializationInfo_t1108 * ___info, StreamingContext_t1109  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1108 * L_0 = ___info;
		StreamingContext_t1109  L_1 = ___context;
		Exception__ctor_m5377(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m5255 (SharedBetweenAnimatorsAttribute_t1079 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5346(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m5256 (StateMachineBehaviour_t1080 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m4412(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Mathf_t855_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m5257 (TextGenerationSettings_t849 * __this, Color_t659  ___left, Color_t659  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t855_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&___left)->___r_0);
		float L_1 = ((&___right)->___r_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = ((&___left)->___g_1);
		float L_4 = ((&___right)->___g_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6 = ((&___left)->___b_2);
		float L_7 = ((&___right)->___b_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9 = ((&___left)->___a_3);
		float L_10 = ((&___right)->___a_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_11 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t855_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m5258 (TextGenerationSettings_t849 * __this, Vector2_t418  ___left, Vector2_t418  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t855_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t855_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m5259 (TextGenerationSettings_t849 * __this, TextGenerationSettings_t849  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t855_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t659  L_0 = (__this->___color_1);
		Color_t659  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m5257(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t855_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m3872(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t418  L_35 = (__this->___generationExtents_14);
		Vector2_t418  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m5258(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t418  L_38 = (__this->___pivot_15);
		Vector2_t418  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m5258(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t691 * L_41 = (__this->___font_0);
		Font_t691 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m1994(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t1015_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m5260 (TrackedReference_t1015 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t1015_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(744);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m5262(NULL /*static, unused*/, ((TrackedReference_t1015 *)IsInstClass(L_0, TrackedReference_t1015_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m5261 (TrackedReference_t1015 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m5378(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m5262 (Object_t * __this /* static, unused */, TrackedReference_t1015 * ___x, TrackedReference_t1015 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t1015 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t1015 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t1015 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m2215(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t1015 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m2215(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t1015 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t1015 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m2215(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t1015_marshal(const TrackedReference_t1015& unmarshaled, TrackedReference_t1015_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
extern "C" void TrackedReference_t1015_marshal_back(const TrackedReference_t1015_marshaled& marshaled, TrackedReference_t1015& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t1015_marshal_cleanup(TrackedReference_t1015_marshaled& marshaled)
{
}
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m5263 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t498 * ArgumentCache_get_unityObjectArgument_m5264 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		Object_t498 * L_0 = (__this->___m_ObjectArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5265 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m5266 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_5);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m5267 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_6);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m5268 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_7);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m5269 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_8);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t310_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral550;
extern Il2CppCodeGenString* _stringLiteral551;
extern Il2CppCodeGenString* _stringLiteral552;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m5270 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Regex_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(250);
		_stringLiteral550 = il2cpp_codegen_string_literal_from_index(550);
		_stringLiteral551 = il2cpp_codegen_string_literal_from_index(551);
		_stringLiteral552 = il2cpp_codegen_string_literal_from_index(552);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1958(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t310_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m5379(NULL /*static, unused*/, L_2, _stringLiteral550, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m5379(NULL /*static, unused*/, L_5, _stringLiteral551, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_4);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m5379(NULL /*static, unused*/, L_8, _stringLiteral552, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_4 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m5271 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m5270(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m5272 (ArgumentCache_t1082 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m5270(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m5273 (BaseInvokableCall_t1083 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t504_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral553;
extern Il2CppCodeGenString* _stringLiteral554;
extern "C" void BaseInvokableCall__ctor_m5274 (BaseInvokableCall_t1083 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		_stringLiteral553 = il2cpp_codegen_string_literal_from_index(553);
		_stringLiteral554 = il2cpp_codegen_string_literal_from_index(554);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t504 * L_1 = (ArgumentNullException_t504 *)il2cpp_codegen_object_new (ArgumentNullException_t504_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1984(L_1, _stringLiteral553, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t504 * L_3 = (ArgumentNullException_t504 *)il2cpp_codegen_object_new (ArgumentNullException_t504_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1984(L_3, _stringLiteral554, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern TypeInfo* Object_t498_il2cpp_TypeInfo_var;
extern "C" bool BaseInvokableCall_AllowInvoke_m5275 (Object_t * __this /* static, unused */, Delegate_t453 * ___delegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t498 * V_1 = {0};
	{
		Delegate_t453 * L_0 = ___delegate;
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m5380(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return 1;
	}

IL_000f:
	{
		Object_t * L_3 = V_0;
		V_1 = ((Object_t498 *)IsInstClass(L_3, Object_t498_il2cpp_TypeInfo_var));
		Object_t498 * L_4 = V_1;
		bool L_5 = Object_ReferenceEquals_m1929(NULL /*static, unused*/, L_4, NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Object_t498 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1962(NULL /*static, unused*/, L_6, (Object_t498 *)NULL, /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		return 1;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t697_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t697_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m5276 (InvokableCall_t1084 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t697_0_0_0_var = il2cpp_codegen_type_from_index(543);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		UnityAction_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m5274(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t697 * L_2 = (__this->___Delegate_0);
		MethodInfo_t * L_3 = ___theFunction;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(UnityAction_t697_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_5 = ___target;
		Delegate_t453 * L_6 = NetFxCoreExtensions_CreateDelegate_m5320(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t453 * L_7 = Delegate_Combine_m2007(NULL /*static, unused*/, L_2, ((UnityAction_t697 *)CastclassSealed(L_6, UnityAction_t697_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t697 *)CastclassSealed(L_7, UnityAction_t697_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern TypeInfo* UnityAction_t697_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m5277 (InvokableCall_t1084 * __this, UnityAction_t697 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(543);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m5273(__this, /*hidden argument*/NULL);
		UnityAction_t697 * L_0 = (__this->___Delegate_0);
		UnityAction_t697 * L_1 = ___action;
		Delegate_t453 * L_2 = Delegate_Combine_m2007(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t697 *)CastclassSealed(L_2, UnityAction_t697_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m5278 (InvokableCall_t1084 * __this, ObjectU5BU5D_t488* ___args, const MethodInfo* method)
{
	{
		UnityAction_t697 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m5275(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t697 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		UnityAction_Invoke_m4032(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m5279 (InvokableCall_t1084 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t697 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m5380(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t697 * L_3 = (__this->___Delegate_0);
		MethodInfo_t * L_4 = NetFxCoreExtensions_GetMethodInfo_m5321(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t1082_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m5280 (PersistentCall_t1086 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t1082 * L_0 = (ArgumentCache_t1082 *)il2cpp_codegen_object_new (ArgumentCache_t1082_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m5263(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t498 * PersistentCall_get_target_m5281 (PersistentCall_t1086 * __this, const MethodInfo* method)
{
	{
		Object_t498 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m5282 (PersistentCall_t1086 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m5283 (PersistentCall_t1086 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t1082 * PersistentCall_get_arguments_m5284 (PersistentCall_t1086 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t1082 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m5285 (PersistentCall_t1086 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t498 * L_0 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m1962(NULL /*static, unused*/, L_0, (Object_t498 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m5282(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1958(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t1126_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1127_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1128_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t1129_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t1084_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5381_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5382_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5383_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5384_MethodInfo_var;
extern "C" BaseInvokableCall_t1083 * PersistentCall_GetRuntimeCall_m5286 (PersistentCall_t1086 * __this, UnityEventBase_t1091 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t1126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		CachedInvokableCall_1_t1127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(747);
		CachedInvokableCall_1_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(748);
		CachedInvokableCall_1_t1129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(749);
		InvokableCall_t1084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(750);
		CachedInvokableCall_1__ctor_m5381_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484449);
		CachedInvokableCall_1__ctor_m5382_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484450);
		CachedInvokableCall_1__ctor_m5383_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484451);
		CachedInvokableCall_1__ctor_m5384_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484452);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t1091 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t1083 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t1091 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m5299(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t1083 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t1091 * L_7 = ___theEvent;
		Object_t498 * L_8 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t1083 * L_10 = (BaseInvokableCall_t1083 *)VirtFuncInvoker2< BaseInvokableCall_t1083 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t498 * L_11 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t1082 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t1083 * L_14 = PersistentCall_GetObjectCall_m5287(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t498 * L_15 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t1082 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m5267(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1126 * L_19 = (CachedInvokableCall_1_t1126 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1126_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5381(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m5381_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t498 * L_20 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t1082 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m5266(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1127 * L_24 = (CachedInvokableCall_1_t1127 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1127_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5382(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m5382_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t498 * L_25 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t1082 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m5268(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1128 * L_29 = (CachedInvokableCall_1_t1128 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1128_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5383(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m5383_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t498 * L_30 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t1082 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m5269(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t1129 * L_34 = (CachedInvokableCall_1_t1129 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t1129_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5384(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m5384_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t498 * L_35 = PersistentCall_get_target_m5281(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t1084 * L_37 = (InvokableCall_t1084 *)il2cpp_codegen_object_new (InvokableCall_t1084_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m5276(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t1083 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t498_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t1131_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t488_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t1083_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t1083 * PersistentCall_GetObjectCall_m5287 (Object_t * __this /* static, unused */, Object_t498 * ___target, MethodInfo_t * ___method, ArgumentCache_t1082 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t498_0_0_0_var = il2cpp_codegen_type_from_index(513);
		CachedInvokableCall_1_t1131_0_0_0_var = il2cpp_codegen_type_from_index(751);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(752);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		TypeU5BU5D_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(731);
		ObjectU5BU5D_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		BaseInvokableCall_t1083_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(753);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t1130 * V_3 = {0};
	Object_t498 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Object_t498_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t1082 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5265(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1958(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t1082 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5265(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5385, L_5, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Object_t498_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t1131_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t1106* L_11 = ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0, sizeof(Type_t *))) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1106* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t1106* L_15 = ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Object_t498_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		TypeU5BU5D_t1106* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t1106* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t1130 * L_21 = (ConstructorInfo_t1130 *)VirtFuncInvoker1< ConstructorInfo_t1130 *, TypeU5BU5D_t1106* >::Invoke(67 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t1082 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t498 * L_23 = ArgumentCache_get_unityObjectArgument_m5264(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t498 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m1962(NULL /*static, unused*/, L_24, (Object_t498 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t498 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m1930(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t498 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t1130 * L_30 = V_3;
		ObjectU5BU5D_t488* L_31 = ((ObjectU5BU5D_t488*)SZArrayNew(ObjectU5BU5D_t488_il2cpp_TypeInfo_var, 3));
		Object_t498 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t488* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1, sizeof(Object_t *))) = (Object_t *)L_34;
		ObjectU5BU5D_t488* L_35 = L_33;
		Object_t498 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2, sizeof(Object_t *))) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m5386(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t1083 *)IsInstClass(L_37, BaseInvokableCall_t1083_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t1088_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5387_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m5288 (PersistentCallGroup_t1087 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(755);
		List_1__ctor_m5387_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484453);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		List_1_t1088 * L_0 = (List_1_t1088 *)il2cpp_codegen_object_new (List_1_t1088_il2cpp_TypeInfo_var);
		List_1__ctor_m5387(L_0, /*hidden argument*/List_1__ctor_m5387_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t1132_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t494_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m5388_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m5389_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m5390_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m5289 (PersistentCallGroup_t1087 * __this, InvokableCallList_t1089 * ___invokableList, UnityEventBase_t1091 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(756);
		IDisposable_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		List_1_GetEnumerator_m5388_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484454);
		Enumerator_get_Current_m5389_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484455);
		Enumerator_MoveNext_m5390_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484456);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t1086 * V_0 = {0};
	Enumerator_t1132  V_1 = {0};
	BaseInvokableCall_t1083 * V_2 = {0};
	Exception_t492 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t492 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1088 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t1132  L_1 = List_1_GetEnumerator_m5388(L_0, /*hidden argument*/List_1_GetEnumerator_m5388_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t1086 * L_2 = Enumerator_get_Current_m5389((&V_1), /*hidden argument*/Enumerator_get_Current_m5389_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t1086 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m5285(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t1086 * L_5 = V_0;
			UnityEventBase_t1091 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t1083 * L_7 = PersistentCall_GetRuntimeCall_m5286(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t1083 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t1089 * L_9 = ___invokableList;
			BaseInvokableCall_t1083 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m5291(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m5390((&V_1), /*hidden argument*/Enumerator_MoveNext_m5390_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t492 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t1132  L_12 = V_1;
		Enumerator_t1132  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t1132_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t494_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t492 *)
	}

IL_005b:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t1090_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5391_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m5290 (InvokableCallList_t1089 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1090_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(757);
		List_1__ctor_m5391_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484457);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1090 * L_0 = (List_1_t1090 *)il2cpp_codegen_object_new (List_1_t1090_il2cpp_TypeInfo_var);
		List_1__ctor_m5391(L_0, /*hidden argument*/List_1__ctor_m5391_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t1090 * L_1 = (List_1_t1090 *)il2cpp_codegen_object_new (List_1_t1090_il2cpp_TypeInfo_var);
		List_1__ctor_m5391(L_1, /*hidden argument*/List_1__ctor_m5391_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t1090 * L_2 = (List_1_t1090 *)il2cpp_codegen_object_new (List_1_t1090_il2cpp_TypeInfo_var);
		List_1__ctor_m5391(L_2, /*hidden argument*/List_1__ctor_m5391_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m5291 (InvokableCallList_t1089 * __this, BaseInvokableCall_t1083 * ___call, const MethodInfo* method)
{
	{
		List_1_t1090 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t1083 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t1083 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m5292 (InvokableCallList_t1089 * __this, BaseInvokableCall_t1083 * ___call, const MethodInfo* method)
{
	{
		List_1_t1090 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t1083 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t1083 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t1090_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t1133_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5391_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m5392_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m5393_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m5293 (InvokableCallList_t1089 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1090_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(757);
		Predicate_1_t1133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(758);
		List_1__ctor_m5391_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484457);
		Predicate_1__ctor_m5392_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484458);
		List_1_RemoveAll_m5393_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484459);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1090 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t1090 * L_0 = (List_1_t1090 *)il2cpp_codegen_object_new (List_1_t1090_il2cpp_TypeInfo_var);
		List_1__ctor_m5391(L_0, /*hidden argument*/List_1__ctor_m5391_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t1090 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t1083 * L_3 = (BaseInvokableCall_t1083 *)VirtFuncInvoker1< BaseInvokableCall_t1083 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t1090 * L_7 = V_0;
		List_1_t1090 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t1083 * L_10 = (BaseInvokableCall_t1083 *)VirtFuncInvoker1< BaseInvokableCall_t1083 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t1083 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t1090 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t1090 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t1090 * L_16 = V_0;
		List_1_t1090 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t1133 * L_19 = (Predicate_1_t1133 *)il2cpp_codegen_object_new (Predicate_1_t1133_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m5392(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m5392_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m5393(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m5393_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m5294 (InvokableCallList_t1089 * __this, const MethodInfo* method)
{
	{
		List_1_t1090 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m5394_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m5295 (InvokableCallList_t1089 * __this, ObjectU5BU5D_t488* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m5394_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484460);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_NeedsUpdate_3);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		List_1_t1090 * L_1 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_1);
		List_1_t1090 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t1090 * L_3 = (__this->___m_PersistentCalls_0);
		NullCheck(L_2);
		List_1_AddRange_m5394(L_2, L_3, /*hidden argument*/List_1_AddRange_m5394_MethodInfo_var);
		List_1_t1090 * L_4 = (__this->___m_ExecutingCalls_2);
		List_1_t1090 * L_5 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_4);
		List_1_AddRange_m5394(L_4, L_5, /*hidden argument*/List_1_AddRange_m5394_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 0;
	}

IL_003f:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0046:
	{
		List_1_t1090 * L_6 = (__this->___m_ExecutingCalls_2);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BaseInvokableCall_t1083 * L_8 = (BaseInvokableCall_t1083 *)VirtFuncInvoker1< BaseInvokableCall_t1083 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_6, L_7);
		ObjectU5BU5D_t488* L_9 = ___parameters;
		NullCheck(L_8);
		VirtActionInvoker1< ObjectU5BU5D_t488* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		List_1_t1090 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t1089_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t1087_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m5296 (UnityEventBase_t1091 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t1089_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(759);
		PersistentCallGroup_t1087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(760);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1915(__this, /*hidden argument*/NULL);
		InvokableCallList_t1089 * L_0 = (InvokableCallList_t1089 *)il2cpp_codegen_object_new (InvokableCallList_t1089_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m5290(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t1087 * L_1 = (PersistentCallGroup_t1087 *)il2cpp_codegen_object_new (PersistentCallGroup_t1087_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m5288(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1930(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5297 (UnityEventBase_t1091 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5298 (UnityEventBase_t1091 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m5301(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1930(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t498_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m5299 (UnityEventBase_t1091 * __this, PersistentCall_t1086 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t498_0_0_0_var = il2cpp_codegen_type_from_index(513);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Object_t498_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t1086 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t1082 * L_2 = PersistentCall_get_arguments_m5284(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5265(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m1958(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t1086 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t1082 * L_6 = PersistentCall_get_arguments_m5284(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5265(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m5385, L_7, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Object_t498_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t1086 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m5282(L_11, /*hidden argument*/NULL);
		PersistentCall_t1086 * L_13 = ___call;
		NullCheck(L_13);
		Object_t498 * L_14 = PersistentCall_get_target_m5281(L_13, /*hidden argument*/NULL);
		PersistentCall_t1086 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m5283(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m5300(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t586_0_0_0_var;
extern const Il2CppType* Int32_t490_0_0_0_var;
extern const Il2CppType* Boolean_t489_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t498_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t1106_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m5300 (UnityEventBase_t1091 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t586_0_0_0_var = il2cpp_codegen_type_from_index(417);
		Int32_t490_0_0_0_var = il2cpp_codegen_type_from_index(4);
		Boolean_t489_0_0_0_var = il2cpp_codegen_type_from_index(3);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(1);
		Object_t498_0_0_0_var = il2cpp_codegen_type_from_index(513);
		TypeU5BU5D_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(731);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t1106* G_B10_2 = {0};
	TypeU5BU5D_t1106* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t1106* G_B9_2 = {0};
	TypeU5BU5D_t1106* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m5307(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t1106* L_10 = ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Single_t586_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0, sizeof(Type_t *))) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m5307(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t1106* L_15 = ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Int32_t490_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m5307(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t1106* L_20 = ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Boolean_t489_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0, sizeof(Type_t *))) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m5307(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t1106* L_25 = ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0, sizeof(Type_t *))) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m5307(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t1106* L_30 = ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Object_t498_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1, sizeof(Type_t *))) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m5307(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m5301 (UnityEventBase_t1091 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t1089 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m5294(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m5302 (UnityEventBase_t1091 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t1087 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t1089 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m5289(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m5303 (UnityEventBase_t1091 * __this, BaseInvokableCall_t1083 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t1089 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t1083 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m5292(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m5304 (UnityEventBase_t1091 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t1089 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m5293(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m5305 (UnityEventBase_t1091 * __this, ObjectU5BU5D_t488* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m5302(__this, /*hidden argument*/NULL);
		InvokableCallList_t1089 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t488* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m5295(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral311;
extern "C" String_t* UnityEventBase_ToString_m5306 (UnityEventBase_t1091 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		_stringLiteral311 = il2cpp_codegen_string_literal_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m5395(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1930(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2020(NULL /*static, unused*/, L_0, _stringLiteral311, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m5307 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t1106* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t1124* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t1125 * V_5 = {0};
	ParameterInfoU5BU5D_t1124* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m1930(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t1106* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t1119 *, TypeU5BU5D_t1106*, ParameterModifierU5BU5D_t1120* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t1119 *)NULL, L_4, (ParameterModifierU5BU5D_t1120*)(ParameterModifierU5BU5D_t1120*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t1124* L_8 = (ParameterInfoU5BU5D_t1124*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1124* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t1124* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t1124* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t1125 **)(ParameterInfo_t1125 **)SZArrayLdElema(L_10, L_12, sizeof(ParameterInfo_t1125 *)));
		TypeU5BU5D_t1106* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15, sizeof(Type_t *)));
		ParameterInfo_t1125 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t1124* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_26)->max_length)))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1931(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t488_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m3926 (UnityEvent_t665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t488*)SZArrayNew(ObjectU5BU5D_t488_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m5296(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m4016 (UnityEvent_t665 * __this, UnityAction_t697 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t697 * L_0 = ___call;
		BaseInvokableCall_t1083 * L_1 = UnityEvent_GetDelegate_m5310(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m5303(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1106_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m5308 (UnityEvent_t665 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1106_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(731);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m5307(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t1106*)SZArrayNew(TypeU5BU5D_t1106_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t1084_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t1083 * UnityEvent_GetDelegate_m5309 (UnityEvent_t665 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t1084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(750);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t1084 * L_2 = (InvokableCall_t1084 *)il2cpp_codegen_object_new (InvokableCall_t1084_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m5276(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t1084_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t1083 * UnityEvent_GetDelegate_m5310 (Object_t * __this /* static, unused */, UnityAction_t697 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t1084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(750);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t697 * L_0 = ___action;
		InvokableCall_t1084 * L_1 = (InvokableCall_t1084 *)il2cpp_codegen_object_new (InvokableCall_t1084_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m5277(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m3928 (UnityEvent_t665 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t488* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m5305(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m5311 (DefaultValueAttribute_t1092 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m5346(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m5312 (DefaultValueAttribute_t1092 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t1092_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m5313 (DefaultValueAttribute_t1092 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t1092_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(761);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t1092 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t1092 *)IsInstClass(L_0, DefaultValueAttribute_t1092_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t1092 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t1092 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m5312(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t1092 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m5312(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m5314 (DefaultValueAttribute_t1092 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m5396(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m5315 (ExcludeFromDocsAttribute_t1093 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5346(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m5316 (FormerlySerializedAsAttribute_t1094 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m5346(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t1095_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m5317 (TypeInferenceRuleAttribute_t1096 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t1095_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(762);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t1095_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m5318(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m5318 (TypeInferenceRuleAttribute_t1096 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m5346(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m5319 (TypeInferenceRuleAttribute_t1096 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" Delegate_t453 * NetFxCoreExtensions_CreateDelegate_m5320 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType;
		Object_t * L_1 = ___target;
		MethodInfo_t * L_2 = ___self;
		Delegate_t453 * L_3 = Delegate_CreateDelegate_m5397(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m5321 (Object_t * __this /* static, unused */, Delegate_t453 * ___self, const MethodInfo* method)
{
	{
		Delegate_t453 * L_0 = ___self;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m5398(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate__ctor_m5322 (UnityAdsDelegate_t987 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::Invoke()
extern "C" void UnityAdsDelegate_Invoke_m5323 (UnityAdsDelegate_t987 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAdsDelegate_Invoke_m5323((UnityAdsDelegate_t987 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAdsDelegate_t987(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_BeginInvoke_m5324 (UnityAdsDelegate_t987 * __this, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Advertisements.UnityAdsDelegate::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_EndInvoke_m5325 (UnityAdsDelegate_t987 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m4015 (UnityAction_t697 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m4032 (UnityAction_t697 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m4032((UnityAction_t697 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t697(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m5326 (UnityAction_t697 * __this, AsyncCallback_t74 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m5327 (UnityAction_t697 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

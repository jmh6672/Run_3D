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

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t802;
// UnityEngine.RectTransform
struct RectTransform_t590;
// UnityEngine.Transform
struct Transform_t404;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t852;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t806;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t592;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
extern "C" void LayoutRebuilder__ctor_m3700 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m3701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Initialize(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_Initialize_m3702 (LayoutRebuilder_t802 * __this, RectTransform_t590 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
extern "C" void LayoutRebuilder_Clear_m3703 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m3704 (Object_t * __this /* static, unused */, RectTransform_t590 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t404 * LayoutRebuilder_get_transform_m3705 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m3706 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m3707 (Object_t * __this /* static, unused */, List_1_t852 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ForceRebuildLayoutImmediate_m3708 (Object_t * __this /* static, unused */, RectTransform_t590 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_Rebuild_m3709 (LayoutRebuilder_t802 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m3710 (LayoutRebuilder_t802 * __this, RectTransform_t590 * ___rect, UnityAction_1_t806 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m3711 (LayoutRebuilder_t802 * __this, RectTransform_t590 * ___rect, UnityAction_1_t806 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m3712 (Object_t * __this /* static, unused */, RectTransform_t590 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m3713 (Object_t * __this /* static, unused */, RectTransform_t590 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern "C" bool LayoutRebuilder_ValidController_m3714 (Object_t * __this /* static, unused */, RectTransform_t590 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m3715 (Object_t * __this /* static, unused */, RectTransform_t590 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::LayoutComplete()
extern "C" void LayoutRebuilder_LayoutComplete_m3716 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::GraphicUpdateComplete()
extern "C" void LayoutRebuilder_GraphicUpdateComplete_m3717 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m3718 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(System.Object)
extern "C" bool LayoutRebuilder_Equals_m3719 (LayoutRebuilder_t802 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m3720 (LayoutRebuilder_t802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<s_Rebuilders>m__6(UnityEngine.UI.LayoutRebuilder)
extern "C" void LayoutRebuilder_U3Cs_RebuildersU3Em__6_m3721 (Object_t * __this /* static, unused */, LayoutRebuilder_t802 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__7(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__7_m3722 (Object_t * __this /* static, unused */, Component_t592 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__8_m3723 (Object_t * __this /* static, unused */, Component_t592 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m3724 (Object_t * __this /* static, unused */, Component_t592 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m3725 (Object_t * __this /* static, unused */, Component_t592 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m3726 (Object_t * __this /* static, unused */, Component_t592 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;

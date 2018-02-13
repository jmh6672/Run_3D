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

// UnityEngine.UI.Selectable
struct Selectable_t668;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t767;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t663;
// UnityEngine.UI.Graphic
struct Graphic_t694;
// UnityEngine.UI.Image
struct Image_t678;
// UnityEngine.Animator
struct Animator_t581;
// UnityEngine.RectTransform
struct RectTransform_t590;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t635;
// UnityEngine.Sprite
struct Sprite_t675;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t601;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t638;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
extern "C" void Selectable__ctor_m3346 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
extern "C" void Selectable__cctor_m3347 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
extern "C" List_1_t767 * Selectable_get_allSelectables_m3348 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
extern "C" Navigation_t745  Selectable_get_navigation_m3349 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
extern "C" void Selectable_set_navigation_m3350 (Selectable_t668 * __this, Navigation_t745  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
extern "C" int32_t Selectable_get_transition_m3351 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
extern "C" void Selectable_set_transition_m3352 (Selectable_t668 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
extern "C" ColorBlock_t673  Selectable_get_colors_m3353 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
extern "C" void Selectable_set_colors_m3354 (Selectable_t668 * __this, ColorBlock_t673  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
extern "C" SpriteState_t765  Selectable_get_spriteState_m3355 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
extern "C" void Selectable_set_spriteState_m3356 (Selectable_t668 * __this, SpriteState_t765  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
extern "C" AnimationTriggers_t663 * Selectable_get_animationTriggers_m3357 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
extern "C" void Selectable_set_animationTriggers_m3358 (Selectable_t668 * __this, AnimationTriggers_t663 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
extern "C" Graphic_t694 * Selectable_get_targetGraphic_m3359 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
extern "C" void Selectable_set_targetGraphic_m3360 (Selectable_t668 * __this, Graphic_t694 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
extern "C" bool Selectable_get_interactable_m3361 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C" void Selectable_set_interactable_m3362 (Selectable_t668 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
extern "C" bool Selectable_get_isPointerInside_m3363 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
extern "C" void Selectable_set_isPointerInside_m3364 (Selectable_t668 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
extern "C" bool Selectable_get_isPointerDown_m3365 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
extern "C" void Selectable_set_isPointerDown_m3366 (Selectable_t668 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
extern "C" bool Selectable_get_hasSelection_m3367 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
extern "C" void Selectable_set_hasSelection_m3368 (Selectable_t668 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
extern "C" Image_t678 * Selectable_get_image_m3369 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
extern "C" void Selectable_set_image_m3370 (Selectable_t668 * __this, Image_t678 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
extern "C" Animator_t581 * Selectable_get_animator_m3371 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
extern "C" void Selectable_Awake_m3372 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
extern "C" void Selectable_OnCanvasGroupChanged_m3373 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
extern "C" bool Selectable_IsInteractable_m3374 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
extern "C" void Selectable_OnDidApplyAnimationProperties_m3375 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
extern "C" void Selectable_OnEnable_m3376 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
extern "C" void Selectable_OnSetProperty_m3377 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
extern "C" void Selectable_OnDisable_m3378 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
extern "C" int32_t Selectable_get_currentSelectionState_m3379 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
extern "C" void Selectable_InstantClearState_m3380 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void Selectable_DoStateTransition_m3381 (Selectable_t668 * __this, int32_t ___state, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
extern "C" Selectable_t668 * Selectable_FindSelectable_m3382 (Selectable_t668 * __this, Vector3_t417  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
extern "C" Vector3_t417  Selectable_GetPointOnRectEdge_m3383 (Object_t * __this /* static, unused */, RectTransform_t590 * ___rect, Vector2_t418  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
extern "C" void Selectable_Navigate_m3384 (Selectable_t668 * __this, AxisEventData_t635 * ___eventData, Selectable_t668 * ___sel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
extern "C" Selectable_t668 * Selectable_FindSelectableOnLeft_m3385 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
extern "C" Selectable_t668 * Selectable_FindSelectableOnRight_m3386 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
extern "C" Selectable_t668 * Selectable_FindSelectableOnUp_m3387 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
extern "C" Selectable_t668 * Selectable_FindSelectableOnDown_m3388 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Selectable_OnMove_m3389 (Selectable_t668 * __this, AxisEventData_t635 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
extern "C" void Selectable_StartColorTween_m3390 (Selectable_t668 * __this, Color_t659  ___targetColor, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
extern "C" void Selectable_DoSpriteSwap_m3391 (Selectable_t668 * __this, Sprite_t675 * ___newSprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
extern "C" void Selectable_TriggerAnimation_m3392 (Selectable_t668 * __this, String_t* ___triggername, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsHighlighted_m3393 (Selectable_t668 * __this, BaseEventData_t601 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsPressed_m3394 (Selectable_t668 * __this, BaseEventData_t601 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
extern "C" bool Selectable_IsPressed_m3395 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_UpdateSelectionState_m3396 (Selectable_t668 * __this, BaseEventData_t601 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_EvaluateAndTransitionToSelectionState_m3397 (Selectable_t668 * __this, BaseEventData_t601 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
extern "C" void Selectable_InternalEvaluateAndTransitionToSelectionState_m3398 (Selectable_t668 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerDown_m3399 (Selectable_t668 * __this, PointerEventData_t638 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerUp_m3400 (Selectable_t668 * __this, PointerEventData_t638 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerEnter_m3401 (Selectable_t668 * __this, PointerEventData_t638 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerExit_m3402 (Selectable_t668 * __this, PointerEventData_t638 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnSelect_m3403 (Selectable_t668 * __this, BaseEventData_t601 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnDeselect_m3404 (Selectable_t668 * __this, BaseEventData_t601 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
extern "C" void Selectable_Select_m3405 (Selectable_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.UI.Image
struct Image_t678;
// UnityEngine.Sprite
struct Sprite_t675;
// UnityEngine.Texture
struct Texture_t747;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t700;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t716;
// UnityEngine.Camera
struct Camera_t652;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Image::.ctor()
extern "C" void Image__ctor_m2942 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::.cctor()
extern "C" void Image__cctor_m2943 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C" Sprite_t675 * Image_get_sprite_m2944 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C" void Image_set_sprite_m2945 (Image_t678 * __this, Sprite_t675 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_overrideSprite()
extern "C" Sprite_t675 * Image_get_overrideSprite_m2946 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
extern "C" void Image_set_overrideSprite_m2947 (Image_t678 * __this, Sprite_t675 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
extern "C" int32_t Image_get_type_m2948 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
extern "C" void Image_set_type_m2949 (Image_t678 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_preserveAspect()
extern "C" bool Image_get_preserveAspect_m2950 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
extern "C" void Image_set_preserveAspect_m2951 (Image_t678 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillCenter()
extern "C" bool Image_get_fillCenter_m2952 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillCenter(System.Boolean)
extern "C" void Image_set_fillCenter_m2953 (Image_t678 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
extern "C" int32_t Image_get_fillMethod_m2954 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
extern "C" void Image_set_fillMethod_m2955 (Image_t678 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C" float Image_get_fillAmount_m2956 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C" void Image_set_fillAmount_m2957 (Image_t678 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillClockwise()
extern "C" bool Image_get_fillClockwise_m2958 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
extern "C" void Image_set_fillClockwise_m2959 (Image_t678 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_fillOrigin()
extern "C" int32_t Image_get_fillOrigin_m2960 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
extern "C" void Image_set_fillOrigin_m2961 (Image_t678 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_eventAlphaThreshold()
extern "C" float Image_get_eventAlphaThreshold_m2962 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_eventAlphaThreshold(System.Single)
extern "C" void Image_set_eventAlphaThreshold_m2963 (Image_t678 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Image::get_mainTexture()
extern "C" Texture_t747 * Image_get_mainTexture_m2964 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_hasBorder()
extern "C" bool Image_get_hasBorder_m2965 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_pixelsPerUnit()
extern "C" float Image_get_pixelsPerUnit_m2966 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnBeforeSerialize()
extern "C" void Image_OnBeforeSerialize_m2967 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnAfterDeserialize()
extern "C" void Image_OnAfterDeserialize_m2968 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetDrawingDimensions(System.Boolean)
extern "C" Vector4_t815  Image_GetDrawingDimensions_m2969 (Image_t678 * __this, bool ___shouldPreserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::SetNativeSize()
extern "C" void Image_SetNativeSize_m2970 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C" void Image_OnPopulateMesh_m2971 (Image_t678 * __this, VertexHelper_t700 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSimpleSprite(UnityEngine.UI.VertexHelper,System.Boolean)
extern "C" void Image_GenerateSimpleSprite_m2972 (Image_t678 * __this, VertexHelper_t700 * ___vh, bool ___lPreserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSlicedSprite(UnityEngine.UI.VertexHelper)
extern "C" void Image_GenerateSlicedSprite_m2973 (Image_t678 * __this, VertexHelper_t700 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateTiledSprite(UnityEngine.UI.VertexHelper)
extern "C" void Image_GenerateTiledSprite_m2974 (Image_t678 * __this, VertexHelper_t700 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector3[],UnityEngine.Color32,UnityEngine.Vector3[])
extern "C" void Image_AddQuad_m2975 (Object_t * __this /* static, unused */, VertexHelper_t700 * ___vertexHelper, Vector3U5BU5D_t716* ___quadPositions, Color32_t846  ___color, Vector3U5BU5D_t716* ___quadUVs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" void Image_AddQuad_m2976 (Object_t * __this /* static, unused */, VertexHelper_t700 * ___vertexHelper, Vector2_t418  ___posMin, Vector2_t418  ___posMax, Color32_t846  ___color, Vector2_t418  ___uvMin, Vector2_t418  ___uvMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
extern "C" Vector4_t815  Image_GetAdjustedBorders_m2977 (Image_t678 * __this, Vector4_t815  ___border, Rect_t729  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateFilledSprite(UnityEngine.UI.VertexHelper,System.Boolean)
extern "C" void Image_GenerateFilledSprite_m2978 (Image_t678 * __this, VertexHelper_t700 * ___toFill, bool ___preserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single,System.Boolean,System.Int32)
extern "C" bool Image_RadialCut_m2979 (Object_t * __this /* static, unused */, Vector3U5BU5D_t716* ___xy, Vector3U5BU5D_t716* ___uv, float ___fill, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],System.Single,System.Single,System.Boolean,System.Int32)
extern "C" void Image_RadialCut_m2980 (Object_t * __this /* static, unused */, Vector3U5BU5D_t716* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputHorizontal()
extern "C" void Image_CalculateLayoutInputHorizontal_m2981 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputVertical()
extern "C" void Image_CalculateLayoutInputVertical_m2982 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minWidth()
extern "C" float Image_get_minWidth_m2983 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredWidth()
extern "C" float Image_get_preferredWidth_m2984 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleWidth()
extern "C" float Image_get_flexibleWidth_m2985 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minHeight()
extern "C" float Image_get_minHeight_m2986 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredHeight()
extern "C" float Image_get_preferredHeight_m2987 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleHeight()
extern "C" float Image_get_flexibleHeight_m2988 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_layoutPriority()
extern "C" int32_t Image_get_layoutPriority_m2989 (Image_t678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Image_IsRaycastLocationValid_m2990 (Image_t678 * __this, Vector2_t418  ___screenPoint, Camera_t652 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Image::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
extern "C" Vector2_t418  Image_MapCoordinate_m2991 (Image_t678 * __this, Vector2_t418  ___local, Rect_t729  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.Font
struct Font_t691;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t246;
// System.Action`1<UnityEngine.Font>
struct Action_1_t874;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t1023;
// UnityEngine.Material
struct Material_t695;
// UnityEngine.CharacterInfo[]
struct CharacterInfoU5BU5D_t1103;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void UnityEngine.Font::.ctor()
extern "C" void Font__ctor_m5039 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String)
extern "C" void Font__ctor_m5040 (Font_t691 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
extern "C" void Font__ctor_m5041 (Font_t691 * __this, StringU5BU5D_t246* ___names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m4027 (Object_t * __this /* static, unused */, Action_1_t874 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m5042 (Object_t * __this /* static, unused */, Action_1_t874 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_add_m_FontTextureRebuildCallback_m5043 (Font_t691 * __this, FontTextureRebuildCallback_t1023 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_remove_m_FontTextureRebuildCallback_m5044 (Font_t691 * __this, FontTextureRebuildCallback_t1023 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t246* Font_GetOSInstalledFontNames_m5045 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern "C" void Font_Internal_CreateFont_m5046 (Object_t * __this /* static, unused */, Font_t691 * ____font, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m5047 (Object_t * __this /* static, unused */, Font_t691 * ____font, StringU5BU5D_t246* ____names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern "C" Font_t691 * Font_CreateDynamicFontFromOSFont_m5048 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern "C" Font_t691 * Font_CreateDynamicFontFromOSFont_m5049 (Object_t * __this /* static, unused */, StringU5BU5D_t246* ___fontnames, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t695 * Font_get_material_m4305 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
extern "C" void Font_set_material_m5050 (Font_t691 * __this, Material_t695 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m4165 (Font_t691 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t246* Font_get_fontNames_m5051 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m5052 (Font_t691 * __this, StringU5BU5D_t246* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t1103* Font_get_characterInfo_m5053 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
extern "C" void Font_set_characterInfo_m5054 (Font_t691 * __this, CharacterInfoU5BU5D_t1103* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C" void Font_RequestCharactersInTexture_m5055 (Font_t691 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m5056 (Font_t691 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m5057 (Font_t691 * __this, String_t* ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m5058 (Object_t * __this /* static, unused */, Font_t691 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t1023 * Font_get_textureRebuildCallback_m5059 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m5060 (Font_t691 * __this, FontTextureRebuildCallback_t1023 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
extern "C" int32_t Font_GetMaxVertsForString_m5061 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m5062 (Font_t691 * __this, uint16_t ___ch, CharacterInfo_t1022 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m5063 (Font_t691 * __this, uint16_t ___ch, CharacterInfo_t1022 * ___info, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m5064 (Font_t691 * __this, uint16_t ___ch, CharacterInfo_t1022 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m4307 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m5065 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m5066 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m4309 (Font_t691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

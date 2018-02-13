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

// UnityEngine.WWW
struct WWW_t55;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.String[]
struct StringU5BU5D_t246;
// UnityEngine.Texture2D
struct Texture2D_t56;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m1961 (WWW_t55 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m4729 (WWW_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m4730 (WWW_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m4731 (WWW_t55 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m4732 (WWW_t55 * __this, String_t* ___url, ByteU5BU5D_t20* ___postData, StringU5BU5D_t246* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C" Texture2D_t56 * WWW_GetTexture_m4733 (WWW_t55 * __this, bool ___markNonReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C" Texture2D_t56 * WWW_get_texture_m1964 (WWW_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m1963 (WWW_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_url()
extern "C" String_t* WWW_get_url_m1959 (WWW_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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
// System.Byte[]
struct ByteU5BU5D_t20;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_SavedGa_0.h"
#include "mscorlib_System_TimeSpan.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGame_SavedGa_1.h"

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
extern "C" Builder_t45  Builder_WithUpdatedDescription_m156 (Builder_t45 * __this, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
extern "C" Builder_t45  Builder_WithUpdatedPngCoverImage_m157 (Builder_t45 * __this, ByteU5BU5D_t20* ___newPngCoverImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
extern "C" Builder_t45  Builder_WithUpdatedPlayedTime_m158 (Builder_t45 * __this, TimeSpan_t433  ___newPlayedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
extern "C" SavedGameMetadataUpdate_t47  Builder_Build_m159 (Builder_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.Native.NativeAchievement
struct NativeAchievement_t352;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t1;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Achi_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_Types_Achi.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.NativeAchievement::.ctor(System.IntPtr)
extern "C" void NativeAchievement__ctor_m1398 (NativeAchievement_t352 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.NativeAchievement::CurrentSteps()
extern "C" uint32_t NativeAchievement_CurrentSteps_m1399 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeAchievement::Description()
extern "C" String_t* NativeAchievement_Description_m1400 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeAchievement::Id()
extern "C" String_t* NativeAchievement_Id_m1401 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeAchievement::Name()
extern "C" String_t* NativeAchievement_Name_m1402 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/AchievementState GooglePlayGames.Native.NativeAchievement::State()
extern "C" int32_t NativeAchievement_State_m1403 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.NativeAchievement::TotalSteps()
extern "C" uint32_t NativeAchievement_TotalSteps_m1404 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/AchievementType GooglePlayGames.Native.NativeAchievement::Type()
extern "C" int32_t NativeAchievement_Type_m1405 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeAchievement::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativeAchievement_CallDispose_m1406 (NativeAchievement_t352 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Achievement GooglePlayGames.Native.NativeAchievement::AsAchievement()
extern "C" Achievement_t1 * NativeAchievement_AsAchievement_m1407 (NativeAchievement_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeAchievement::<Description>m__6E(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeAchievement_U3CDescriptionU3Em__6E_m1408 (NativeAchievement_t352 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeAchievement::<Id>m__6F(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeAchievement_U3CIdU3Em__6F_m1409 (NativeAchievement_t352 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeAchievement::<Name>m__70(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeAchievement_U3CNameU3Em__70_m1410 (NativeAchievement_t352 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;

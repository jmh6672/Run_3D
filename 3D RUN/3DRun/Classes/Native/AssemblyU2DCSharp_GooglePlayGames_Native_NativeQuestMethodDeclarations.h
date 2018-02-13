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

// GooglePlayGames.Native.NativeQuest
struct NativeQuest_t355;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Quests.IQuestMilestone
struct IQuestMilestone_t447;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_QuestState.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.NativeQuest::.ctor(System.IntPtr)
extern "C" void NativeQuest__ctor_m1433 (NativeQuest_t355 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuest::get_Id()
extern "C" String_t* NativeQuest_get_Id_m1434 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuest::get_Name()
extern "C" String_t* NativeQuest_get_Name_m1435 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuest::get_Description()
extern "C" String_t* NativeQuest_get_Description_m1436 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuest::get_BannerUrl()
extern "C" String_t* NativeQuest_get_BannerUrl_m1437 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuest::get_IconUrl()
extern "C" String_t* NativeQuest_get_IconUrl_m1438 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.Native.NativeQuest::get_StartTime()
extern "C" DateTime_t51  NativeQuest_get_StartTime_m1439 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.Native.NativeQuest::get_ExpirationTime()
extern "C" DateTime_t51  NativeQuest_get_ExpirationTime_m1440 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> GooglePlayGames.Native.NativeQuest::get_AcceptedTime()
extern "C" Nullable_1_t459  NativeQuest_get_AcceptedTime_m1441 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.IQuestMilestone GooglePlayGames.Native.NativeQuest::get_Milestone()
extern "C" Object_t * NativeQuest_get_Milestone_m1442 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.QuestState GooglePlayGames.Native.NativeQuest::get_State()
extern "C" int32_t NativeQuest_get_State_m1443 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeQuest::Valid()
extern "C" bool NativeQuest_Valid_m1444 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuest::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativeQuest_CallDispose_m1445 (NativeQuest_t355 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuest::ToString()
extern "C" String_t* NativeQuest_ToString_m1446 (NativeQuest_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeQuest GooglePlayGames.Native.NativeQuest::FromPointer(System.IntPtr)
extern "C" NativeQuest_t355 * NativeQuest_FromPointer_m1447 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuest::<get_Id>m__85(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuest_U3Cget_IdU3Em__85_m1448 (NativeQuest_t355 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuest::<get_Name>m__86(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuest_U3Cget_NameU3Em__86_m1449 (NativeQuest_t355 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuest::<get_Description>m__87(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuest_U3Cget_DescriptionU3Em__87_m1450 (NativeQuest_t355 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuest::<get_BannerUrl>m__88(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuest_U3Cget_BannerUrlU3Em__88_m1451 (NativeQuest_t355 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuest::<get_IconUrl>m__89(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuest_U3Cget_IconUrlU3Em__89_m1452 (NativeQuest_t355 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GooglePlayGames.Native.NativeQuestMilestone
struct NativeQuestMilestone_t356;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_MilestoneS.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.NativeQuestMilestone::.ctor(System.IntPtr)
extern "C" void NativeQuestMilestone__ctor_m1453 (NativeQuestMilestone_t356 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuestMilestone::get_Id()
extern "C" String_t* NativeQuestMilestone_get_Id_m1454 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuestMilestone::get_EventId()
extern "C" String_t* NativeQuestMilestone_get_EventId_m1455 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuestMilestone::get_QuestId()
extern "C" String_t* NativeQuestMilestone_get_QuestId_m1456 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.NativeQuestMilestone::get_CurrentCount()
extern "C" uint64_t NativeQuestMilestone_get_CurrentCount_m1457 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GooglePlayGames.Native.NativeQuestMilestone::get_TargetCount()
extern "C" uint64_t NativeQuestMilestone_get_TargetCount_m1458 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GooglePlayGames.Native.NativeQuestMilestone::get_CompletionRewardData()
extern "C" ByteU5BU5D_t20* NativeQuestMilestone_get_CompletionRewardData_m1459 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.MilestoneState GooglePlayGames.Native.NativeQuestMilestone::get_State()
extern "C" int32_t NativeQuestMilestone_get_State_m1460 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeQuestMilestone::Valid()
extern "C" bool NativeQuestMilestone_Valid_m1461 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestMilestone::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void NativeQuestMilestone_CallDispose_m1462 (NativeQuestMilestone_t356 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeQuestMilestone::ToString()
extern "C" String_t* NativeQuestMilestone_ToString_m1463 (NativeQuestMilestone_t356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeQuestMilestone GooglePlayGames.Native.NativeQuestMilestone::FromPointer(System.IntPtr)
extern "C" NativeQuestMilestone_t356 * NativeQuestMilestone_FromPointer_m1464 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuestMilestone::<get_Id>m__8A(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuestMilestone_U3Cget_IdU3Em__8A_m1465 (NativeQuestMilestone_t356 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuestMilestone::<get_EventId>m__8B(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuestMilestone_U3Cget_EventIdU3Em__8B_m1466 (NativeQuestMilestone_t356 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuestMilestone::<get_QuestId>m__8C(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  NativeQuestMilestone_U3Cget_QuestIdU3Em__8C_m1467 (NativeQuestMilestone_t356 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.NativeQuestMilestone::<get_CompletionRewardData>m__8D(System.Byte[],System.UIntPtr)
extern "C" UIntPtr_t  NativeQuestMilestone_U3Cget_CompletionRewardDataU3Em__8D_m1468 (NativeQuestMilestone_t356 * __this, ByteU5BU5D_t20* ___out_bytes, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;

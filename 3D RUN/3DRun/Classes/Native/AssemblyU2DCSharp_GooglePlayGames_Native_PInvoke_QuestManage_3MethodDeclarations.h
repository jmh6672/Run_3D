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

// GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse
struct QuestUIResponse_t372;
// GooglePlayGames.Native.NativeQuest
struct NativeQuest_t355;
// GooglePlayGames.Native.NativeQuestMilestone
struct NativeQuestMilestone_t356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"

// System.Void GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse::.ctor(System.IntPtr)
extern "C" void QuestUIResponse__ctor_m1588 (QuestUIResponse_t372 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse::RequestStatus()
extern "C" int32_t QuestUIResponse_RequestStatus_m1589 (QuestUIResponse_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse::RequestSucceeded()
extern "C" bool QuestUIResponse_RequestSucceeded_m1590 (QuestUIResponse_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeQuest GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse::AcceptedQuest()
extern "C" NativeQuest_t355 * QuestUIResponse_AcceptedQuest_m1591 (QuestUIResponse_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeQuestMilestone GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse::MilestoneToClaim()
extern "C" NativeQuestMilestone_t356 * QuestUIResponse_MilestoneToClaim_m1592 (QuestUIResponse_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void QuestUIResponse_CallDispose_m1593 (QuestUIResponse_t372 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse::FromPointer(System.IntPtr)
extern "C" QuestUIResponse_t372 * QuestUIResponse_FromPointer_m1594 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

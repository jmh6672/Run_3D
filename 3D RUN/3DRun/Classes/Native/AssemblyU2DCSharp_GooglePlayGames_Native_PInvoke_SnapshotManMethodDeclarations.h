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

// GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse
struct OpenResponse_t381;
// System.String
struct String_t;
// GooglePlayGames.Native.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t290;
// System.Text.StringBuilder
struct StringBuilder_t361;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_CommonErro_6.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"
#include "mscorlib_System_UIntPtr.h"

// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::.ctor(System.IntPtr)
extern "C" void OpenResponse__ctor_m1683 (OpenResponse_t381 * __this, IntPtr_t ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::RequestSucceeded()
extern "C" bool OpenResponse_RequestSucceeded_m1684 (OpenResponse_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ResponseStatus()
extern "C" int32_t OpenResponse_ResponseStatus_m1685 (OpenResponse_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictId()
extern "C" String_t* OpenResponse_ConflictId_m1686 (OpenResponse_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::Data()
extern "C" NativeSnapshotMetadata_t290 * OpenResponse_Data_m1687 (OpenResponse_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictOriginal()
extern "C" NativeSnapshotMetadata_t290 * OpenResponse_ConflictOriginal_m1688 (OpenResponse_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictUnmerged()
extern "C" NativeSnapshotMetadata_t290 * OpenResponse_ConflictUnmerged_m1689 (OpenResponse_t381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void OpenResponse_CallDispose_m1690 (OpenResponse_t381 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::FromPointer(System.IntPtr)
extern "C" OpenResponse_t381 * OpenResponse_FromPointer_m1691 (Object_t * __this /* static, unused */, IntPtr_t ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::<ConflictId>m__9D(System.Text.StringBuilder,System.UIntPtr)
extern "C" UIntPtr_t  OpenResponse_U3CConflictIdU3Em__9D_m1692 (OpenResponse_t381 * __this, StringBuilder_t361 * ___out_string, UIntPtr_t  ___out_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;

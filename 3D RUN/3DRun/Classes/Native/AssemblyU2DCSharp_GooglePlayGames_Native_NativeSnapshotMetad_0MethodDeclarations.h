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

// GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder
struct Builder_t357;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t20;
// GooglePlayGames.Native.NativeSnapshotMetadataChange
struct NativeSnapshotMetadataChange_t358;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef.h"

// System.Void GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder::.ctor()
extern "C" void Builder__ctor_m1490 (Builder_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C" void Builder_CallDispose_m1491 (Builder_t357 * __this, HandleRef_t336  ___selfPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder::SetDescription(System.String)
extern "C" Builder_t357 * Builder_SetDescription_m1492 (Builder_t357 * __this, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder::SetPlayedTime(System.UInt64)
extern "C" Builder_t357 * Builder_SetPlayedTime_m1493 (Builder_t357 * __this, uint64_t ___playedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder::SetCoverImageFromPngData(System.Byte[])
extern "C" Builder_t357 * Builder_SetCoverImageFromPngData_m1494 (Builder_t357 * __this, ByteU5BU5D_t20* ___pngData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeSnapshotMetadataChange GooglePlayGames.Native.NativeSnapshotMetadataChange/Builder::Build()
extern "C" NativeSnapshotMetadataChange_t358 * Builder_Build_m1495 (Builder_t357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

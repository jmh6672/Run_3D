#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t310;
// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t289;

#include "mscorlib_System_Object.h"

// GooglePlayGames.Native.NativeSavedGameClient
struct  NativeSavedGameClient_t302  : public Object_t
{
	// GooglePlayGames.Native.PInvoke.SnapshotManager GooglePlayGames.Native.NativeSavedGameClient::mSnapshotManager
	SnapshotManager_t289 * ___mSnapshotManager_1;
};
struct NativeSavedGameClient_t302_StaticFields{
	// System.Text.RegularExpressions.Regex GooglePlayGames.Native.NativeSavedGameClient::ValidFilenameRegex
	Regex_t310 * ___ValidFilenameRegex_0;
};

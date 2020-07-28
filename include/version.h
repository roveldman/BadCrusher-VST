#pragma once

#include "pluginterfaces/base/fplatform.h"

#define MAJOR_VERSION_STR "1"
#define MAJOR_VERSION_INT 1

#define SUB_VERSION_STR "0"
#define SUB_VERSION_INT 0

#define RELEASE_NUMBER_STR "0"
#define RELEASE_NUMBER_INT 0

#define BUILD_NUMBER_STR "1"
#define BUILD_NUMBER_INT 1

#define FULL_VERSION_STR MAJOR_VERSION_STR "." SUB_VERSION_STR "." RELEASE_NUMBER_STR "." BUILD_NUMBER_STR

#define VERSION_STR MAJOR_VERSION_STR "." SUB_VERSION_STR "." RELEASE_NUMBER_STR

#define stringPluginName		"BadCrusher"

#define stringOriginalFilename	"badcrusher.vst3"
#if SMTG_PLATFORM_64
#define stringFileDescription	stringPluginName" VST3-SDK (64Bit)"
#else
#define stringFileDescription	stringPluginName" VST3-SDK"
#endif
#define stringCompanyName		"moderngravel\0"
#define stringCompanyWeb		""
#define stringCompanyEmail		""

#define stringLegalCopyright	""
#define stringLegalTrademarks	"VST is a trademark of Steinberg Media Technologies GmbH"

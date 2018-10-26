
#include "AvailabilityMacros.h"

// defines for when legacy support is required for various functions

// clock_gettime
#define __MP_LEGACY_SUPPORT_GETTIME__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 101100

// strnlen
#define __MP_LEGACY_SUPPORT_STRNLEN__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070

// strndup
#define __MP_LEGACY_SUPPORT_STRNDUP__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070

// getline
#define __MP_LEGACY_SUPPORT_GETLINE__ __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070

// memmem
#define __MP_LEGACY_SUPPORT_MEMMEM__  __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070

// wcsdup
#define __MP_LEGACY_SUPPORT_WCSDUP__  __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070

// llround
#define __MP_LEGACY_SUPPORT_LLROUND__  __APPLE__ && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070

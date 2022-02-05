#pragma once
#include "Application.h"

#ifdef NTR_PLATFORM_WINDOWS
	#ifdef NTR_BUILD_DLL
		#define NITRO_API __declspec(dllexport)
	#else
		#define NITRO_API __declspec(dllimport)
	#endif // NTR_BUILD_DLL
#else
	#error Nitro currently supports Windows only
#endif // NTR_PLATFORM_WINDOWS

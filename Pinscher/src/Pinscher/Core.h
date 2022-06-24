#pragma once

#ifdef PS_PLATFORM_WINDOWS

	#ifdef PS_BUILD_DLL
		#define PS_API __declspec(dllexport)
	#else
		#define PS_API __declspec(dllimport)
	#endif // PS_BUILD_DLL
#else
	#error Pinscher only support Windows!
#endif // PS_PLATFORM_WINDOWS
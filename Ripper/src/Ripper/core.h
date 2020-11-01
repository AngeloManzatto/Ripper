#pragma once

#ifdef RP_PLATFORM_WINDOWS
	#ifdef RP_BUILD_DLL
		#define RIPPER_API __declspec(dllexport) 
	#else
		#define RIPPER_API __declspec(dllimport) 
	#endif // RP_BUILD_DLL

#else
	#error Ripper Engine only supports Windows!
#endif // RP_PLATFORM_WINDOWS

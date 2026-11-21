#pragma once


#ifdef ATMS_PLATFORM_WINDOWS
	#ifdef ATMS_BUILD_DLL
		#define ATMS_API __declspec(dllexport)	
	#else
		#define ATMS_API __declspec(dllimport)
	#endif 
#else
	#error Artemis only supports Windows!
#endif

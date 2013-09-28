#ifndef __OAUTH_CONFIG__
#define __OAUTH_CONFIG__

#if defined(__GNUC__) && __GNUC__ >= 4
	#define OAUTH_API			 __attribute__ ((visibility("default")))
#elif defined(_USRDLL)
	#if defined(OAUTH_EXPORTS)
		#define OAUTH_API		 __declspec(dllexport)
	#else
		#define OAUTH_API		 __declspec(dllimport)
	#endif
#else
	#define OAUTH_API
#endif

#endif

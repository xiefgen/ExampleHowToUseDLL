#ifndef Global_h__
#define Global_h__

#ifdef FUNCTION_EXPORTS
	#define ADD_CLASS_EXPORT __declspec(dllexport)
#else
	#define ADD_CLASS_EXPORT __declspec(dllimport)
#endif 

#endif // Global_h__

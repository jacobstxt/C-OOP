#pragma once

#ifdef STRINGLIBRARY_EXPORTS
#define STRINGLIBRARY_API __declspec(dllexport)
#else
#define STRINGLIBRARY_API __declspec(dllimport)
#endif


extern "C" STRINGLIBRARY_API void str_reverse(char* str);


extern "C" STRINGLIBRARY_API int str_word_count(const char* str);


extern "C" STRINGLIBRARY_API void str_trim(char* str);


extern "C" STRINGLIBRARY_API void str_to_upper(char* str);
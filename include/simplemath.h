#pragma once

#ifdef _WIN32
    #ifdef SIMPLEMATH_EXPORTS
        #define SIMPLEMATH_API __declspec(dllexport)
    #else
        #define SIMPLEMATH_API __declspec(dllimport)
    #endif
#else
    #define SIMPLEMATH_API __attribute__((visibility("default")))
#endif

namespace simplemath {

/// @brief 整数加法
SIMPLEMATH_API int add(int a, int b);

/// @brief 整数乘法
SIMPLEMATH_API int multiply(int a, int b);

/// @brief 计算阶乘
SIMPLEMATH_API long factorial(int n);

} // namespace simplemath

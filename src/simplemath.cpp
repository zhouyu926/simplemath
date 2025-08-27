#include "include/simplemath.h"

namespace simplemath {

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

long factorial(int n) {
    if (n < 0) return -1; // 错误输入
    long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

} // namespace simplemath

#include "shok.h"



long fib_r(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_r(n - 1) + fib_r(n - 2);
}

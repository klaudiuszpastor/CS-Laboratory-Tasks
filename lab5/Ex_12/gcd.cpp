#include "gcd.h"

// Iteracyjna funkcja obliczająca największy wspólny dzielnik
int iterGcd(int x, int y) {
    int temp;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// Rekurencyjna funkcja obliczająca największy wspólny dzielnik
int recurGcd(int x, int y) {
    if (y == 0)
        return x;
    return recurGcd(y, x % y);
}

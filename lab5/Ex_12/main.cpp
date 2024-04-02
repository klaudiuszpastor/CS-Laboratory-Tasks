#include <iostream>
#include <chrono>
#include "gcd.h"

int main() {
    int a = 48, b = 18; // Przykładowe liczby

    // Pomiar czasu dla iteracyjnej funkcji gcd
    auto startIter = std::chrono::steady_clock::now();
    int resultIter = iterGcd(a, b);
    auto endIter = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsedIter = endIter - startIter;

    // Pomiar czasu dla rekurencyjnej funkcji gcd
    auto startRecur = std::chrono::steady_clock::now();
    int resultRecur = recurGcd(a, b);
    auto endRecur = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsedRecur = endRecur - startRecur;

    // Wyniki i czasy wykonania
    std::cout << "Największy wspólny dzielnik (" << a << ", " << b << "):\n";
    std::cout << "Iteracyjny: " << resultIter << ", czas: " << elapsedIter.count() << "s\n";
    std::cout << "Rekurencyjny: " << resultRecur << ", czas: " << elapsedRecur.count() << "s\n";

    return 0;
}

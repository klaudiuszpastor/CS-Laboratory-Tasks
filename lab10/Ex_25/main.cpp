#include <iostream>
#include <cstdlib>
#include <ctime>
#include "median.h"

int main() {
    srand(time(nullptr));

    const unsigned int nSize = 10;
    int tab[nSize];
    
    for (unsigned int i = 0; i < nSize; i++)
        tab[i] = rand() % 300;
    
    printTab(tab, nSize);
    mergeSort(tab, 0, nSize - 1);
    printTab(tab, nSize);

    float buffer;

    // Pierwsza próba obliczenia mediany z prawidłowym wskaźnikiem
    if (median(tab, nSize, &buffer)) {
        std::cout << "Success. Median = " << buffer << std::endl;
    } else {
        std::cout << "Failure" << std::endl;
    }

    // Druga próba obliczenia mediany z nieprawidłowym wskaźnikiem
    float *buptr = nullptr;
    if (median(tab, nSize, buptr)) {
        std::cout << "Success. Median = " << buffer << std::endl;
    } else {
        std::cout << "Failure" << std::endl;
    }

    return EXIT_SUCCESS;
}
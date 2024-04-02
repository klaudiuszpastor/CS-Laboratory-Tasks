#include "tabUtils.h"
#include <iostream>

void printTab(const int * const tab, unsigned int size)
{
    std::cout << "[";
    for (int i =0; i < size; ++i)
    {
        std::cout << tab[i] << std::endl;
    }
    std::cout << "]";
}

void reverseTab(int * const tab, unsigned int size)
{
    int temp;
    for (int i = size - 1; i>= size/2; --i)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
    }
}
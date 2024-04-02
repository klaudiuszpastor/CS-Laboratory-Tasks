#include <iostream>
#include "convertCase.h"

int main()
{
    const int size = 15;
    char inputArray[size];

    std::cout << "Enter " << size << "  ASCII characters:  "<< std::endl;
    for (int i =0; i<size; i++)
        std::cin >> inputArray[i];

    convertCase(inputArray);
    std::cout << "Modified array: " << std::endl;
    for (int i =0; i < size; ++i)
        std::cout << inputArray[i] << " " << std::endl;

    return 0;
}
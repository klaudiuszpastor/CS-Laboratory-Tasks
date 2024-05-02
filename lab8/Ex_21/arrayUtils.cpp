#include "arrayUtils.h"
#include <string.h>

char *resizeArray(char *array, unsigned int newSize)
{
    if (array == nullptr)
        return nullptr;
    
    char *newArray = new(std::nothrow) char[newSize + 1];
    if (newArray == nullptr)
    {
        std::cout << "Failed to allocate memory" << std::endl;
        return nullptr;
    }

    if (newSize >= strlen(array))
    {
        for (int i=0; i <strlen(array); i++)
        {
            newArray[i] = array[i];
        }
    }
    else
    {
        for (int i =0; i < newSize; i++)
        {
            newArray[i] = array[i];
        }
    }
    newArray[newSize] = '\0';
    delete[] array;
    return newArray;
}
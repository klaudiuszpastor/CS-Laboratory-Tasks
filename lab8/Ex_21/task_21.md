***In the header file arrayUtils.h, the declaration of the function char * resizeArray(char * array, unsigned int newSize) is provided. Using the C++ language, implement the given function, and place its definition in the file arrayUtils.cpp. The task of the function is to reallocate the character array array. The function returns a pointer to the newly allocated array of size newSize. Additional assumptions:***

• if array is nullptr, the resizeArray() function returns nullptr;

• the function deallocates memory allocated for the array; it copies the values of the elements of the array to the new array (if newSize is smaller than the size of array, only the first newSize elements of the array are copied)

Next, in the main() function, allocate a character array of ASCII characters with an initial size of 5 elements on the heap. Read consecutive ASCII characters from the keyboard and place them in the array until the same character occurs twice in a row. If the array is about to overflow, use the resizeArray() function and increase its size by another 5 elements. After filling the array with characters, display the created string on the screen.
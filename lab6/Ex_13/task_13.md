
***In the header file tabUtils.h, declarations of two functions are included:***
• void printTab(const int * const tab, unsigned int size) – sending to the standard output the values of all elements of the array tab of size size
• void reverseTab(int * const tab, unsigned int size) – reversing (modifying) the order of elements (first ←→ last, second ←→ second to last, ...) in the array tab of size size

Within the task:

1. Using any loop, write definitions of the functions printTab() and reverseTab(); place the definitions in the source file tabUtlis.cpp
2. Inside the main() function (file main.cpp), create (locally) an array of several integers, and then initialize it with random values using the rand() function [see: Exercise 2]
3. Using the reverseTab() function, reverse the order of the created array
4. Using the printTab() function, display the contents of the array before and after reversing the order of elements

Note: The printTab() and reverseTab() functions should handle arrays of any size. The reverseTab() function modifies the original array.
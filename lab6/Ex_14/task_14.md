***In the header file convertCase.h, a declaration of the function void convertCase(char text[]) is provided. This function takes an array of characters and, for each successive read letter, changes its case ('a' → 'A', 'F' → 'f', etc.). Within the task:**

1. Write the definition of the function convertCase() and place it in the source file convertCase.cpp. Note: the function changes the case of letters but ignores other characters that may be present in the array, e.g., ' ?' → ' ?'
2. Inside the main() function (file main.cpp), retrieve from the keyboard several different ASCII characters (including letters of different cases and non-alphanumeric characters) and initialize a local array of variables of type char with them.
3. Call the convertCase() function, passing the initialized array as an argument.
4. Display the content of the modified array on the screen.

Note: the convertCase() function should handle arrays of any size.
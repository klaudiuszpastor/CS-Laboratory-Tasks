***In the header file calculator.h, declarations of five functions are provided:**

• float add(float x, float y) – performing addition of two floating-point numbers x, y
• float subtract(float x, float y) – performing subtraction of two floating-point numbers x, y
• float multiply(float x, float y) – performing multiplication of two floating-point numbers x, y
• float divide(float x, float y) – performing division of two floating-point numbers x, y
• float calculate(float x, float y, char * operations[], unsigned int size) – performing basic arithmetic operations on two floating-point numbers x, y, according to the order of operations specified in the operations array of size size

Within the task:

1. Write the definitions of the functions add(), subtract(), multiply(), and divide() and place them in the source file calculator.cpp
2. Write the definition of the function calculate() and place it in the source file calculator.cpp. The function checks successive elements of the operations array and, depending on their values, performs the corresponding operation on the numbers x, y (by calling the add(), subtract(), multiply(), or divide() functions accordingly):
• ”add” – x + y
• ”sub” – x − y
• ”mul” – x ∗ y
• ”div” – x/y
• otherwise, it ignores the command
The return value of the calculate() function is the sum of the results of all intermediate operations
3. Inside the main function int main(int arc, char ** argv) (file main.cpp), call the calculate() function, passing as arguments the parameters with which the application was launched and two floating-point numbers obtained from the keyboard
4. Display the result of the calculate() function on the computer screen


Example result of running the application (numbers 2.0 and 10.0 were obtained from the keyboard):
calculator.exe ”add” ”add” ”mul” ”sub” ”div”
36.2 = (2.0 + 10.0) + (2.0 + 10.0) + (2.0 * 10.0) + (2.0 - 10.0) + (2.0 /
10.0)
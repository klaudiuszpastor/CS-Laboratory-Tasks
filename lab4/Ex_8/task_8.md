The calculator.h header file contains declarations of four functions that perform addition, subtraction, multiplication
and division on floating-point numbers, and the float function calculate(Operation, float, float), which, based on the type of arithmetic operation (enum class Operation), 
performs the corresponding mathematical operation on two floating-point numbers (calls one of the four functions: add(), subtract(), multiply() or divide()) and returns 
the result of this operation. The main.cpp file implements a simple calculator program that takes two floating-point numbers from standard inputand the type of arithmetic 
operation and calls the calculate() function. As part of the task, in the calculator.cpp file:

1. define the add(), subtract(), multiply() and divide() functions. Note: in the case of divide by zero, call the quitWithError() function, defined in the calculator.cpp file.
   
2. define the calculator function so that the entire program works correctly. Note: if you select an incorrect arithmetic operation, call the quitWithError() function, defined in the calculator.cpp file.


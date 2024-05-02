Independently verify the memory layout of the program on your computer. To do this, create several instances of functions and variables of different types (statically and dynamically allocated, local, global, and static), and based on their addresses, determine the areas of memory segments and the direction of stack and heap growth. You can display the address of a function in computer memory as follows:

#include <stdio.h>
#include <stdlib.h>

// Sample function
void sayHello() {
    printf("Hello, world!\n");
}

int main() {
    sayHello();
    printf("Function address: %p", sayHello);
    return 0;
}

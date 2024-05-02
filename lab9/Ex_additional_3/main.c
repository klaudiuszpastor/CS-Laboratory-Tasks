#include <stdio.h>

void sayHello() {
    printf("Hello, world!\n");
}

int main() {
    int localVariable = 42;
    static int staticVariable = 24;
    int *dynamicVariable = (int *)malloc(sizeof(int));
    *dynamicVariable = 99;

    printf("Address of localVariable: %p\n", (void *)&localVariable);
    printf("Address of staticVariable: %p\n", (void *)&staticVariable);
    printf("Address of dynamicVariable: %p\n", (void *)dynamicVariable);
    printf("Address of function sayHello: %p\n", (void *)sayHello);

    free(dynamicVariable); // Remember to free dynamically allocated memory

    return 0;
}

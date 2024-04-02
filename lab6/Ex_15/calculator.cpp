#include "calculator.h"
#include <iostream>
#include <cstring>

// calculator.cpp

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        std::cerr << "Error: division by zero" << std::endl;
        return 0; // In case of division by zero, returning 0
    }
}

float calculate(float x, float y, char *operations[], unsigned int size) {
    float result = 0;
    for (unsigned int i = 0; i < size; ++i) {
        if (strcmp(operations[i], "add") == 0) {
            result += add(x, y);
        } else if (strcmp(operations[i], "sub") == 0) {
            result += subtract(x, y);
        } else if (strcmp(operations[i], "mul") == 0) {
            result += multiply(x, y);
        } else if (strcmp(operations[i], "div") == 0) {
            result += divide(x, y);
        }
    }
    return result;
}

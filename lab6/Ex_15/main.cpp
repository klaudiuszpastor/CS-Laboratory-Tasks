// main.cpp

#include <iostream>
#include <cstring>
#include "calculator.h"

int main(int argc, char **argv) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <operation1> <operation2> ... <operationN>" << std::endl;
        return 1;
    }

    const float x = 2.0;
    const float y = 10.0;
    
    float result = calculate(x, y, argv + 1, argc - 1);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

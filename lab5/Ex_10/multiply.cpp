#include "multiply.h"
#include <iostream>

extern "C"
{
	int multiply(int x, int y) {
	return x * y;
	}
};

int multiply(int x, int y) {
	return x * y;
}
float multiply(float x, float y) {
	return x * y;
}

int main()
{
	std::cout << "Int sum: " << multiply(3,5) << std::endl;
	std::cout << "Float sum: " << multiply(3.2f,5.3f) << std::endl;
	return 0;
}
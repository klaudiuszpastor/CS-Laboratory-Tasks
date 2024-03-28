#include <iostream>

#include "calculator.h"

int main() {
	
	bool repeat = false;
	int storev1 = 0; 
	int storev2 = 0;
	
	while(repeat == false){
		float x, y, result;
		std::cout << "Type two numbers." << std::endl << "x: ";
		std::cin >> x;
		std::cout << std::endl << "y: ";
		std::cin >> y;
		
		repeat = (storev1 == x && storev2 == y);

		storev1 = x;
		storev2 = y;
		
		std::cout << std::endl << "Choose arithmetic operation to be performed:" << std::endl
			<< "0 - addition" << std::endl
			<< "1 - subtraction" << std::endl
			<< "2 - multiplication" << std::endl
			<< "3 - division" << std::endl;
		unsigned int operationValue;
		std::cin >> operationValue;
		Operation operation = static_cast<Operation>(operationValue);
		result = calculate(operation, x, y);
		std::cout << "Operation result equals: " << result << std::endl;
	}	
	return EXIT_SUCCESS;
}
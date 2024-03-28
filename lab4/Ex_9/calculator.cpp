#include <iostream>

#include "calculator.h"

namespace {
	
	void quitWithError() {
		std::cout << "Invalid operation performed" << std::endl;
		exit(EXIT_FAILURE);
	}
	
} // anonymous namespace
// Place your definitions here
float add(float x, float y)
{ 
	return x + y; 
}
float subtract(float x, float y)
{ 
	return x - y; 
}
float multiply(float x, float y)
{ 
	return x * y; 
}
float divide(float x, float y)
{
	if(y == 0)
		quitWithError();
	else
		return x / y;
}


float calculate(Operation operation, float x, float y){ 	
	switch(operation){
		case Operation::ADD: 
			return add(x,y);				
			break;
		case Operation::SUBTRACT:
			return subtract(x,y);
			break;
		case Operation::MULTIPLY:
			return multiply(x,y);
			break;
		case Operation::DIVIDE:
			return divide(x,y);
			break;
		default:
			quitWithError();
			break;
	}
}
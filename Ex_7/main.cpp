#include <iostream>
#include <iomanip>

int a = 10, b = 1024, c = 512;

int main(){
    std::cout << "Liczba a binarnie" << a << std::setbase(2) << a << std::endl;
    std::cout << "Liczba b oktagonalnie" << b;
    std::cout << "Liczba c heksadecymalnie" << c;
}
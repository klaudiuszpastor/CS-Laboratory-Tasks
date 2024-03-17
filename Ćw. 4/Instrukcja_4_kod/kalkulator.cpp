#include <iostream>
#include <limits>


enum class Operation : unsigned int {
    ADD = 0,
    SUBSTRACT = 1,
    INVALID = std::numeric_limits<unsigned int>::max()
};

int main() {
    int x,y, result =0;
    unsigned int condValue;

    std::cout << "Podaj dwie liczby całkowite." << 
    std::endl << "x: ";

    std::cin >> x;
    std::cout << std::endl << "y: ";
    std::cin >> y;
    std::cout << std::endl << "Wybierz 0 - aby dodać liczby, 1 - aby je odjąć: ";
    std::cin >> condValue;
    std::cout << std::endl << "Wybrano: " << condValue << std::endl;
    Operation operation = static_cast<Operation>(condValue);
    switch (operation){
        case Operation::ADD:
            result = x + y;
            break;
        case Operation::SUBSTRACT:
            result = x -y;
            break;
        default:
            std::cout << "Nieokreślone działanie" << std::endl;
    }
    std::cout << "Wynik operacji na liczbach:" << result << std::endl;
    return 0;
}
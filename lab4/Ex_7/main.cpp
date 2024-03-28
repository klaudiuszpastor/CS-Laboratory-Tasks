#include <iostream>
#include <iomanip>

int main() {
    int number_int = 2356295;
    float number_float = 2.723457;

    std::cout << "Liczba w reprezentacji szesnastkowej: " << std::setw(100) << std::setfill('0') << std::hex << number_int << std::endl;
    std::cout << "Liczba zmiennoprzecinkowa: " << std::setprecision(6) << number_float << std::endl;

    return 0;
}

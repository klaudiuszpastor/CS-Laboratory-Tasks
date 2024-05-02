#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{   
    // statyczne zmienne alokowane na stosie
    int a = 2;
    float b = 3.4;
    double c = 5.66;
    unsigned short d = 100;

    
    std::cout << "Adresy zmiennych na stosie" << std::endl;
    std::cout << &a << ' ' << &b << ' ' << &c << ' ' << &d << std::endl;
    // stos idzie w dół - nowe wartości są umieszczane na stosie w kolejności od 
    // najwyższego adresu pamięci do najniższego adresu pamięci

    std::vector<void*> zmienne = {&a, &b, &c, &d};
    // znalezienie największej wartości
    void* max = *std::max_element(zmienne.begin(), zmienne.end());
    std::cout<< "Największa zmienna na stosie: " << max << std::endl;

    std::sort(zmienne.begin(), zmienne.end());

    std::cout << "Posortowane adresy:" << std::endl;
    for (void* addr : zmienne) {
        std::cout << addr << std::endl;
    }

    // dynamicznie alokowane zmienne na stercie
    int * e = new int(42);
    float * f = new float(3.14);
    double * g = new double(24.2530252);
    unsigned short * h = new unsigned short(642);

    std::cout << "Adresy zmiennych na stercie" << std::endl;
    std::cout << &e << ' ' << &f << ' ' << &g << ' ' << &h << std::endl;
    // sterta idzie w górę

    std::vector<void*> zmienne1 = {&e, &f, &g, &h};
    std::sort(zmienne1.begin(), zmienne1.end());

    std::cout << "Posortowane adresy:" << std::endl;
    for (void* addr1 : zmienne1) {
        std::cout << addr1 << std::endl;
    }

    return EXIT_SUCCESS;
}
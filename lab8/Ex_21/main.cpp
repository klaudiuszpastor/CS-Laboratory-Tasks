#include <iostream>
#include <string.h>
#include "arrayUtils.h"

int main(void){

    int k = 1;
    char a,b;
    char * tablica = new(std::nothrow) char[5];

    std::cout << "Wpisuj znaki dopoki sie nie powtorza dwa razy:\n";
    
    for(int i = 0; i < 5*k; i++)
    {
        if(tablica == nullptr)
        {
            std::cout << "Failed to allocate memory" << std::endl;
            return EXIT_FAILURE;
        }
        std::cin >> std::noskipws >> a;
        (a == b) ? i = 5*k : tablica[i] = a;
        b = a;

        if(i == 5*k-1)
        {
            k++;        
            tablica = resizeArray(tablica, 5*k); 
        } else {
            continue;
        }
    }
    
    std::cout << tablica << std::endl;
    return EXIT_SUCCESS;
}
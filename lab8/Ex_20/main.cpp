#include <iostream>
#include "printmatrix.h"

int main(void){


    unsigned int size;
    std::cout << "Enter desired square matrix size:\n";
    std::cin >> size;
    
    //stworzenie listy list
    int ** matrix = new int*[size];
    for(int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }
    
    std::cout << "Enter " << size*size << " matrix elements.\n";
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
        

    print_squre_matrix(matrix, size);
    
    //zwolnienie pamięci
    for(int i = 0; i < size; i++)
        delete[] matrix[i];
    delete[] matrix;

    return EXIT_SUCCESS;
}

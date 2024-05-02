#include "matrix.h"

void print_matrix(int **square_matrix, unsigned int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i == 0) std::cout << "[";
            for(int j = 0; j < size; j++)
            {
                (j == 0) ? std::cout << "[" : std::cout << ",";
                std::cout << square_matrix[i][j];
                if(j == size - 1) std::cout << "]";
            }
            (i == size - 1) ? std::cout << "]" : std::cout << ",\n ";
    }
}
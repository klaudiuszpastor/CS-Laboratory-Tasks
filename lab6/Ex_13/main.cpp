#include "tabUtils.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>


int main ()
{
    const unsigned int tab_size = 5;
    srand(time(NULL));
    int tabu[tab_size];

    for (int i =0; i < tab_size; i++)
    {
        tabu[i] = rand() % 100;
    }

    printTab(tabu, sizeof(tabu)/sizeof(int));
    reverseTab(tabu, sizeof(tabu)/sizeof(int));
    printTab(tabu, sizeof(tabu)/sizeof(*tabu));


    return 0;
}
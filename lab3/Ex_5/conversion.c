#include <stdio.h>
#include "conversion.h"

void decimalToBinary(unsigned int number)
{
    int a[10], i;
    for (i =0 ; number>0; i++ )
    {
        a[i] = number % 2;
        number = number / 2;
    }

    printf("Binary: \n");
    for(i = i -1;i >= 0; i--)
    {
    printf("%d",a[i]);
    }
    
    
}
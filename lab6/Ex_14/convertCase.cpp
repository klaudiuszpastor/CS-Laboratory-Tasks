#include <iostream>
#include "convertCase.h"
#include <cstring>


void convertCase(char text[])
{
    for (int i =0; i < strlen(text) ; i++)
    {
        if (text[i] >= 65 && text[i] <=90 )
            text[i] = text[i] +32;
        else if (text[i] >=97 && text[i] <=122)
            text[i] = text[i] -32;
    }
}
// Standardowe wejscie/wyjscie
#include <stdio.h>
// Deklaracja funkcji exit()
#include <stdlib.h>
// Deklaracja funkcji strlen()
#include <string.h>

int main()
{
    // Otworz plik
    FILE * fPtr = fopen("input.txt","w");
    if (fPtr == NULL)
    {
        printf("Failed to open the file\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter 20 ASCII characters, if q/Q break\n");
    char text;
    for (int i=0; i<=20; i++)
    {
        scanf("%c",&text);
        if ((text == 'q') || (text == 'Q'))
        {
            printf("q/Q detected\n");
            break;
        }
        else // zapisanie danych do pliku
            fprintf(fPtr,"%c",text);
    }

    // Zamkniecie pliku
    if (fclose(fPtr) != 0)
    {
        printf("Failed to close the file \n");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
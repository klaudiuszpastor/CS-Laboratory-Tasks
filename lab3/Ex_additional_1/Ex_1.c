#include <limits.h>
#include <stdio.h>

int main()
{
    int x = INT_MAX;
    int y = INT_MIN;

    printf("Przekrocznie maksymalnej wartości INX_MAX: %d\n", x+1);
    printf("Przekrocznie minimalnej wartości INT_MIN: %d\n", y-1);

    unsigned int z = UINT_MAX;
    printf("Przekrocznie maksymalnej wartości UINT_MAX: %u\n", z+1);

    char i = CHAR_MAX;
    char o = CHAR_MIN;

    printf("Przekrocznie maksymalnej wartości INX_MAX: %d\n", i+1);
    printf("Przekrocznie minimalnej wartości INT_MIN: %d\n", o-1);


    return 0;
}
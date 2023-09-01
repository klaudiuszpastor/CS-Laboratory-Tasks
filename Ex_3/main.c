#include <stdio.h>

int x = 1 ;
float y = 0.25 ;
float z = 0.3 ;
int i = 10 ;
double o = 200 ;
long double l = 300000000 ;


int main()
{
    printf("Size of x: %d\n",sizeof(x));
    printf("Size of y: %d\n",sizeof(y));
    printf("Size of z: %d\n",sizeof(z));
    printf("Size of i: %d\n",sizeof(i));
    printf("Size of float: %d\n",sizeof(float));
    printf("Size of o: %d\n",sizeof(o));
    printf("Size of i: %d\n",sizeof(l));
    return 0;
}
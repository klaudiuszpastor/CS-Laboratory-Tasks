#include <stdio.h>
#include <math.h>
#include "zeros.h"

void zeros(float a, float b, float c){
    float delta = b*b - 4*a*c ;

    if (delta <0 ){
        printf("Function has no root\n");
    }
    else if (delta == 0){
        float x1 = (-b) / (2*a);
        printf("Function has one root %2.f\n",x1);
    }
    else{
        float x1 = ((-b)-sqrt(delta)) / (2*a);
        float x2 = ((-b)+sqrt(delta)) / (2*a);
        printf("Two roots of the function: %f i %f\n",x1,x2);
    }
}
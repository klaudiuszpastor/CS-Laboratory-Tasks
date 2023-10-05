#include <stdbool.h>

int gcd(unsigned int x, unsigned int y){
    /* Euclidean algorithm
    The algorithm using the modulo function is the second equivalent 
    implementation of the Euclidean algorithm. Below is a version of 
    calculating the GCD of numbers a and b using the remainder operation 
    (modulo):

    1. calculate c as the remainder of dividing a by b
    2. replace a with b, then b with c
    3. if the value of b is 0, then a is the GCD value you are 
    looking for, otherwise go to step 1 ~from wikipedia*/
    
    int p;
    while (y != 0){
        p = y;      
        y = x % y;  
        x = p;
    }
    return x;
}

bool isPrime(unsigned int x){
    if (x<2) return false;
    else if (x ==2 ) return true;
    else{
        for (int i = 2; i<x; i++){
            if (x % i == 0) return false;
        }
        return true;
    }
}

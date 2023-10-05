#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "rsa_utils.h"


int main(void){


    unsigned int p,q,e,totient;
    int gcd1 = 0;
    int gcd2 = 0;
    p = 0;
    q = 0;
    srand(time(NULL));

    while(true){
        while(isPrime(p) == false){
            p = rand() % 100;
            printf("p = %u\n",p);
        }
        while(isPrime(q) == false){
            q = rand() % 100;
            printf("q = %u\n",q);
        }
        totient = (p-1) * (q-1);
        e = 1 + rand() % totient;
        gcd1 = (e,p-1);
        gcd2 = (e,q-1);
        if (gcd1 ==1 && gcd2 == 1 ) return true;
        printf("number %u is prime: %s\n",p, isPrime(p) ? "true" : "false");
        printf("number %u is prime: %s\n",q, isPrime(q) ? "true" : "false");
        printf("p = %u, q = % u, e = %u\n",p,q,e);
        printf("totient is equal: %u\n", totient);
        printf("gcd %u, %u is equal: %d\n",e,p-1,gcd(e,p-1));
        printf("gcd %u, %u is equal: %d\n",e,q-1,gcd(e,q-1));

        return 0;
    }
}
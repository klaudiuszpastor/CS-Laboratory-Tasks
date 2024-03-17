#include <stdio.h>

// Zmienna globalna
int globalVar = 3;
// Niezainicjalizowana zmienna globalna
unsigned long uninitializedGlobalVar;
// Statyczna zmienna globalna
static float staticGlobalVar = 1.5;
// Globalna stała
const short globalConst = 4;

int main(){
    //Statyczna zmienna lokalna
    static double staticLocalVar = 2.0;
    //Zmienna lokalna
    long localVar = 125;
    //Niezainicjalizowana zmienna lokalna
    int uninitializedLocalVar;
    //Lokalna stała
    const unsigned int localConst = 11;

    printf (" Global variable : % d \n " , globalVar) ;
    printf (" Uninitialized global variable : % d \n " ,uninitializedGlobalVar ) ;
    printf ( " Static global variable : % f \n " ,staticGlobalVar );
    printf ( " Global constant : % d \n " , globalConst ) ;
    printf ( " Static local variable : % f \n " , staticLocalVar ) ;
    printf ( " Local variable : % d \n " , localVar ) ;
    // Wyswietli losowa wartosc
    printf ( " Uninitialized local variable : % d \n " , uninitializedLocalVar ) ;
    printf ( " Local constant : % u \n " , localConst ) ;
    return 0;
}



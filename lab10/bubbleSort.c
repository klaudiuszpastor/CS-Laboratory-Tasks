#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int *tab, unsigned int n)
{
    if (tab!=NULL) {
        bool wasSwapped = false;
        for (unsigned int i =0; i<n -1;++i) {
            for (unsigned int j =0; j<n-i-1;++j)

            if (tab[j] > tab[j+1]) {
            int temp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = temp;
            wasSwapped = true;
            }
            if (!wasSwapped) break;
        }
    }
}
/*
void bubbleSort (int * tab, unsigned int n)
{
    if (tab!= NULL)
        // n-1 przejsc
        for (int i =0; i < n-1; ++i)
        // n-1 porownan (-1 dla i=0,1,2,...)
            for (int j =0; j<n-i-1; ++j)
            // zamiana kolejnosci elementow
            if (tab[j] > tab[j+1]) {
            int temp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = temp;
            }
}
*/
int main() {
    const unsigned int tabSize = 5;
    int tab[] = {4,-7,0,8,-3};
    bubbleSort(tab,tabSize);
    for (unsigned int i =0; i <tabSize; ++i)
        printf("%d ",tab[i]);
    return 0;
}
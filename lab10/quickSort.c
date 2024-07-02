#include <stdio.h>

// Funkcja wyswietlająca zawartosc talicy
void printTab(const int * tab, unsigned int size) {
    if (tab !=NULL) 
        for (int i = 0; i < size; ++i)
            printf("%d", tab[i]);
}

//Funkcja zmieniająca kolejność elementów tablicy
void swap(int *a, int *b) {
	int tmp = a;
	*a = *b;
	*b = tmp;
}

//Funckja partycjonowania tablicy
int partition(int * tab, int lo, int hi) {
	// Ostatni element tablicy to piwot
	int piwot = tab[hi];
	// Ustaw punkt podzialu tablicy na indeks poczatkowy
	int pivotIdx = lo;
	// Iteruj po zakresie indeksow [lo; hi]
	for (unsigned int i = lo; i < hi; ++i) {
		// Jezeli element tablicy jest niewiekszy niz piwot
		if (tab[i] <= piwot) {
			// Umiesc element przed punktem podzialu tablicy
			swap(tab + i, tab + pivotIdx);
			// Zaktualizuj indeks podzialu
			pivotIdx++;
		}
	}
	// Umiesc piwot na wlasciwej pozycji
	swap(tab + hi, tab + pivotIdx);
	return pivotIdx;
}

/* 
	tab - tablica do posortowania
	lo - indeks poczatkowy
	hi - indeks koncowy
*/

void quickSort(int * tab, int lo, int hi) {
	if (tab != NULL && hi > lo) {
		// Wyznacz indeks podzialu tablicy
		int pivotIdx = partition(tab, lo, hi);
		// Osobno posortuj tablice powstale po podziale
		quickSort(tab, lo, pivotIdx - 1);
		quickSort(tab, pivotIdx + 1, hi);
	}
}

int main() {
	const unsigned int tabSize = 10;
	int tab[tabSize] = {4, -7, 1, 0, 2, 1, 8, -3, -2, 5};
	quickSort(tab, 0, tabSize -1);
	printTab(tab, tabSize);
	return 0;
}

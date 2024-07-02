#include <iostream>
#include "median.h"
#include <cstring>


void printTab(const int * tab, unsigned int size) {
	if (tab != nullptr && size > 0) {
		std::cout << "[";
		for (unsigned int i =0; i < size; ++i) {
			std::cout << tab[i];
			if (i  != size - 1)
				std::cout << " , ";
		}
		std::cout << "]" << std::endl;
	}
}
void merge(int * array, unsigned int lo, unsigned int mi, unsigned int hi) {
	// Wykonaj kopie przekazanej tablicy
	const unsigned int tabSize = hi + 1;
	int arrayCopy[tabSize];
	memcpy(arrayCopy, array, sizeof(*arrayCopy) * tabSize);

	unsigned int iterator = lo;
	unsigned int loIterator = lo;
	unsigned int hiIterator = mi + 1;
	// Scalaj tablice do tablicy wynikowej az do wyczerpania elementow
	// jednej z podtablic
	while (loIterator <= mi && hiIterator <= hi)
		if (arrayCopy[loIterator] <= arrayCopy[hiIterator])
			array[iterator++] = arrayCopy[loIterator++];
		else
			array[iterator++] = arrayCopy[hiIterator++];

		//Dopisz pozostale elementy pierwszej podtablicy do tablicy
		// wynikowej, jesli istnieja
	while (loIterator <= mi)
		array[iterator++] = arrayCopy[loIterator++];

	while (hiIterator <= hi)
		array[iterator++] = arrayCopy[hiIterator++];
}

void mergeSort(int * array, unsigned int lo, unsigned int hi) {
	if (array && hi > lo){
		//Znajdz punkt podzialu tablicy
		unsigned int mi = (lo + hi) / 2;
		// Wywolania rekurencyjne na kazdej z powstalych podtablic
		mergeSort(array, lo, mi);
		mergeSort(array, mi+1, hi);
		// Scal tablice
		merge(array, lo, mi, hi);
	}
}

bool median(const int *tab, unsigned int n, float *buffer) {
    if(tab != nullptr && buffer != nullptr && n > 0) {
        if (n % 2 == 0) {
            *buffer = ((float)(tab[n/2 - 1] + tab[n/2])) / 2;
        } else {
            *buffer = tab[n/2];
        }
        return true;
    } else {
        return false;
    }
}
#include <stdio.h>
#include <string.h>

// Funkcja wyswietlajaca zawartosc tablicy
void printTab(const int * tab, unsigned int size) {
	if (tab)
		for (unsigned int i = 0; i < size; ++i)
			printf(%d, tab[i]);
}

// Funkcja scalania tablic
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
		array[iterator++] = arrayCopy[hiIterator++];
}

/*
	array - tablica do posortowania
	lo - indeks poczatkowy
	hi - indeks koncowy

*/

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

int main () {
	int tab [] = {4 , -7 , 1 , 0 , 2 , 1 , 8 , -3 , -2 , 5};
	const unsigned int tabSize = sizeof ( tab ) / sizeof (* tab ) ;
	mergeSort (tab, 0, tabSize - 1) ;
	printTab ( tab, tabSize ) ;
	return 0;
}
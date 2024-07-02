#include <stdio.h>
#include <stdlib.h>

// Struktura węzła listy jednokierunkowej
typedef struct Node {
	int head;
	struct Node * tail;
} Node_t;

// Każdy węzeł jest osobno tworzony na stercie, wykorzystując funkcję createNode():
Node_t * createNode(int head, Node_t * tail) {
	// Dynamicznie utworz wezel
	// Rownoważnie : (Node_t *) malloc (sizeof(Node_t))
	Node_t * node = (Node_t *) malloc(sizeof(*node));
	// Zainicjalizuj wezel
	node -> head = head;
	node -> tail = tail;
	// Zwroc utworzony wezel
	return node;
}

// Kolejne węzły mogą być dodawane na koniec (pushBack()) lub na początek listy (pushFront()).
// Przejście do kolejnego węzła listy odbywa się przez odwołanie do wskaźnika tail. Funkcja
// pushFront() przyjmuje wksaźnik na wskaźnik na początek listy, ponieważ konieczna jest
// modyfikacja samego wskaźnika, a nie zmiennej przez niego wskazywanej - pod wartość wskaźnika
// na początek listy przypisywany jest adres nowo utworzonego elementu (*root = node):

void pushBack(Node_t * root, int value) {
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		// Przejdz na koniec listy
		while (currentNode -> tail != NULL)
			currentNode = currentNode -> tail;
			// Dodaj nowy element na koniec listy
			currentNode -> tail = createNode(value, NULL);
	}
}

void pushFront(Node_t ** root, int value) {
	if (root != NULL) {
		// Utworz nowy wezel na poczatku listy
		// *root to adres poczatku listy
		Node_t * node = createNode(value, *root);
		*root = node;
	}
}

// Zdejmowanie elementów z listy można zaimplementować w sposób analogiczny. Funckje popFront()
// i popBack() przyjmują jako argumenty wskaźnik na wskaźnik na początek listy oraz wskaźnik na
// bufor, do którego ma zostać zapisana wartość zdejmowanego węzła. W przypadku niepowodzenia
// funkcje zwracają wartość false

bool popBack(Node_t ** root, int * buffer) {
	bool result = false;
	if (root != NULL && *root != NULL && buffer != NULL) {
		Node_t * currentNode = *root;
		// Jezeli lista ma jeden element, usun go
		if (currentNode -> tail == NULL) {
			// Odczytaj wartosc
			*buffer = currentNode->head;
			// Usun element
			free(currentNode);
			*root = NULL;
		}
		// W przeciwnym wypadku przejdz do przedostatniego elementu
		else {
			while (currentNode -> tail -> tail != NULL)
				currentNode = currentNode->tail;
				// Odczytaj wartosc ostatniego elementu
				*buffer = currentNode -> tail -> head;
				// Usun ostatni element
				free(currentNode -> tail);
				// Ustaw koniec listy na przedostatnim elemencie
				currentNode -> tail = NULL;
		}
		// Sukces
		result = true;
	}
	return result;
}

bool popFront(Node_t ** root, int * buffer) {
	bool result = false;
	if (root != NULL && *root != NULL && buffer != NULL) {
		// Odczytaj wartosc pierwszego elementu
		*buffer = (*root)->head;
		// Wez drugi element z listy
		Node_t * next = (*root)->tail;
		// Usun pierwszy element
		free(*root);
		// Ustaw poczatek listy na drugi element
		* root = next;
		// Sukces
		result = true;
	}
	return result;
}

// Korzystajac z tak zaimplementowanej listy można odtworzyć strukturę:
Node_t * root = createNode(112, NULL);
pushBack(root, 17);
pushFront(&root, 14);

int value;
bool result;
result = popFront(&root, &value);
if (result) printf("Popped value: %d\n", value);
result = popBack(&root, &value);
if (result) printf("Popped value: %d\n", value);
result = popFront(&root, &value);
if (result) printf("Popped value: %d\n", value);

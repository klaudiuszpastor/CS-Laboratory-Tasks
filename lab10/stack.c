#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int head;
	struct Node * tail;
} Node_t;

Node_t * createNode(int value) {
	Node_t * node = (Node_t *) malloc(sizeof(*node));
	node -> head = value;
	node -> tail = NULL;
	return node;
}

bool isEmpty(Node_t * root) {
	// Rownowaznie root = NULL
	return !root;
}

void push(Node_t ** root, int value) {
	if (root) {
		// Utworz nowy wezel
		Node_t * node = createNode (value);
		// Dowiaz elemnt do stosu
		node-> tail = *root;
		// Ustaw element na wierzcholek stosu
		*root = node;
	}
}

bool pop(Node_t ** root, int * buffer) {
	bool result = false;
	// Rownowaznie if (root != NULL && *root != NULL)
	if (root && *root) {
		Node_t * node = *root;
		// Przesun wskaznik wierzcholka stosu
		*root = (*root)-> tail;
		*buffer = node-> head;
		free(node);
		// Sukces
		result = true;
	}
	return result;
}

int main() {
	Node_t * root = NULL;
	push(&root, 14);
	push(&root, 112);
	push(&root, 17);

	int value;
	bool result;
	result = pop(&root, &value);
	if (result) printf("Popped value: %d\n", value);
	result = pop(&root, &value);
	if (result) printf("Popped value: %d\n", value);
	result = pop(&root, &value);
	if (result) printf("Popped value: %d\n", value);
	return EXIT_SUCCESS;
}

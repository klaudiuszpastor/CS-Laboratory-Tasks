#include <stdio.h>
#include <stdlib.h>
/* Do implementacji wierzchołka grafu można wykorzystać strukturę Node. Dodatkowo należy
zdefiniować struktury Edge oraz Graph realizujące odpowiednio krawędź między wierzchołkami
o wartośćiach start i end oraz graf, jako zbiór wierzchołków (list) o rozmiarze size: */
typedef struct Edge {
	int start, end;
} Edge_t;

typedef struct Graph {
	// Nodes count
	unsigned int size;
	//Nodes list
	Node_t ** list;
} Graph_t;

/* Poszczególne wirzchołki tworzone są z wykorzystaniem funkcji createNode(), a usuwane przy
użyciu funkcji deleteNode(). WArto zwrócić uwagę, że dla zadanego wierzchołka usuwane są 
wszystkie wierzchołki należące do jego listy sąsiedztwa */

//Tworzenie i usuwanie wierzchołków grafu
Node_t * createNode(int head, Node_t * tail) {
	Node_t * node = (Node_t *) malloc (sizeof(*node));
	node -> head = head;
	node -> tail = tail;
	return node;
}

void deleteNode(Node_t * node) {
	while (node) {
		Node_t * tmp = node -> tail;
		free(node);
		node = tmp;
	}
}

//Tworzenie i usuwanie struktury grafu
Graph_t * createGraph(Edge_t * edges, unsigned int edgesCount, unsigned int size) {
	Graph_t * graph = (Graph_t *) malloc(sizeof(*graph));
	graph -> list = (Node_t **) calloc(size, sizeof(Node_t *);
	graph -> size = size;

	if (edges) {
		for (unsigned int i = 0; i < edgesCount; ++i) {
			int start = edges[i].start;
			int end = edges[i].end;

			Node_t * node = createNode(end, graph -> list[start]);
			graph -> list[start] = node;
		}
	}


	return graph;
}

void deleteGraph (Graph_t * graph) {
	if (graph) {
		for (unsigned int i = 0; i < graph -> size; ++i) {
			deleteNode(graph->list[i]);
		}
		free(graph -> list);
		free(graph);
	}
}

// Aby wypisać na ekranie listę sąsiedztwa można posłużyć się funkcją printAdjacencyList():
void printAdjacencyList(Graph_t * graph) {
	if (graph) {
		for (unsigned int i = 0; i < graph -> size; ++i) {
			Node_t * node = graph -> list[i];
			printf("%d ->",i);
			while (node != NULL) {
				printf("%d, ", node->head);
				node = node -> tail;
			}
			printf("\n")
		}
	}
}

// Wykorzystując przedstawioną implementację grafu
int main() {
	// Krawedzie (i,j) miedzy wierzcholkami o wartosciach i oraz j
	Edge_t edges[] = {
		{0,1}, {1,2}, {1,4}, {2,0}, {2,3}, {2,4}, {3,2}, {3,4}, {4,5} };
		const int size = 6;
		const int edgesCount = sizeof(edges) / sizeof(Edge_t);
		Graph_t * graph = createGraph(edges, edgesCount, size);
		pirntAdjacencyList(graph);
		deleteGraph(graph);
		return 0;
}

// Funkcja createGraph() realizuje graf skierowany. Aby utworzyć graf prosty należy odpowiednio 
// zmodyfikować funkcję createGraph(), dodając symetryczne listy sąsiedztwa dla węzłów z drugiego
// końca krawędzi:

Graph_t * createGraph(Edge_t * edges, unsigned int egdesCount, unsigned int size) {
	Graph_T * graph = (Graph_t *) malloc(sizeof(*graph));
	graph -> list = (Node_t **) calloc(size, sizeof(Node_t *));
	graph -> size = size;

	if (edges) {
		for (unsigned int i = 0; i < edgesCount; ++i) {
			int start = edges[i].start;
			int end = edges[i].end;

			Node_t * node = createNode(end.graph -> list[start]);
			graph -> list[start] = node;
			//Undirected graph
			node = createNode(start, graph->list[end]);
			graph -> list[end] = node;
		}
	}
	return graph;
}

// Kod umożlwijaący utworzenie skierowanego grafu z wagami. Wagi poszczególnych krawędzi
// przychowywane są pod zmienną weight

typedef struct Node {
	int head, weight;
	struct Node * tail;
} Node_t;

typedef struct Edge {
	int start, end, weight;
} Edge_t;

typedef struct Graph {
	// Nodes count
	unsigned int size;
	// Adjacency list
	Node_t ** list;
} Graph_t;


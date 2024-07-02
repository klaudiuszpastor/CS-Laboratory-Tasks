#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// Tworzenie nowego węzła
Node_t *createNode(int head, Node_t *tail) {
    Node_t *node = (Node_t *)malloc(sizeof(*node));
    node->head = head;
    node->tail = tail;
    return node;
}

// Dodawanie elementu na koniec kolejki
void push(Node_t **root, int value) {
    if (*root == NULL) {
        *root = createNode(value, NULL);
    } else {
        Node_t *currentNode = *root;
        while (currentNode->tail != NULL) {
            currentNode = currentNode->tail;
        }
        currentNode->tail = createNode(value, NULL);
    }
}

// Usuwanie elementu z początku kolejki
bool pop(Node_t **root, int *buffer) {
    if (root == NULL || *root == NULL || buffer == NULL) {
        return false;
    }

    Node_t *temp = *root;
    *buffer = temp->head;
    *root = temp->tail;
    free(temp);

    return true;
}

// Sprawdzanie, czy kolejka jest pusta
bool isEmpty(Node_t *root) {
    return root == NULL;
}

// Wyświetlanie kolejki
void printQueue(Node_t *node) {
    while (node != NULL) {
        printf("%d -> ", node->head);
        node = node->tail;
    }
    printf("NULL\n");
}

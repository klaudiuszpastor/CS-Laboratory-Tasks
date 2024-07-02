#include <stdio.h>
#include <stdlib.h>
#include "node.h"

// Tworzenie nowego węzła
Node_t *createNode(int head, Node_t *tail) {
    Node_t *node = (Node_t *)malloc(sizeof(*node));
    node->head = head;
    node->tail = tail;
    return node;
}

// Dodawanie elementu na koniec listy
void pushBack(Node_t *root, int value) {
    Node_t *currentNode = root;
    if (currentNode != NULL) {
        while (currentNode->tail != NULL)
            currentNode = currentNode->tail;
        currentNode->tail = createNode(value, NULL);
    }
}

// Dodawanie elementu na początek listy
void pushFront(Node_t **root, int value) {
    if (root != NULL) {
        Node_t *node = createNode(value, *root);
        *root = node;
    }
}

// Usuwanie elementu z końca listy
bool popBack(Node_t **root, int *buffer) {
    bool result = false;
    if (root != NULL && *root != NULL && buffer != NULL) {
        Node_t *currentNode = *root;
        if (currentNode->tail == NULL) {
            *buffer = currentNode->head;
            free(currentNode);
            *root = NULL;
        } else {
            while (currentNode->tail->tail != NULL)
                currentNode = currentNode->tail;
            *buffer = currentNode->tail->head;
            free(currentNode->tail);
            currentNode->tail = NULL;
        }
        result = true;
    }
    return result;
}

// Usuwanie elementu z początku listy
bool popFront(Node_t **root, int *buffer) {
    bool result = false;
    if (root != NULL && *root != NULL && buffer != NULL) {
        *buffer = (*root)->head;
        Node_t *next = (*root)->tail;
        free(*root);
        *root = next;
        result = true;
    }
    return result;
}

// Usuwanie elementu o zadanym indeksie
void removeByIndex(Node_t **root, unsigned int index) {
    if (root == NULL || *root == NULL) return;

    Node_t *temp = *root;

    if (index == 0) {
        *root = temp->tail;
        free(temp);
        return;
    }

    for (unsigned int i = 0; temp != NULL && i < index - 1; i++) {
        temp = temp->tail;
    }

    if (temp == NULL || temp->tail == NULL) return;

    Node_t *next = temp->tail->tail;
    free(temp->tail);
    temp->tail = next;
}

// Wyświetlanie listy
void printList(Node_t *node) {
    while (node != NULL) {
        printf("%d -> ", node->head);
        node = node->tail;
    }
    printf("NULL\n");
}

#pragma once
#include <stdbool.h>

// Struktura węzła kolejki
typedef struct Node {
    int head;
    struct Node *tail;
} Node_t;

// Funkcje kolejki
void push(Node_t **root, int value);
bool pop(Node_t **root, int *buffer);
bool isEmpty(Node_t *root);
void printQueue(Node_t *node);

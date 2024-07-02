#include <stdio.h>
#include "queue.h"

// Testowanie funkcji kolejki
void testQueue() {
    Node_t *queue = NULL;

    // Testowanie pustej kolejki
    printf("Is queue empty? %s\n", isEmpty(queue) ? "Yes" : "No"); // Oczekiwane: Yes

    // Dodawanie elementów do kolejki
    push(&queue, 10);
    push(&queue, 20);
    push(&queue, 30);
    printf("Queue after pushing 10, 20, 30: ");
    printQueue(queue); // Oczekiwane: 10 -> 20 -> 30 -> NULL

    // Sprawdzanie, czy kolejka jest pusta
    printf("Is queue empty? %s\n", isEmpty(queue) ? "Yes" : "No"); // Oczekiwane: No

    // Usuwanie elementów z kolejki
    int buffer;
    pop(&queue, &buffer);
    printf("Popped element: %d\n", buffer); // Oczekiwane: 10
    printf("Queue after popping: ");
    printQueue(queue); // Oczekiwane: 20 -> 30 -> NULL

    pop(&queue, &buffer);
    printf("Popped element: %d\n", buffer); // Oczekiwane: 20
    printf("Queue after popping: ");
    printQueue(queue); // Oczekiwane: 30 -> NULL

    pop(&queue, &buffer);
    printf("Popped element: %d\n", buffer); // Oczekiwane: 30
    printf("Queue after popping: ");
    printQueue(queue); // Oczekiwane: NULL

    // Sprawdzanie, czy kolejka jest pusta
    printf("Is queue empty? %s\n", isEmpty(queue) ? "Yes" : "No"); // Oczekiwane: Yes
}

int main() {
    testQueue();
    return 0;
}

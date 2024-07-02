#include <stdio.h>
#include "linked_list.h"

// Testowanie funkcji removeByIndex
void testRemoveByIndex() {
    Node_t *head = NULL;

    // Przypadek 1: Pusta lista - usuwanie węzła o indeksie 0
    removeByIndex(&head, 0);
    printList(head); // Oczekiwane: NULL

    // Przypadek 2: Pusta lista - usuwanie węzła o indeksie większym niż 0
    removeByIndex(&head, 1);
    printList(head); // Oczekiwane: NULL

    // Przypadek 3: Lista jednoelementowa - usuwanie węzła o indeksie 0
    pushFront(&head, 10);
    removeByIndex(&head, 0);
    printList(head); // Oczekiwane: NULL

    // Przypadek 4: Lista jednoelementowa - usuwanie węzła o indeksie większym niż 0
    pushFront(&head, 20);
    removeByIndex(&head, 1);
    printList(head); // Oczekiwane: 20 -> NULL

    // Przypadek 5: Lista n-elementowa - usuwanie węzła o indeksie 0
    pushFront(&head, 30);
    pushFront(&head, 40);
    pushFront(&head, 50);
    removeByIndex(&head, 0);
    printList(head); // Oczekiwane: 40 -> 30 -> 20 -> NULL

    // Przypadek 6: Lista n-elementowa - usuwanie węzła o indeksie 1
    removeByIndex(&head, 1);
    printList(head); // Oczekiwane: 40 -> 20 -> NULL

    // Przypadek 7: Lista n-elementowa - usuwanie węzła o indeksie n + 1
    removeByIndex(&head, 3);
    printList(head); // Oczekiwane: 40 -> 20 -> NULL

    // Dodatkowe czyszczenie listy
    int buffer;
    while (head != NULL) {
        popFront(&head, &buffer);
    }
}

int main() {
    testRemoveByIndex();
    return 0;
}

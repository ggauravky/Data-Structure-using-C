#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    first->data = 10;
    first->prev = second;
    first->next = second;

    second->data = 20;
    second->prev = first;
    second->next = first;

    printf("Circular Doubly Linked List:\n");
    struct Node* temp = first;

    for (int i = 0; i < 4; i++) {
        printf("%d ↔ ", temp->data);
        temp = temp->next;
    }
}

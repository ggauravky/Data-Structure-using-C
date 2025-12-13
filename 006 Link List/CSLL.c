#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = head;  // IMPORTANT: circular link

    printf("Circular Singly Linked List:\n");
    struct Node* temp = head;

    for (int i = 0; i < 5; i++) {   // print 5 nodes to show circular nature
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

#include <stdio.h>
#include <stdlib.h>

// ----------- Node Structure -----------
struct Node {
    int data;              // data part
    struct Node* next;     // link part (address of next node)
};

int main() {

    // Creating 3 pointers (nodes)
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocating memory for nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data & link
    head->data = 10;
    head->next = second;    // head -> second

    second->data = 20;
    second->next = third;   // second -> third

    third->data = 30;
    third->next = NULL;     // third -> NULL (end of list)

    // Traversal
    struct Node* temp = head;

    printf("Linked List: \n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);  
        temp = temp->next;              // move to next node
    }
    printf("NULL");

    return 0;
}

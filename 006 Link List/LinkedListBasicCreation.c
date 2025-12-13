#include <stdio.h>
#include <stdlib.h>  // for malloc

// 👉 Define a Node structure
struct Node {
    int data;              // to store the value
    struct Node* next;     // to store address of next node
};

int main() {
    // 👉 Create 3 nodes using dynamic memory allocation
    struct Node* head = NULL;   // head pointer (start of list)
    struct Node* second = NULL;
    struct Node* third = NULL;

    // 👉 allocate memory for 3 nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // 👉 assigning data and linking nodes

    // first node
    head->data = 10;       // store value 10
    head->next = second;   // link first node to second node

    // second node
    second->data = 20;     // store value 20
    second->next = third;  // link second node to third node

    // third node
    third->data = 30;      // store value 30
    third->next = NULL;    // last node, so next is NULL

    // 👉 Traversal: start from head and move till NULL
    struct Node* temp = head;    // temp pointer for traversal

    printf("Linked List elements are:\n");

    while (temp != NULL) {       // loop until we reach NULL
        printf("%d\n", temp->data);  // print current node data
        temp = temp->next;           // move to next node
    }

    // 👉 free allocated memory (good practice)
    free(head);
    free(second);
    free(third);

    return 0;
}

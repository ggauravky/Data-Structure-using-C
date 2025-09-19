#include <stdio.h>
#include <stdlib.h>

// define a node
struct Node
{
    int data;
    struct node*next;  //pointer to the next node
};


int main() {
    // create first node
    struct Node* head = NULL;

    // dyanamic memory allocation , for a node
    head = (struct Node*)malloc(sizeof(struct Node));

    // put data in the node
    head->data =100;

    // end of list , so netc is NULL
    head->next=NULL;

    // print the data
    printf("data :%d\n",head->data);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next; 
};

void linkedListTraversal(struct node *ptr){
    while (ptr !=NULL){
        printf("elements :%d\n",ptr->num);
        ptr=ptr->next;
    }
}

int main() {
    // declare 4 node pointers
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    // allocate memory for nodes in the linked list in heap
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    // link first to second node:
    head->num=7;
    head->next=second;

    // link second and third nodes:
    second->num=12;
    second->next=third;

    // link third and fourth nodes:
    third->num=123;
    third->next=fourth;

    // link fourth and third nodes:
    fourth->num=132;
    fourth->next=NULL;

    linkedListTraversal(head);


    return 0;
}
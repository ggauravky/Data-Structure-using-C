struct Node* insertEmpty(struct Node* head, int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    head = newNode;   // head now points to new node
    return head;
}


// -------------

struct Node* insertBegin(struct Node* head, int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = head;  // new node points to old first
    head = newNode;        // head becomes new node

    return head;
}


// -------------

struct Node* insertEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}


// -------------

void insertAfter(struct Node* prevNode, int value) {

    if (prevNode == NULL) {
        printf("Previous node cannot be NULL!");
        return;
    }

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;

    newNode->next = prevNode->next;  
    prevNode->next = newNode;
}
// -------------
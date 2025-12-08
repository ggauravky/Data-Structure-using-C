struct Node* deleteFirst(struct Node* head) {
    if (head == NULL) return NULL;

    struct Node* temp = head;
    head = head->next; // move head

    free(temp); // delete old first

    return head;
}


// -------------


struct Node* deleteLast(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);       // delete last
    temp->next = NULL;

    return head;
}


// -------------

struct Node* deleteValue(struct Node* head, int value) {

    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return head;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return head;

    prev->next = temp->next;
    free(temp);

    return head;
}



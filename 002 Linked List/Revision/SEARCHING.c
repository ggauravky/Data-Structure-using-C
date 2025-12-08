int search(struct Node* head, int key) {
    struct Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key) return 1;
        temp = temp->next;
    }

    return 0;
}

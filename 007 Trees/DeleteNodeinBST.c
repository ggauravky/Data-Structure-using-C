struct Node* findMin(struct Node* root) {
    while (root->left != NULL)
        root = root->left;
    return root; // minimum value node
}

struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) return root;

    // Step 1: Search for the key
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else {
        // CASE 1: No child (leaf node)
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }

        // CASE 2: One child
        else if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // CASE 3: Two children
        struct Node* temp = findMin(root->right); // inorder successor
        root->data = temp->data;                  // replace value
        root->right = deleteNode(root->right, temp->data); // delete successor
    }

    return root;
}

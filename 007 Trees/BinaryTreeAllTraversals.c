#include <stdio.h>
#include <stdlib.h>

/* Node structure for Binary Tree */
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

/* Create new node function */
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

/* PREORDER Traversal: Root -> Left -> Right */
void preorder(struct Node *root) {
    if (root == NULL) return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

/* INORDER Traversal: Left -> Root -> Right */
void inorder(struct Node *root) {
    if (root == NULL) return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/* POSTORDER Traversal: Left -> Right -> Root */
void postorder(struct Node *root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {

    /*
        Creating tree manually:
        
                1
              /   \
             2     3
            / \   / \
           4  5  6   7
    */

    struct Node *root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Preorder Traversal: ");
    preorder(root);

    printf("\nInorder Traversal: ");
    inorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    printf("\n");

    return 0;
}

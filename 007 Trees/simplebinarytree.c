/* program: simple_binary_tree.c
   purpose: create a small binary tree manually and print preorder traversal
   compile: gcc simple_binary_tree.c -o simple_binary_tree
   run: ./simple_binary_tree
*/

#include <stdio.h>
#include <stdlib.h>

/* Node structure for a binary tree */
struct Node {
    int data;             // store integer data
    struct Node *left;    // pointer to left child
    struct Node *right;   // pointer to right child
};

/* helper: create a new node with given value */
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {              // check malloc success
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/* preorder traversal: root -> left -> right */
void preorder(struct Node *root) {
    if (root == NULL) return;           // base case: empty tree
    printf("%d ", root->data);          // visit root
    preorder(root->left);               // traverse left subtree
    preorder(root->right);              // traverse right subtree
}

int main() {
    /* Build the following tree manually:
             1
            / \
           2   3
          /   / \
         4   5   6
    */

    struct Node *root = createNode(1);      // root
    root->left = createNode(2);             // root->left = 2
    root->right = createNode(3);            // root->right = 3
    root->left->left = createNode(4);       // 2->left = 4
    root->right->left = createNode(5);      // 3->left = 5
    root->right->right = createNode(6);     // 3->right = 6

    printf("Preorder traversal: ");
    preorder(root);                         // print preorder
    printf("\n");

    /* In production code, free memory (omitted here for brevity) */
    return 0;
}

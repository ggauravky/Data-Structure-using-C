#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Binary tree node for expression tree */
struct Node {
    char data;
    struct Node *left, *right;
};

/* Create new node */
struct Node* createNode(char value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

/* Stack for tree nodes */
struct Stack {
    struct Node* arr[100];
    int top;
};

void push(struct Stack *s, struct Node* node) {
    s->arr[++s->top] = node;
}

struct Node* pop(struct Stack *s) {
    return s->arr[s->top--];
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

/* Build expression tree from postfix */
struct Node* buildTree(char postfix[]) {
    struct Stack s;
    s.top = -1;

    for (int i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];

        if (isalnum(ch)) {
            // Operand → create node & push
            push(&s, createNode(ch));
        }
        else if (isOperator(ch)) {
            // Operator → pop 2 nodes
            struct Node *right = pop(&s);
            struct Node *left = pop(&s);

            struct Node *newNode = createNode(ch);
            newNode->left = left;
            newNode->right = right;

            push(&s, newNode);
        }
    }

    return pop(&s); // final root
}

/* Traversals */
void inorder(struct Node* root) {
    if (!root) return;
    inorder(root->left);
    printf("%c ", root->data);
    inorder(root->right);
}

void preorder(struct Node* root) {
    if (!root) return;
    printf("%c ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    printf("%c ", root->data);
}

int main() {
    char postfix[] = "ABC*+";

    struct Node *root = buildTree(postfix);

    printf("Inorder  : ");
    inorder(root);
    printf("\n");

    printf("Preorder : ");
    preorder(root);
    printf("\n");

    printf("Postorder: ");
    postorder(root);
    printf("\n");

    return 0;
}

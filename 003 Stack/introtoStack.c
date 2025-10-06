/*
    Stack in C (Intro)
    ------------------
    - Linear data structure
    - Follows LIFO: Last In, First Out
    - Main operations:
        push() → insert element
        pop()  → remove element
*/

#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        top--;
}

int main() {
    push(10);
    push(20);
    pop();
    push(30);

    printf("Top element = %d\n", stack[top]);
    return 0;
}

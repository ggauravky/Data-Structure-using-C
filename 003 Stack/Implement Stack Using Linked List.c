/*
    ============================================
        STACK IMPLEMENTATION USING LINKED LIST
    ============================================

    --> Concept:
        A stack follows the LIFO (Last In First Out) principle.
        Using a linked list, we can dynamically manage memory
        without worrying about stack overflow (unless memory is full).

    --> Basic Operations:
        1. push()  : Insert (push) an element onto the stack.
        2. pop()   : Remove (pop) the top element from the stack.
        3. peek()  : View the top element without removing it.
        4. isEmpty(): Check if the stack is empty.

    --> Implementation Details:
        - Each node of the linked list contains:
              * data (to store value)
              * pointer (to the next node)
        - The 'top' pointer always points to the most recently added node.
        - Push operation adds a new node at the beginning.
        - Pop operation removes the node pointed to by 'top'.

    --> Advantages:
        - Dynamic size (no need to define max size).
        - Efficient use of memory.

    --> Disadvantages:
        - Slightly slower than array implementation due to pointer handling.

    --> Example Structure:
        struct Node {
            int data;
            struct Node* next;
        };

        struct Node* top = NULL;   // Initially stack is empty

    --> Push Example:
        Create a new node, assign data, point it to current top,
        then update 'top' to the new node.

    --> Pop Example:
        Check if stack is empty.
        If not, move 'top' to top->next and free the old top node.

    ============================================
*/

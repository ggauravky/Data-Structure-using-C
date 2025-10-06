/*
    Stack Implementation Using Array

    A stack is a linear data structure that follows the LIFO (Last In, First Out) principle.
    In array-based implementation, an integer 'top' is used to track the index of the stack's top element.

    Operations:
    1. Push(x): Insert element 'x' at the top of the stack.
       - Increment 'top' and place 'x' at stack[top].
       - Overflow occurs if 'top' exceeds the maximum size.

    2. Pop(): Remove the element from the top of the stack.
       - Return stack[top] and decrement 'top'.
       - Underflow occurs if 'top' = -1 (empty stack).

    3. Peek(): Retrieve the top element without removing it.

    4. isEmpty(): Check if stack is empty (top == -1).

    5. isFull(): Check if stack is full (top == MAX-1).

    Advantages: Fast operations (O(1) time).
    Limitation: Fixed size due to array capacity.
*/

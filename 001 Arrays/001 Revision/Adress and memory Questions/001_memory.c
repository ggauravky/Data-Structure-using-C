// How can you determine the size of an allocated portion of memory?

// there is no direct way to determine the size of a dynamically allocated memory block. Functions like malloc(), calloc(), and realloc() return only a pointer to the starting address, without providing any information about the amount of memory allocated.

// Reasons:

// malloc() returns a void pointer that only stores a memory address, not the size of the allocated block.

// sizeof(pointer) cannot be used, because it gives only the size of the pointer itself (usually 4 or 8 bytes), not the size of memory allocated through it.

// C does not store allocation size information in a way accessible to the programmer, unlike high-level languages such as Python or Java.

// Correct Method to Track Size:

// To know the size of allocated memory, the programmer must store the size separately, for example:

#include <stdlib.h>
#include <stdio.h>

int main() {

    int n = 10;
    int *ptr = malloc(n * sizeof(int));

    printf("Allocated memory for %d integers.\n", n);
    printf("Size of allocated memory: %zu bytes\n", n * sizeof(int));
    printf("Size of allocated memory: %zu bytes\n", *ptr);
    free(ptr);

    return 0;
}

// Here, the variable n must be remembered, because ptr alone cannot provide the size.


// Ques-> Consider a two dimensional array A of order [25 * 4]. The base address of array is 400, words per memory cell is 4. Find the address of A [12, 4] using row major and column major addressing.


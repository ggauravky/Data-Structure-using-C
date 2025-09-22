# Data Structures in C

This repository contains C language implementations of various data structures and algorithms. It's a great resource for anyone looking to learn or brush up on their data structures knowledge.

## Table of Contents

- [Data Structures Covered](#data-structures-covered)  
- [Algorithms Covered](#algorithms-covered)  
- [File Descriptions](#file-descriptions)  
- [How to Use](#how-to-use)

## Data Structures Covered

* **Arrays**: Implementations of basic array operations.  
* **Linked Lists**:  
    * Singly Linked Lists  
    * Doubly Linked Lists  
    * Circular Linked Lists

## Algorithms Covered

* **Searching**:  
    * Linear Search  
    * Binary Search  
* **Array Operations**:  
    * Insertion  
    * Deletion  
    * Traversal  
* **Linked List Operations**:  
    * Insertion (at beginning, at index, at end, after a node)  
    * Deletion (first, at index, last, by value)  
    * Traversal

## File Descriptions

### Arrays

* `insertion_array.c`: Inserts an element at a specified index in an array.  
* `deletion_array.c`: Deletes an element from a specified position in an array.  
* `transverse.c`: Traverses and prints all elements of an array.  
* `Linear_Search.c`: Implements the linear search algorithm to find an element in an array.  
* `Binary_search.c`: Implements the binary search algorithm on a sorted array.

### Linked List

* `1-LinkedLists.pdf`: A PDF document with an introduction to Linked Lists.  
* `intro_linked_list.c`: A simple C program to introduce the concept of a linked list.  
* `traverse_create.c`: Demonstrates the creation and traversal of a simple linked list.  
* `insertion_linked_list.c`: Shows how to insert a node at various positions in a linked list.  
* `delete_a_node.c`: Contains functions to delete a node from a linked list.  
* `Circular Linked Lists.c`: Implementation of a circular linked list.  
* `Doubly Linked Lists.c`: Implementation of a doubly linked list.

### Other Files

* `.gitignore`: Specifies that `.exe` files should be ignored by Git.

## How to Use

1.  **Clone the repository**:  
    ```bash  
    git clone [https://github.com/ggauravky/data-structure-using-c.git](https://github.com/ggauravky/data-structure-using-c.git)  
    ```  
2.  **Navigate to the desired directory**:  
    ```bash  
    cd data-structure-using-c/Arrays  
    ```  
    or  
    ```bash  
    cd data-structure-using-c/Linked List  
    ```  
3.  **Compile the C files**:  
    You will need a C compiler (like GCC) installed on your system.  
    ```bash  
    gcc -o <output_filename> <source_filename.c>  
    ```  
    For example:  
    ```bash  
    gcc -o insertion insertion_array.c  
    ```  
4.  **Run the executable**:  
    ```bash  
    ./<output_filename>  
    ```  
    For example:  
    ```bash  
    ./insertion  
    ```​
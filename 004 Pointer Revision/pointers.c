#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age = 20;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", _age);
    printf("%d\n", &ptr);
    printf("%d\n", &age);
    printf("%p\n", &age);
    printf("%p\n", &ptr);
    printf("%p\n", *ptr);

    // A pointer is a special variable that stores the memory address of another variable.

    int a = 10; // normal integer variable
    int *p;     // p is a pointer to int

    p = &a; // &a gives the address of variable 'a'
            // so p now stores address of a

    printf("Value of a = %d\n", a);    // prints value of a
    printf("Address of a = %p\n", &a); // prints memory address of a
    printf("Value of p = %p\n", p);    // pointer stores address of a
    printf("Value at address stored in p = %d\n", *p);
    // *p means "value at address stored in p"
    // This will give same result as value of a

    *p = 20; // changing value at address stored in pointer
             // means value of 'a' also changes

    printf("New value of a = %d\n", a); // a is now 20

    return 0;
}
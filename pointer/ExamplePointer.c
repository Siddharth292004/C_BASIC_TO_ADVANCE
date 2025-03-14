#include <stdio.h>

int main() {
    int a = 10;     // Normal variable
    int *p;         // Pointer variable

    p = &a;         // Storing the address of 'a' in pointer 'p'

    printf("Value of a: %d\n", a);    // Prints 10
    printf("Address of a: %p\n", &a); // Prints address of 'a'
    printf("Value of p: %p\n", p);    // Prints address stored in 'p' (same as &a)
    printf("Value at address stored in p: %d\n", *p); // Prints value at that address (10)

    return 0;
}

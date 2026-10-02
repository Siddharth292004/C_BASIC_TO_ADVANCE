#include <stdio.h>

// Declare the function from file2.c
void hello();

int main()
{
    printf("Calling hello() from file2.c:\n");
    hello();
    return 0;
}

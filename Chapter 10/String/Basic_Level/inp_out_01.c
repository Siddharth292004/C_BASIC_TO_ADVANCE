// Take a string as input and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char str[40];  //  use char, not int

    printf("Enter your name: ");
    gets(str);  //  gets() is outdated, but still works in Turbo C

    puts(str);  //  prints the string with newline

    return 0;
}

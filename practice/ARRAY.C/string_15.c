/*
Count characters without strlen()
Loop through the string until you reach '\0' (null character).
Count each character.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];
    int count = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int i = 0;

    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("the length of string: %d", count);
    return 0;
}
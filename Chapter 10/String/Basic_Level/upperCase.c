// WAP to convert a string to uppercase.

#include <stdio.h>
#include <string.h>

int main() {
    char str[40];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert to uppercase
        }
        i++;
    }

    printf("Uppercase: %s\n", str);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[40];
    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    puts(str);
    return 0;
}

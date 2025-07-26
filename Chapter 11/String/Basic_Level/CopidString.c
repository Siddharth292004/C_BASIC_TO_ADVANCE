#include <stdio.h>
#include <string.h>

int main() {
    char str1[40];
    char str2[40];

    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';  // remove newline

    int i = 0;
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';  // Add null terminator (without this output can be grabage colltector)

    printf("Copied string: %s\n", str2);
    return 0;
}


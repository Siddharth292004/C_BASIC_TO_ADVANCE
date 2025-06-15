// Check if a number is even or odd

#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("This number is Zero.\n");
    }
    else if (num % 2 == 0) {
        printf("This number is Even.\n");
    }
    else {
        printf("This number is Odd.\n");
    }

    return 0;
}

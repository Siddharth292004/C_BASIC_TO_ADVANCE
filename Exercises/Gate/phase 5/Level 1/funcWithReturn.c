#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int number;
    printf("Enter a number to find its square: ");
    scanf("%d", &number);
    int result = square(number);
    printf("Square of %d is: %d\n", number, result);
    return 0;
}
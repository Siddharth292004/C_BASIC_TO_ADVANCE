// Write a program to print sum of 1 to n ;

#include <stdio.h>

int sum(int num);

int main() {
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);

    result = sum(num);
    printf("Sum from 1 to %d is: %d\n", num, result);

    return 0;
}

int sum(int num) {
    if (num == 0)
        return 0;
    else
        return num + sum(num - 1);
}

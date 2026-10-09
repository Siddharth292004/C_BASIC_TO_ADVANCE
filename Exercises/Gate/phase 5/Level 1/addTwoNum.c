#include <stdio.h>

int addTwoNum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int result = addTwoNum(a, b);
    printf("Sum of two Number: %d", result);

    return 0;
}
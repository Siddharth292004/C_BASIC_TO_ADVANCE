#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    print("\n");

    printf("Before the swap numbers:\n");
    printf(" a = %d , b = %d ", a, b);

    int temp = a;
    a = b;
    b = temp;

    print("After the swap numbers:\n");
    print("a = %d , b = %d", a, b);

    return 0;
}
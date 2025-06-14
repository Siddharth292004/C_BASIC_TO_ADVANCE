#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("\n");

    printf("Before the swap numbers:\n");
    printf("a = %d\nb = %d\n\n", a, b);

   
    int temp = a;
    a = b;
    b = temp;

    printf("After the swap numbers:\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}
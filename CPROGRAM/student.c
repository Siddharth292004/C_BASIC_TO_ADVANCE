#include <stdio.h>
int main()
{
    int n;
    printf("enter the percentage : ");
    scanf("%d", &n);

    if (n >= 90 && n <= 100)
        printf(" grade  is A");
    else if (n >= 80 && n < 90)
        printf("grade is B ");
    else if (n >= 70 && n < 80)
        printf("grad is C ");
    else if (n >= 60 && n < 70)
        printf("grade is D ");
    else
    {
        printf("fail");
    }
    return 0;
}
// Write a program to print 1 to n number

#include <stdio.h>

void increasing_order(int x, int n);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    increasing_order(1, n);
    return 0;
}
void increasing_order(int x, int y)
{
    if (x > y)
    {
        return;
    }
    else
    {
        printf("%d ", x);
        return increasing_order(x + 1, y);
    }
}
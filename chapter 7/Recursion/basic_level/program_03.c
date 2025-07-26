// Write a program to print 10 t0 1 number;

#include <stdio.h>

void decreasing_order(int num);
int main()
{
    int num = 10;
    decreasing_order(num);
    return 0;
}

void decreasing_order(int num)
{
    if (num == 0)
    {
        return;
    }
    else
    {
        printf("%d\n", num);
        return decreasing_order(num-1);
    }
}
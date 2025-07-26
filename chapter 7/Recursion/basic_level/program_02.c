// write a program to print Good morning any times

#include <stdio.h>

void greet(int num);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    greet(num);
    return 0;
}

void greet(int num)
{
    if (num == 0)
    {
        return;
    }
    else
    {
        printf("Good morning\n");
        return greet(num - 1);
    }
}
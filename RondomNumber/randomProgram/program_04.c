// Print 10 random numbers from 50 to 60.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int min = 50, max = 60;

    for (int i = 0; i < 10; i++)
    {
        int num = (rand() % (max - min + 1) + min);
        printf("%d ", num);
    }
    return 0;
}
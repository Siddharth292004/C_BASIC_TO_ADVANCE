// Roll two dice and display total.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int min = 1, max = 6;
    int dice1 = (rand() % (max - min + 1) + min);
    int dice2 = (rand() % (max - min + 1) + min);
    int total = dice1 + dice2;

    printf("Dice 1: %d\n", dice1);
    printf("Dice 2: %d\n", dice2);
    printf("Sum of two dice: %d\n", total);
    return 0;
}
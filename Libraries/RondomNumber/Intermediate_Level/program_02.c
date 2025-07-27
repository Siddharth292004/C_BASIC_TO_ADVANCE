// Simulate a coin toss (Head/Tail).

// Explanation:
// Coin toss has 2 outcomes: 0 (Head), 1 (Tail).

// Use rand() % 2 to generate either 0 or 1.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));
    int toss = rand() % 2;

    if (toss == 0)
    {
        printf("Head\n");
    }
    else
    {
        printf("Tail\n");
    }

    return 0;
}
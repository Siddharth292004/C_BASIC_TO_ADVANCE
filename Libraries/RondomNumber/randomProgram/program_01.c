// rand() → gives random numbers.

// srand(time(NULL)) → makes numbers different every time you run.

// Use % to set the range (like 1 to 100).

// Generate a random number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random = (rand() % 100) + 1; // Random number between 1 and 100

    printf("Random number: %d\n", random);
    return 0;
}

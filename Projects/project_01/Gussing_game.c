#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100

int main() {
    int random, guess;
    int no_of_guess = 0;

    // Seed the random number generator
    srand(time(NULL));
    random = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d.\n", MIN, MAX);

    do {
        printf("\nEnter your guess (%d to %d): ", MIN, MAX);
        scanf("%d", &guess);

        // Input validation
        if (guess < MIN || guess > MAX) {
            printf("Invalid input! Please guess a number between %d and %d.\n", MIN, MAX);
            continue;
        }

        no_of_guess++;

        if (guess < random) {
            printf("Too low! Try a higher number.");
        } else if (guess > random) {
            printf("Too high! Try a lower number.");
        } else {
            printf("Congratulations! You guessed the correct number %d in %d attempts!\n", random, no_of_guess);
        }

    } while (guess != random);

    printf("\nThanks for playing! See you next time.\n");
    printf("Developed by: Siddharth\n");

    return 0;
}

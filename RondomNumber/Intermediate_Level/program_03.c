//  Random Password Generator (Numbers only)
// 🔹Explanation:
// You can generate a random digit (0–9) using rand() % 10.

// Repeat it for desired password length (e.g., 6 digits).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int length;
    printf("Enter password length: ");
    scanf("%d", &length);

    printf("Random numeric password: ");
    for (int i = 0; i < length; i++)
    {
        int digit = rand() % 10;
        printf("%d", digit);
    }
    printf("\n");
    return 0;
}
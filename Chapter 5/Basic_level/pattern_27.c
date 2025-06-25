#include <stdio.h>

int main() {
    int i, j, k;
    int p_height = 5;

    for (i = p_height; i >= 1; i--) {
        // Print spaces
        for (k = 1; k <= p_height - i; k++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
 
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int p_height = n;

    for (int i = 1; i <= p_height; i++) {  // Use <= to get 5 rows
        for (int k = p_height - i; k > 0; k--) {
            printf(" ");
        }
        for ( int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// Input and display a 2x2 matrix.

#include <stdio.h>

int main()
{
    int arr[2][2];
    printf("Enter the values (2x2 matrix):\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n2D array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

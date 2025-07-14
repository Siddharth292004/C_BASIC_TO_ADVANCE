#include <stdio.h>

int main()
{
    int arr[3][3];
    printf(" Enter the value of (3 x 3 matrix):\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n2D array  (3 x 3 matrix):\n");
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("%d ", arr[k][l]);
        }
        printf("\n");
    }
    return 0;
}
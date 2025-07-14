// Find the largest and smallest element in a 2D array.

#include <stdio.h>

int main()
{
    int raw, col;
    int max, min;

    printf("Enter the size of raw: ");
    scanf("%d", &raw);
    printf("Enter the size of the column: ");
    scanf("%d", &col);

    int arr[raw][col];

    printf("Enter the value of ( %d x %d matrix):\n", raw, col);
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    max = min = arr[0][0];
    for (int i = 0; i < raw; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > arr[j][i])
            {
                max = arr[i][j];
            }

            if (arr[i][j] < arr[j][i])
            {
                min = arr[i][j];
            }
        }
    }
    printf("\n2D array:\n");
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

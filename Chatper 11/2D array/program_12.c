#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the size of row: ");
    scanf("%d", &row);
    printf("Enter the size of the column: ");
    scanf("%d", &col);

    int arr[row][col];
    int transpose[col][row];  // Transpose has swapped dimensions

    printf("\nEnter the elements for (%d x %d matrix):\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Generate transpose
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }

    // Print transpose
    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

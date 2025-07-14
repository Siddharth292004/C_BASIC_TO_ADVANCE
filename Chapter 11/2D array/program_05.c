// Find the sum of each column in a 2D array.

#include <stdio.h>

int main()
{
    int row, col;
    int i, j;

    printf("Enter the size of row: ");
    scanf("%d", &row);
    printf("Enter the size of column: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter the values for (%d x %d) matrix:\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nSum of each column:\n");
    for (j = 0; j < col; j++) // each column
    {
        int colsum = 0;
        for (i = 0; i < row; i++) // sum down each row for current column
        {
            colsum += arr[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colsum);
    }

    return 0;
}

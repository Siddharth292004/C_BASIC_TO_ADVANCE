// Add two matrices (2D arrays).

#include <stdio.h>

int main()
{   
    int row, col;

    printf(" Entert size of the row: ");
    scanf("%d", &row);
    printf("Enter the size of the column: ");
    scanf("%d", &col);
    
    int arr1[row][col];
    int arr2[row][col];
    int result[row][col];

    printf("Enter elements for 1st matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf(" Enter elements for 2nd matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nSum of two matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
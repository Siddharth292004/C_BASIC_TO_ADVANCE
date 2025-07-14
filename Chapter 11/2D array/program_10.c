// Subtract two matrices.

#include<stdio.h>
int main()
{
    int row, col;

    printf(" Entert size of the row: ");
    scanf("%d",&row);
    printf("Enter the size of the column: ");
    scanf("%d",&col);

    int arr1[row][col];
    int arr2[row][col];
    int result[row][col];

    printf("Enter element for 1st matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element [%d][%d] ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter element for 2st matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element [%d][%d] ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nMatrix 1:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }    
    }

    printf("\nSubtraction of two Matrix:\n");
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

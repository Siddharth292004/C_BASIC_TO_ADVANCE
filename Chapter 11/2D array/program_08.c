// Search an element in a 2D array.

#include <stdio.h>

int main()
{
    int row, col, target, found = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("\nEnter the elements for (%d x %d) matrix:\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                printf("Element %d found at position (%d, %d)\n", target, i, j);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("Element %d not found in the matrix.\n", target);
    }

    printf("\nAll elements of the 2D array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

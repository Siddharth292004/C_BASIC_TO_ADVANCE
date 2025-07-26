// Find the sum of all elements in a 2D array.

#include <stdio.h>

int main()
{
    int arr[3][3];
    int sum = 0;

    printf(" Enter the element for( 3 X 3 matrix): ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            sum += arr[k][l];
        }
    }
    printf("Sum of all elements in 2D array: %d", sum);
    return 0;
}
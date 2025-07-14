// Find the sum of each row in a 2D array.

#include <stdio.h>

int main()
{
    int arr[3][3];

    printf(" Enter the element for( 3 X 3 matrix): \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < 3; k++)
    {
        int rowSum = 0;
        for (int l = 0; l < 3; l++)
        {
            rowSum += arr[k][l];
        }
        printf("sum of row [%d] = %d\n",k, rowSum);
    }
    return 0;
}
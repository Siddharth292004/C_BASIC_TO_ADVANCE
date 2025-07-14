// Find the sum of the diagonal elements (main and secondary).

#include <stdio.h>

int main()
{
    int raw, col;
    int sum = 0;

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

    for (int k = 0; k < raw; k++)
    {
        for (int l = 0; l < col; l++)
        {
            if (arr[k][l] == arr[l][k])
            {
                sum += arr[k][l];
            }
        }
    }
    printf("sum of the diagonal elements: %d\n",sum);
    return 0;
}
// Find the largest and smallest element in a 2D array.

#include <stdio.h>
#include<limits.h>
int main()
{
    int row, col;
    int max = INT_MIN, min = INT_MAX;

    printf("Enter the size of raw: ");
    scanf("%d", &row);
    printf("Enter the size of the column: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter the value of ( %d x %d matrix):\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(arr[i][j] >max){
                max = arr[i][j];
            }
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }

    printf("\n2D array:\n");
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

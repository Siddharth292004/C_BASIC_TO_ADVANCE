#include <stdio.h>
#include <limits.h>  // for INT_MIN

int main() {
    int row, col;
    int maxSum = INT_MIN;
    int rowIndex = 0;

    printf("Enter the size of row: ");
    scanf("%d", &row);
    printf("Enter the size of column: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];  // ✅ fixed: use addition instead of multiplication
        }

        if (sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    printf("\nRow with maximum sum is row %d (0-based index), Sum = %d\n", rowIndex, maxSum);

    return 0;
}

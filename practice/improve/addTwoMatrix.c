#include <stdio.h>

int main() {
    int row, col;

    // Input size
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int arr1[row][col], arr2[row][col], result[row][col];

    // Input first matrix
    printf("\nEnter elements for the 1st matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements for the 2nd matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display first matrix
    printf("\nMatrix 1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nMatrix 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d", arr2[i][j]);
        }
        printf("\n");
    }

    // Display result
    printf("\nSum of two matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Program to subtract two matrices of same size

#include <stdio.h>

int main() {
    int row, col;

    // Input matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int arr1[row][col];
    int arr2[row][col];
    int result[row][col];

    // Input elements for first matrix
    printf("\nEnter elements for 1st matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input elements for second matrix
    printf("\nEnter elements for 2nd matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Print first matrix
    printf("\nMatrix 1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Print second matrix
    printf("\nMatrix 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d", arr2[i][j]);
        }
        printf("\n");
    }

    // Subtract the matrices
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    // Print the result matrix
    printf("\nSubtraction of Matrix 1 and Matrix 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

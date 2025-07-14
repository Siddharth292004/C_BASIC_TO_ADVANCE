// Check whether a matrix is symmetric or not.

#include <stdio.h>

int main() {
    int row, col;
    int is_symmetric = 1;

    printf("Enter the size of row: ");
    scanf("%d", &row);
    printf("Enter the size of col: ");
    scanf("%d", &col);

    // Check if square
    if (row != col) {
        printf("Matrix is not symmetric (not a square matrix).\n");
        return 0;
    }

    int arr[row][col];

    printf("Enter the elements:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Check symmetry
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){  
            if(arr[i][j] != arr[j][i]){
                is_symmetric = 0;
                break;
            }
        }
    }

    if(is_symmetric){
        printf("Matrix is symmetric.\n");
    } else {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}

//  Write a program to check  Matrix is a diagonal matrix.
  
#include <stdio.h>

int main() {
    int row, col;
    int is_diagonal = 1;

    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the size of col: ");
    scanf("%d", &col);

    int arr[row][col];
    
    printf("Enter the elements in (%d X %d Matrix):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check for diagonal matrix
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) {
            if (i != j && arr[i][j] != 0) {
                is_diagonal = 0;
                break;
            }
        }
    }

    if (is_diagonal) {
        printf("Matrix is a diagonal matrix.\n");
    } else {
        printf("Matrix is not a diagonal matrix.\n");
    }

    return 0;
}




// Enter the row: 3
// Enter the size of col: 3
// Enter the elements in (3 X 3 Matrix):
// 1 0 0
// 0 5 0
// 0 0 9

// Matrix is a diagonal matrix.


// Enter the row: 2
// Enter the size of col: 3
// Enter the elements in (2 X 3 Matrix):
// 1 0 0
// 0 2 0

// Matrix is not a diagonal matrix.


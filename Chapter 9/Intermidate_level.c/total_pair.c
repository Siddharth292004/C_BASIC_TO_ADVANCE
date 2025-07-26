/*
find the total number of pairs in the array
whose sum is equal to the given vaule x.
*/

#include <stdio.h>

int main() {
    int n, x;
    
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int totalPair = 0;

    // Input array elements
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target sum value
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find pairs whose sum is equal to x
    printf("\nPairs whose sum is %d:\n", x);
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == x) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                totalPair++;
            }
        }
    }

    printf("\nTotal number of pairs = %d\n", totalPair);
    return 0;
}

// given an array containing elements from 1 to 10 except one element in this range is missing.
// find the missing element 


#include <stdio.h>

int main() {
    int n = 9;  
    
    int arr[9];
    int actual_sum = 0;

    printf("Enter 9 elements (1 to 10, with one missing):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }

    int expected_sum = 10* (10 + 1) / 2;
    int missing_number = expected_sum - actual_sum;

    printf("Missing number is: %d\n", missing_number);
    return 0;
}

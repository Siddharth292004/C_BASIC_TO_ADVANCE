// Find the average of numbers in an array

#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    float average;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    float arr[n];
    printf("\nEnter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);  
    }

    for (int j = 0; j < n; j++) {
        sum = sum + arr[j];
    }

    average = sum / n;
    printf("Average = %f\n", average);

    return 0;
}

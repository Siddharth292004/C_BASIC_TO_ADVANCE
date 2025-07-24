/*
Problem Statement:
Write a program to rotate a given array a[] of size n to the right by k steps. The rotation must be done in-place using the reversal algorithm (i.e., without using any extra array).

Note:

k is a non-negative integer.

k can be greater than n, so you must reduce it using k = k % n.

Right rotation means shifting every element to the right by k positions. Elements that fall off the end are moved to the front.

🧠 Input Format:
First line: An integer n (size of the array)

Second line: n integers separated by space (elements of the array)

Third line: An integer k (number of rotations)
*/

#include<stdio.h>

void reverse(int arr[], int st, int ed){
    int i = st;
    int j = ed;

     while (i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Original array:\n");
    for(int j = 0; j < size; j++){
        printf("%d ", arr[j]);
    }

    int rotate;
    printf("\nEnter the rotate term: ");
    scanf("%d", &rotate);
    
    rotate = rotate % size;  // Handles rotation greater than size

    // Rotate array to the right by 'rotate' positions
    reverse(arr, 0, size - 1);
    reverse(arr, 0, rotate - 1);
    reverse(arr, rotate, size - 1);
  
    printf("After rotate array:\n");
    for(int k = 0; k < size; k++){
        printf("%d ", arr[k]); 
    }

    return 0;
}

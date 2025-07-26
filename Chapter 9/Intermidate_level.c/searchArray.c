
// Problem: Search an element in an array. 
// If found, print its index; otherwise, display "Element not found".

#include <stdio.h>
#include <stdbool.h>

int main() {
    int size, search, index = -1;
    bool flag = false;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 1) {
        printf("Invalid input! Please enter a valid size.\n");
        return 0; 
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &search);

    for (int j = 0; j < size; j++) {
        if (arr[j] == search) {
            flag = true;
            index = j;
            break;
        }
    }

    printf("\nSearch Result:\n");
    if (flag) {
        printf("Element %d found at index %d.\n", search, index);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}

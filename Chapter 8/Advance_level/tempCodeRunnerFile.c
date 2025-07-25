#include <stdio.h>

int main() {
    int arr[] = {4, 2, 3, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count;

    for (int i = 0; i < size; i++) {
        count = 0;

        for (int j =i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; 
            }
        }

        if (count == 0) {
            printf("%d is a unique element.\n", arr[i]);
        }
    }

    return 0;
}

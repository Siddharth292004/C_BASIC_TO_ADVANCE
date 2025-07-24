#include <stdio.h>
#include <stdbool.h>

int main() {
    int size;
    int duplicate;
    bool flag = false;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    if(size <1){
        printf("invalid input ! please enter valid input");
        return 0;
    }

    int arr[size];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < size - 1; j++) {
        for (int k = j + 1; k < size; k++) {
            if (arr[j] == arr[k]) {
                duplicate = arr[k];
                flag = true;
                break;  
            }
        }
        if (flag) {
            break;  
        }
    }

    if (flag) {
        printf("Duplicate element found: %d\n", duplicate);
    } else {
        printf("No duplicate element found.\n");
    }

    return 0;
}

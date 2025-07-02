#include <stdio.h>

int main() {
    int item, size, i, position;

    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &size);

    int array[size + 1];  // +1 to allow space for insertion

    printf("ENTER THE ELEMENTS OF ARRAY:\n");
    for (i = 0; i < size; i++) {
        printf("ARR[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("ENTER THE ELEMENT TO INSERT: ");
    scanf("%d", &item);

    printf("ENTER THE POSITION TO INSERT AT (0 to %d): ", size);
    scanf("%d", &position);

    // Check if position is valid
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements right
    for (i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    array[position] = item;
    size++;  // Increase size after insertion

    printf("ARRAY AFTER INSERTION:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

#include <stdio.h>

// Correct declarations
void bubbleSort(int arr[], int size);
void swap(int arr[], int j);

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size < 1) {
        printf("Invalid input! Please enter a valid size (> 0).\n");
        return 1;
    }

    int arr[size];

    printf("Enter the %d elements in array:\n", size);  // fixed
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);  // fixed name

    printf("\nAfter the sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// fixed return type and name
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j);
            }
        }
    }
}

void swap(int arr[], int j)
{
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}

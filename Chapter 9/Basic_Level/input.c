#include <stdio.h>

int main()
{
    int size;
    printf("Enter the number: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the %d numbers\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter number arr[%d] : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n you entered\n");
    for (int j = 0; j < size; j++)
    {
        printf("number arr[%d] = %d\n", j + 1, arr[j]);
    }

    return 0;
}
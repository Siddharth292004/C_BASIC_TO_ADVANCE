#include <stdio.h>

int main()
{
    int arr[100], n, newElement;

    printf("Enter number of element: ");
    scanf("%d", &n);

    printf("Enter %d element\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &newElement);

    arr[n] = newElement;
    n++;

    printf("Updated array:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
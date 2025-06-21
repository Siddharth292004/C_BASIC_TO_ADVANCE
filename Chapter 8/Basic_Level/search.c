// Search for an element in the array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search;
    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == search)
        {
            printf("%d found at position %d", search, j + 1);
            break;
        }
    }
    
    printf("%d not found in array",search);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements in array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    for(int i = 0;i<n/2;i++){
        int temp  = arr[i];
        arr[i]  = arr[n - 1-i];
        arr[n-1-i] = temp;
    }
    
    printf("\nReverse array:\n");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
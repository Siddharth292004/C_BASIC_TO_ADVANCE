#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int copyArray[n];
    printf("\nCopy Array:\n");
    for (int k = 0; k < n; k++)
    {
        copyArray[k] = arr[k];
        printf("%d ", copyArray[k]);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i;
    int size;
    int last;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ELEMENTS :\n");
    for (i = 0; i < size; i++)
    {
        printf(" arr[%d] : ", i + 1);
        scanf("%d",&arr[i]);
    }
    last = arr[size - 1];
    for (i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    printf("AFTER THE SHIFT ELEMENTS ARE :\n");
    for (i = 0; i < size; i++)
    {
        printf(" arr[%d] : %d\n", i + 1, arr[i]);
    }
    return 0;
}
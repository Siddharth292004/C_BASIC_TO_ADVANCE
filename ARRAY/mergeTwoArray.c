#include <stdio.h>
int main()
{
    int size1, size2;
    int i, j;
    printf("ENTER THE SIZE OF THE ARRAY :\n");
    scanf("%d", &size1);
    int arr1[size1];
    printf("ENTER THE ELEMENTS OF THE ARRAY :\n");
    for (i = 0; i < size1; i++)
    {
        printf("arr[%d] ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("ENTER THE 2ND  ARRAY SIZE :\n");
    scanf("%d", &size2);
    int arr2[size2];
    printf("ENTER THE 2nd ARRAY ELEMENTS :\n");
    for (i = 0; i < size2; i++)
    {
        printf("arr2[%d] : ", i + 1);
        scanf("%d", &arr2[i]);
    }
    int mega_size = size1 + size2;
    int mega_array[mega_size];
    for (i = 0; i < size1; i++)
    {
        mega_array[i] = arr1[i];
    }
    for (j = 0; j < size2; j++)
    {
        mega_array[i + j] = arr2[j];
    }
    printf("MERGE ARRAY :\n");
    for (j = 0; j < mega_size; j++)
    {
        printf("arr[%d] = %d \n", j + 1, mega_array[j]);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    int i;
    int min, max;
    printf("ENTER THE SIZE OF ARRAY :\n");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENT OF ARRAY :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("THE MAXIMUM ELEMENT IS %d \n", max);
    printf("THE MINIMUM ELEMENT IS %d \n", min);
    return 0;
}
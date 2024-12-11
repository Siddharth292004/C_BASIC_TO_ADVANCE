#include <stdio.h>
int main()
{
    int n;
    int i;
    int k;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENT OF ARRAY :\n");
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE SEARCH ELEMENT  :\n");
    scanf("%d", &k);
    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            printf("ELEMENT FOUND AT INDEX %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("ELEMENT NOT FOUND\n");
    }
    return 0;
}
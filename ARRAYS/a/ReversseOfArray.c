#include <stdio.h>
int main()
{
    int n;
    int i;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);
    if (n < 0)
    {

        printf("invalid input \n");
        return 1;
    }

    int arr[n];
    printf("ENTER THE ELEMENT OF ARRAY \n");
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT  %d : ", i + 1);

        scanf("%d", &arr[i]);
    }

    printf("REVERSE OF ARRAY \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}

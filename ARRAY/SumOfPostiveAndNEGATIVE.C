#include <stdio.h>
int main()
{
    int n;
    int i, j;
    int sum = 0;
    int total = 0;

    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENT OF ARRAY : \n");
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum = sum + arr[i];
        }
        else
        {
            total = total + arr[i];
        }
    }
    printf("THE SUM OF POSITIVE  ELEMENTS IN ARRAY IS : %d\n", sum);
    printf("THE  SUM OF NEGATIVE  ELEMENTS IN ARRAY IS : %d\n", total);
    return 0;
}
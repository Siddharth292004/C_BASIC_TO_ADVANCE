#include <stdio.h>
int main()
{
    int i;
    int n;
    int even = 0, odd = 0;
    printf("ENTER THE SIZE OF ARRAY :\n");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER THE ELEMENT IN ARRAY : \n");
    for (i = 0; i < n; i++)
    {
        printf("ELEMENT %d = ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("EVEN COUNT = %d\n", even);
    printf("ODD  COUNT = %d\n", odd);
    return 0;
}
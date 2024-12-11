// 1. Find the Maximum and Minimum Element in an Array
//  by input user
#include <stdio.h>
int main()
{
    int size;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);

    int array[size];
    printf("ENTER THE ELEMENT OF ARRAY :\n");
    for (int i = 0; i < 5; i++)
    { 
        printf("arr[%d] = ", i);
        scanf("%d",&array[i]);
        
    }
    int max = array[0], min = array[0];

    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
      
    }
    printf("THE MAX ELEMENT  %d\n", max);
    printf("THE MIN ELEMENT  %d\n", min);

    return 0;
}
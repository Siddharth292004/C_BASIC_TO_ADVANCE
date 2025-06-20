#include <stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    int *ptr;
    int i;
    printf("enter the size of arry ");
    scanf("%d",&size);

    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory alloction is unsucessfull :\n");
        return 1;
    }
    printf("ENTER %d ELEMENT IN ARRAY :", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
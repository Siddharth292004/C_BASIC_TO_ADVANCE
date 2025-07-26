#include <stdio.h>

int main()
{
    int num = 25;
    int *ptr;
    
    ptr = &num;

    printf("value of num: %d\n", num);
    printf("address of num: %p\n", &num);
    printf("address stored in pointer ptr: %p\n", ptr);

    return 0;
}
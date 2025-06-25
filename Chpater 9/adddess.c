#include<stdio.h>

int main(){
    int num = 25;
    int *ptr;

    ptr = &num;

    printf("vaule of num: %d\n",num);
    printf("address of num: %u\n",&num);
    printf("addess stored in pointer ptr: %u\n",ptr);

    return 0;
    
}
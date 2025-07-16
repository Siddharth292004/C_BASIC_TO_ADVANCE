#include<stdio.h>

int main(){
    int num = 25;
    int *ptr;

    ptr = &num;

    printf("vaule of num: %d\n",num);
    printf("address of num: %p\n",&num);
    printf("addess stored in pointer ptr: %p\n",ptr);
    

    return 0;
    
}
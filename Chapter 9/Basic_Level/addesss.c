#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};

    printf("Address of arr[0] = %p\n",&arr[0]);
    printf("Address of arr[1] = %p\n",&arr[1]);
    printf("Address of arr[2] = %p\n",&arr[2]);
    printf("Address of arr[3] = %p\n",&arr[3]);
    printf("Address of arr[4] = %p\n",&arr[4]);

    return 0;
}
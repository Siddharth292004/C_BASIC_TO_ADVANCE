#include<stdio.h>

int main(){
    int arr[2] ={1,10};
    printf("array before swap:\narr[0] = %d\narr[1] = %d",arr[0],arr[1]);
    
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    printf("\narray after swap:\narr[0] = %d\narr[1] = %d",arr[0],arr[1]);
    return 0;
}
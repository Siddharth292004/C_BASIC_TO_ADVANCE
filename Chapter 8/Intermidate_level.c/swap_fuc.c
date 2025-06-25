// array passs references to the fuction 

#include<stdio.h>

int swap_fuc(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

int main(){
    int arr[2] = {1,10};
        printf("array before swap:\narr[0] = %d\narr[1] = %d",arr[0],arr[1]);
    swap_fuc(arr);
        printf("\narray after swap:\narr[0] = %d\narr[1] = %d",arr[0],arr[1]);

    
}
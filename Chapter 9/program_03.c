// Write a program to reverse an array using pointers.

#include<stdio.h>

int main(){
    int arr[] ={10,20,30,40,50};
    int *start = arr;
    int *end = arr +4;
    int temp;

    printf("Original Array:\n");
    for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }

    while (start <end){
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
   printf("\nReverse Array: ");
       for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }

    
}
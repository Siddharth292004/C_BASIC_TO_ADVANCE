#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Entert %d number\n",size);
    for(int i =0;i<size;i++){
        printf("Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nReverse order:\n");
    for(int j =size-1;j >=0;j--){
        printf("%d ",arr[j]);    
    }
   return 0;
} 
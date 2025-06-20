#include<stdio.h>

int main(){
    int arr[5];
    
    printf("Enter the 5 numbers:\n");
    for(int i =0;i<5;i++){
        printf("Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("\nYou entered:\n");
    for(int j =0;j<5;j++){
        printf("Number[%d] = %d\n",j,arr[j]);
    }
    return 0;
}
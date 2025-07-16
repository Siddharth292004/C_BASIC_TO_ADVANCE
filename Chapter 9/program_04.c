
#include<stdio.h>

void reverse(int *arr,int n);
int main(){
    int arr[100],n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the element of array:\n");
    for(int i =0;i<n;i++){
        printf("arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal array:\n");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    reverse(arr,n);
    
     printf("\nReverse array:\n");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void reverse(int *arr,int n){
    int *start = arr;
    int *end = arr + n -1;
    int temp;

    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
// Print only even numbers from the array

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEven numbers in the array:\n");
    for(int j=0;j<n;j++){
        if(arr[j] %2 == 0){
            printf("%d ",arr[j]);
        }
    }
    return 0;
}
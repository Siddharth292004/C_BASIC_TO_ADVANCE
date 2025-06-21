// Reverse the elements of the array

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n\nOriginal array:\n");
    for(int j =0;j<n;j++){
        printf("%d ",arr[j]);
    }

    printf("\n\nReversed array:\n");
    for(int k =n-1;k>=0;k--){
        printf("%d ",arr[k]);
    }
    return 0;
}
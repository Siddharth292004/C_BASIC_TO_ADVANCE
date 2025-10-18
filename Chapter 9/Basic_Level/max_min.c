#include<stdio.h>

int main(){
    int n;

    printf("Entert the numebr of elements");
    scanf("%d",&n);
    
    printf("\nEnter %d elements:\n",n);
    int arr[n];
    for(int i=1;i<n;i++){
        printf("Enter element %d",i+1);
        scanf("%d",&arr[n]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int j =1;j<n;j++){
        if(arr[j] > max){
            max = arr[j];
        }
        if(arr[j] < min){
            min = arr[j];
        }
    }
    printf("\nMaximum element is %d", max);
    printf("\nMinimum element is %d", min);
}
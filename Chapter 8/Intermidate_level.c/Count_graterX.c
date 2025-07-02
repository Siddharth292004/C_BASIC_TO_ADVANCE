// count the number of element in given array greater than a given number x.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
     
    int arr[n];
    int x;
    int count = 0;
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter value of x element: ");
    scanf("%d",&x);

    for(int j =0;j<n;j++){
        if(arr[j]>x){
            count++;
        }
    }
    printf("Number of element which is greater than x is: %d",count);

    
}
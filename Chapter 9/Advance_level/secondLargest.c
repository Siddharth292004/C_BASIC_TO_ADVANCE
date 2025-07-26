// Write a program to find the second largest element the given array.

#include<stdio.h>
#include<limits.h>

int main(){
    int arr[100],n;
    int max = INT_MIN;
    int second_max = INT_MIN;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d element:\n",n);
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++){
        if(arr[i]>max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i]> second_max && arr[i] != second_max){
            second_max = arr[i];
        }
    }

    if(second_max == INT_MIN){
        printf("No second largest found.\n");
    }
    else{
        printf("The second largest element is: %d\n",second_max);
    }
    return 0;
}
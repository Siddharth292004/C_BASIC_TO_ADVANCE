// Count how many numbers are even and how many are odd in an array

#include<stdio.h>

int main(){
    int n;
    int even =0,odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("\nEven numbers: %d\n",even);
    printf("Odd numbers: %d",odd);
    
    return 0;
}
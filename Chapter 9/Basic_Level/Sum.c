#include<stdio.h>

int main(){
    int size,sum  = 0;

    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter %d numbers:\n",size);
    for(int i =0;i<size;i++)
    {
        printf("Number[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j =0;j<size;j++)
    {
        sum = sum + arr[j];
    }
    
    printf("\nSum of number %d",sum);
    return 0;
}
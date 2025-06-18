// Write a function to find the maximum of two numbers.

#include<stdio.h>

int maximum();
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    int max = maximum(a,b);
    printf("%d is largest\n",max);
    
    return 0;
}
int maximum(int a,int b){
    int largest;
    if(a>b){
        largest =a;
    }
    else{
        largest = b;
    }
    return largest;
}

  
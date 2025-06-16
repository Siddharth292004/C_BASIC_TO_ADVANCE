// Check prime number using for loop 
// not good version 

#include<stdio.h>

int main(){
    int i;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i =2;i<n;i++){
        if(n % i == 0){
            printf("%d is not a prime number\n",n);
        }
    }
    printf("%d is a prime number\n",n);
    return 0;
}
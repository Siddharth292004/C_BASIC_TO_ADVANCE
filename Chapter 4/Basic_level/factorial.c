 // Factorial of a number using for loop

#include<stdio.h>

int main(){
    int i,n;
    int Fact = 1;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i = 1;i<=n;i++){
        Fact = Fact * i;
    }

    printf("The Factorial of %d is: %d",n,Fact);

    return 0;
}
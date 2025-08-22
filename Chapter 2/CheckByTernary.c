//  The ternary operator in c is a short form of an if-else statement.
// condition ? expression_if_true : expression_if_false;
// Write a program to find maximum number between any two number(use ternary operator).

#include<stdio.h>

int main(){
    int a,b;
    int max;
    
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    max = (a > b) ? a : b;

    printf("Maximum is: %d",max);

    return 0;

}
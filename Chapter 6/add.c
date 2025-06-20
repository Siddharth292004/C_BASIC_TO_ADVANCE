// Write a function to add two numbers (no return, no parameters).

#include<stdio.h>

void add();

int main(){
    add();
}
void add(){
    int a,b,sum;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    sum = a + b;

    printf("Sum of two number: %d",sum);
}

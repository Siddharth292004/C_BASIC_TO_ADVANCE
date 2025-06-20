// Write a function to add two numbers using parameters (with return value).

#include<stdio.h>

int add(int a, int b);
int main(){
    int a,b,sum;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the seccond number: ");
    scanf("%d",&b);

   sum = add(a,b);

   printf("\nSum of two number: %d\n",sum);

   return 0;
}

int add(int x,int y){
    return x+y;
}
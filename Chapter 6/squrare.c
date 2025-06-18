// Write a function to find the square of a number.

#include<stdio.h>

int square_fun(int x);
int main(){
    int num,square;
    printf("Enter the number: ");
    scanf("%d",&num);

    square = square_fun(num);
    printf("Squrare of %d is: %d",num,square);
    return 0;
}
int square_fun(int x){
    return x * x;
}
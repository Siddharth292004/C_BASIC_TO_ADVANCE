// Write a program to calculate addition,subtraction,multiplication,and division of any two numbers.

#include<stdio.h>

int main(){
    float a,b;
    float sum,difference,product,quotient;

    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);

    sum = a + b;
    difference = a - b;
    product = a * b;

    if(b!=0){
        quotient = a / b;
    }
    else{
        printf("Division by zero is not allowed \n");
    }

    printf("\nSum = %.2f\n",sum);
    printf("Difference = %.2f\n",difference);
    printf("Product = %.2f\n",product);
    printf("quotient = %.2f",quotient);
    
    return 0;

}
// Write a program to enter any five numbers and calculate average of them.

#include<stdio.h>

int main(){
    float num1,num2,num3,num4,num5;
    float average;

    printf("Enter five numbers:\n");
    scanf("%f %f %f %f %f",&num1,&num2,&num3,&num3,&num4,&num5);
    
    average = (num1 + num2 + num3 + num4 + num5);

    printf("Average = %.2f",average);

    return 0;
    
}
#include<stdio.h>

int main (){
    float num;

    printf("Enter the number: ");
    scanf("%f",&num);

    num = num * num * num;

    printf("Cube: %2f",num);
}
#include<stdio.h>

int main(){
    float fahrenheit,celsius;
    
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5 /9;

    printf("Temperature in celsius %.2f",celsius);

    return 0 ;

}
// 

#include<stdio.h>

int factorial();
int main(){
    int num;
    int fact_value;
    printf("Enter the number: ");
    scanf("%d",&num);

    fact_value = factorial(num);
    printf("Factorial of %d is: %d",num,fact_value);

    return 0;
}
int factorial(int num){
    int fact = 1;
    for(int i =1;i<=num;i++){
        fact = fact * i;
    }
    return fact;
}
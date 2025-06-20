
#include<stdio.h>

void Check_armstrong(int num);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    Check_armstrong(num);
    return 0;
}

void Check_armstrong(int num){
    int original = num;
    int sum = 0,remainder;
    while(num > 0){
        remainder = num % 10;
        sum = sum +(remainder * remainder * remainder);
        num /=10;
    }
    if(original == sum){
        printf("%d is an Armstrong number.\n", original);
    }
    else{
         printf("%d is not an Armstrong number.\n", original);

    }
}
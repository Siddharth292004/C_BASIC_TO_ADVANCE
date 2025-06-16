#include<stdio.h>

int main(){
    int num;
    int last_digit,sum = 0;

    printf("Enter the digits: ");
    scanf("%d",&num);

    while(num > 0){
        last_digit = num % 10;
        sum = sum + last_digit;

        num /=10;
    }
    printf("Sum of digits is: %d\n",sum);
    return 0;
}
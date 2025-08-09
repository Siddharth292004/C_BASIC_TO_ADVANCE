#include<stdio.h>

void check_armstrong(int num);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    check_armstrong(n);
    return 0;
}

void check_armstrong(int num){
    int remainder,sum = 0;
    int original = num;
    while(num >0){
    remainder = num % 10;
    sum = sum + (remainder * remainder * remainder);
    num /=10;
    }

    if(original == sum){
        printf("%d is armstrong number.\n",original);
    }
    else{
        printf("%d is not a armstrong number.\n",original);
    }
}
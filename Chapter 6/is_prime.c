// Write a function to check if a number is prime or not.


#include<stdio.h>

int is_prime(int num);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int C_num = is_prime(num);
    if(C_num){
        printf("%d is prime number.\n",num);
    }
    else{
        printf("%d is not prime number.\n",num);
    }
    return 0;
}

int is_prime(int num){
    int isPrime = 1;
    for(int i =2;i<num/2;i++){
        if(num % i == 0){
            return isPrime = 0;            
        }
    }
    return isPrime;
}


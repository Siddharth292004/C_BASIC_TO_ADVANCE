// Write a function to check if a number is even or odd.

#include<stdio.h>

void evenOrOdd(int num);
int main(){
    int num ;
    printf("Enter the number: ");
    scanf("%d",&num);
    evenOrOdd(num);
}

void evenOrOdd(int num){
    if (num == 0){
        printf("This number is zero\n");
    }
    else if (num % 2 == 0){
        printf("%d is even number\n",num);
    }
    else{
        printf("%d is odd number\n",num);
    }  

}
// Check if a number is divisible by 5 and 11

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    if (num % 5 ==0 && num % 11 == 0){
        printf("This number divisible by both 5 and 11.\n");
    }
    else{
        printf("This number is not divisible by both 5 and 11.\n");
    }

    return 0;
}
// Check whether a number is positive, negative, or zero

#include<stdio.h>

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num > 0){
        printf("This number is Positive.\n");
    }
    else if(num < 0){
        printf("This number is Nagative.\n");
    }
    else{
        printf("This number is zero");
    }
    return 0;
}
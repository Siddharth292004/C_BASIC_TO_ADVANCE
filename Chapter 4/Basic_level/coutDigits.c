// Count the digits of a number.

#include<stdio.h>

int main(){
    int i, num;
    int count = 0;


    printf("Enter the number: ");
    scanf("%d",&num);

    while(num > 0){
        count++;
        num /=10;
    }

    printf("Number of digits: %d",count);

    return 0;

}
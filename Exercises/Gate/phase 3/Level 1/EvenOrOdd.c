#include<stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if( num % 2 == 0) {
        printf("The number is even.\n");
    }
    else if(num % 2 != 0) {
        printf("The number is odd.\n");
    }
    else{
        printf("The number is zero.\n");
    }
    return 0;
}
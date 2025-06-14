#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the first number (a): ");
    scanf("%d",&a);
    printf("Enter the second number (b): ");
    scanf("%d",&b);

    printf("nBefore swap numbers:\na = %d\nb = %d\n\n",a,b);

    // swap
    a = a + b ;
    b = a - b;
    a = a - b;

    printf("After swap numbers:\na = %d\nb = %d",a,b);

    return 0 ;
}
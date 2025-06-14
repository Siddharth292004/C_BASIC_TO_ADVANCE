#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the thrid number: ");
    scanf("%d",&c);

    printf("\nBefore swap numbers:\n");
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);

    //swaping three numbers
    a = a + b + c;
    c = a - (b +c);
    b = a - (b +c);
    a = a - (b +c);

    printf("\nAfter the swap numbers:\n");
    printf("a = %d\nb = %d\nc = %d",a,b,c);

    return 0;

}
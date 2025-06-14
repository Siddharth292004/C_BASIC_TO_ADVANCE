#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the thrid number: ");
    scanf("%d",&c);

    printf("\nBefore the swap number:\n");
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);

    int temp = a;
    a = b ;
    b = c ;
    c = temp;
    
    printf("\nAfter the swap number:\n");
    printf("a = %d\nb = %d\nc = %d",a,b,c);

    return 0;

}
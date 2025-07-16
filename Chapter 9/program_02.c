// Write a program to swap two numbers using pointers.


#include<stdio.h>

// fucntion declartion
void swap (int *x,int *y);

int main(){
    // variable declartion
    int a,b;
     
    // taking input from the user
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    
    printf("\nBefore the swap:\na = %d\nb = %d\n",a,b);

    // giving the address of a and b (call by referance);
    // this mean the acullay value of variable change
    swap(&a,&b);

    printf("\nAfter the swap:\na = %d\nb = %d\n",a,b);

    return 0;

}

// function that swap two numbers
void swap(int *x,int *y){
       int temp = *x;
    *x = *y;
    *y = temp;
}
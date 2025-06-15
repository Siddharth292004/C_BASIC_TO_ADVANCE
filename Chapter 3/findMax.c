//  Write a program to find out maximum number between any two numbers. 

#include<stdio.h>

int main(){
    //declaration
    int Num1,Num2,Num3;
    int largest;
    
    // taking input
    printf("Enter the first number: ");
    scanf("%d",&Num1);
    printf("Enter the second number: ");
    scanf("%d",&Num2);
    printf("Enter the thrid number: ");
    scanf("%d",&Num3); 
    
    // checking condition
    if (Num1 > Num2 && Num1 > Num3){
        largest = Num1;
    }
    else if (Num2 > Num1 && Num2 > Num3){
        largest = Num2;
    }
    else{
        largest = Num3;
    }

    printf("\nlargest number is %d",largest);

    return 0;
}

// Take integer input and print the absolute value of the integer.

#include<stdio.h>

int main(){
    int Num;
    printf("Enter the number: ");
    scanf("%d",&Num);

    if(Num <0){
        Num = -Num;
        printf("The absolute value is %d",Num);
    }
    else{
        printf("The absolute value is %d",Num);
    }

    return 0;
}
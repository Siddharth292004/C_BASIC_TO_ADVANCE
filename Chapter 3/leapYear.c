/*
A year is entered through the keyboard, write a program to determine 
whether the year is leap or not. Use the logical operators && and ||
*/

#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if(year % 400 == 0 || year % 100!=0 && year % 4 == 0){
        printf("%d is leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }
    return 0;
}
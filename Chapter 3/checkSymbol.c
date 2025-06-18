/*
If a character is entered through the keyboard, write a program to 
determine whether the character is a capital letter, a small case letter, a 
digit or a special symbol. 
The following table shows the range of ASCII values for various 
characters

*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character from the keyword");
    scanf("%d",&ch);

    if(ch >= 65 && ch <=90){
        printf("The character is an uppercase letter\n");
    }
    else if (ch >= 97 && ch <= 122){
        printf("The character is an lowercase letter\n");
    }
    else if (ch >=48 && ch <= 57 ){
        printf("The character is a digit\n");
    }
    else if (ch >=0 && ch <48)|| (ch = 57 && ch <65) || (ch >90 || 97) ||ch >122){
        printf("The character is a special symbol\n");
    }
}
// Take a string as input and print it.

#include<stdio.h>
#include<string.h>

int main(){
    char str[50];

    printf("Enter your name: ");
    fgets(str,sizeof(str),stdin);

    printf("your name: %s",str);
    return 0;
}
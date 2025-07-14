// 1. Read and display a string

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter your name: ");
    scanf("%s",&str);
    
    printf("Hello %s",str);
    
    return 0;
}
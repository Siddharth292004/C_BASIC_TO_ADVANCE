#include<stdio.h>
#include<string.h>

int main(){
    char str[40];

    printf("Enter the string : ");
    fgets(str,sizeof(str),stdin);
    
    printf("lenght of string %lu",strlen(str));
    return 0;

}
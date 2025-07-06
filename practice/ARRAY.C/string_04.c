#include<stdio.h>
#include<string.h>

int main(){
    char str[40];

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    int length =  strlen(str);    
    printf("Length of string: %d",length);
    return 0;
}
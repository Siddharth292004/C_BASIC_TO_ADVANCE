#include<stdio.h>
#include<string.h>

int main(){
    char str1[40] ="gov";
    char str2[40] = " sim";

    strcat(str1,str2);
    
    printf("str1: %s\n",str1);
    printf("length of string: %d",strlen(str1));
    return 0;
}
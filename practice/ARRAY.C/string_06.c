#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
     
    printf("Enter string: ");
    scanf("%s",str);

    int length = strlen(str);
    printf("length of string %d\n",length);
    return 0;
}
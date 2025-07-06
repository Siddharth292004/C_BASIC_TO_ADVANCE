#include<stdio.h>
#include<string.h>

int main(){
    char str[40];

    printf("Enter the string:");
    scanf("%[^\n]s",str);

    int length = strlen(str);

    printf("length %d",length);
    return 0;
}
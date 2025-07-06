#include<string.h>
#include<stdio.h>

int main(){
    char str1[40];
    char str2[20];

    printf("Enter the string: ");
    scanf("%[^\n]s",str1);

    strcpy(str2,str1);
    
    printf("Copid: %s",str2);
    return 0;     
}
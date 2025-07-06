#include<stdio.h>
#include<string.h>

int main(){
    char str1[40];
    char str2[40];

    printf("Enter string: ");
    scanf("%[^\n]s",str1);
    
    printf("Enter the second string: ");
    scanf("%[^\n]s",str2);

    strcat(str1,str2);
    
    printf("new string: %s",str1);
    return 0;
}
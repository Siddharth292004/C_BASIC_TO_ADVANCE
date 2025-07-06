#include<stdio.h>
#include<string.h>

int main(){
    char str1[40];
    char str2[40];

    printf("Enter the string: ");
    scanf("%[^\n]s",str1);

    strcpy(str2,str1);

    printf("%s",str2);
    return 0; 
}
#include<string.h>
#include<stdio.h>

int main(){
    char str1[40];
    char str2[40];

    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);
    
    str1[strcspn(str1,"\n")] ='\0';

    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);

    strcat(str1,str2);
    printf("str : %s ",str1);   
    return 0; 
}
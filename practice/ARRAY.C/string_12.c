#include<stdio.h>
#include<string.h>

int main(){
    char str1[40],str2[40];

    printf("Enter the password: ");
    scanf("%s",str1);
    printf("rewrite the password: ");
    scanf("%s",str2);

    if(strcmp(str1,str2) == 0){
        printf("perfect match");
    }
    else{
        printf("not match");
    }

    return 0;
}
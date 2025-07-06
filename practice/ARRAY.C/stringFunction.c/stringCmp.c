#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "apple";
    char str2[] = "apple";

    if(strcmp(str1,str2) == 0){
        printf("Perfect match: ");
    }
    else{
        printf("Note match");
    }
    return 0; 
}
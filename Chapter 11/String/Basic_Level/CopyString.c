// Copy one string into another using a loop.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];
    char str2[50];

    printf("Enter your name: ");
    fgets(str1,sizeof(str1),stdin);

    str1[strcspn(str1,"\n")] ='\0';

    int i =0;
    while (str1[i]!='\0'){
        str2[i] = str1[i];
        i++;
    }
  
    printf("your name %s",str2);
    return 0;
    

}
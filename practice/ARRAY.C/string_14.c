//  Read and display a string

#include<stdio.h>
#include<string.h>

int main(){
    char str[40];

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    puts(str);

    return 0;

}

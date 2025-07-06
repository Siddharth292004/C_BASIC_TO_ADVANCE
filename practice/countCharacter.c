#include <stdio.h>

int main()
{
    char str[50];
    int count = 0;

    printf("Enter your name: ");
    scanf("%[^\n]s", str);
    
    while (str[count] !='\0'){
        count++;
    }
   
    
    printf("%s\n", str);
    printf("%d",count);
    return 0;
}
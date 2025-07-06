#include <stdio.h>
#include <string.h>

int main() {
    char str1[40];
    int start = 0, end;

    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

    end = strlen(str1) - 1;

    while(start < end) {
        char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
    }
    
   
    int i =0;
   //  printf("Reversed string: %s\n", str1);
   printf("Reversed string: ");
   for(i =0;str1[i]!='\0';i++){
   	printf("%c",str1[i]);
   }
    return 0;
}


 // 

#include<stdio.h>

int main(){
    char ch;

    printf("Enter a charactor: ");
    scanf("%c",&ch);

    if(ch =='a' || ch =='i' || ch == 'e' || ch == 'o' || ch =='u'
    || ch =='A' || ch =='I' || ch == 'E' || ch == 'O' || ch =='U'){
        printf("It is a vowel.");
    }
    else{
        printf("It is not a vowel.");
    }
    return 0;
}
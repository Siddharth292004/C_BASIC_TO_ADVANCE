#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enterh the first angle: ");
    scanf("%d", &a);
    printf("Enter the second angle: ");
    scanf("%d", &b);
    printf("Enter the third angle: ");
    scanf("%d", &c);

    if(a + b > c){
        printf("The triangle is valid.\n");
    }
    else if(b + c > a){
        printf("The triangle is  valid. \n");
    }
    else if(a + c > b){
        printf("The triangle is valid. \n");
    }
    return 0;
}
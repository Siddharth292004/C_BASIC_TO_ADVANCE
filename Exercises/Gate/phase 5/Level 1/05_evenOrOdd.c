#include <stdio.h>

void evenOrOdd(int a){
    if(a % 2 == 0){
        printf("%d is Even Number",a);
    }
    else{
    printf("%d is odd Number",a);
    }
}
int main() {
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    evenOrOdd(num);
    return 0;
}
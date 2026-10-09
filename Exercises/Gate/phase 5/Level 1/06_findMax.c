#include <stdio.h>

int max(int a ,int b) {
    if(a > b){
        return a;
    }
    return b;
}
int main(){
    int a ,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    int result = max(a,b);
    printf("large number is: %d",result);
    return 0;
}
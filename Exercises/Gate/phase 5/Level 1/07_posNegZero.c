#include<stdio.h>

int posNegZero(int a){
    if(a > 0){
        printf("Positive");
    }
    else if(a < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    posNegZero(num);
    return 0;
}
//Write a function to find the square of a number.

#include<stdio.h>

int square(int num){
    return num * num;
}
int main(){
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    printf("THE SQUARE OF %d IS %d",num,square(num));
}
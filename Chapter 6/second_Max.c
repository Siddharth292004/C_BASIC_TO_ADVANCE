#include<stdio.h>

void second_max(int a,int b,int c);
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the thrid number: ");
    scanf("%d",&c);

    second_max(a,b,c);
}

void second_max(int a,int b,int c){
      int second_max;
    if((a > b && a < c) || (a < b && a > c)){
        second_max = a;
    }
    else if((b > a && b < c) || (b < a && b > c)){
        second_max = b;
    }
    else{
        second_max = c;
    }

    printf("Second Max : %d",second_max);
}
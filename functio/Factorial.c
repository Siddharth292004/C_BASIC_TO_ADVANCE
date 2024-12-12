//write a program to calculate the factorial.
#include<stdio.h>
    int factorial(int num){
        int fact =1;
        for(int i=1;i<=num;i++){
        fact= fact*i;
        }
        return fact;     
    }
    int main(){
        int num;
        printf("ENTER THE NUMBER ");
        scanf("%d",&num);
     factorial(num);
     printf("THE FACTORIAL OF NUMBER IS %d",factorial(num));
     return 0;
    }
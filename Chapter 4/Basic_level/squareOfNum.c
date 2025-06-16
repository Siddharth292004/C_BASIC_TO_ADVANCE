// Print the square of numbers from 1 to 10.

#include<stdio.h>

int main(){
    int i;
    int square = 0;

    for(i = 1;i <= 10; i++){
        printf("square of number %d is: %d\n",i,i * i);
    }
    return 0 ;
}
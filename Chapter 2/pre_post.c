// Write a progrom to demonstrate between pre-increment and post-increment.

#include<stdio.h>

int main(){
    int x = 6,y,z;
    y = ++x;
   
    printf("Pre-increament:\nx = %d\ny = %d",x,y);

    x = 6;
    z = x++;

    printf("\npost-increament:\nx = %d\nz = %d",x,z);

    return 0;

}
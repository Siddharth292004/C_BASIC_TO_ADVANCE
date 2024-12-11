//Create a program that uses a pointer to print the value of a variable.
#include<stdio.h>
int main(){
    int var = 18;
    int *ptr;
    ptr = &var;
    printf("the value of var which is pointed by ptr %d",*ptr);
}
//Write a program to declare a pointer and display its value (the address it stores).

#include<stdio.h>
int main(){
    int var = 45;
    int *ptr ;
    ptr= &var;

    printf("THE VALUE OF VAR IS %d\n",var);
    printf("THE ADDRESS OF PTR %p",(void*)ptr);
    

}
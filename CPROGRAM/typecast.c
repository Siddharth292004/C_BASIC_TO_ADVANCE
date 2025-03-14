#include<stdio.h>
int main(){
void *ptr;
int a =100;
ptr = &a;
printf("%d",*(int *)ptr);
}
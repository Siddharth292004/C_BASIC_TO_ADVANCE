// swapping two number by pointers
 #include<stdio.h>
int main(){
    int var =10;
    int war= 20;
    int *ptr=&var;
    int *ptr1=&war;
    int temp;
    temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;
    printf("after swap of var  = %d and war = %d\n ",*ptr,*ptr1);
    printf("%p %p",(void*)&ptr,(void*)&ptr1);
}
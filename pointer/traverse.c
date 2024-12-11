#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    int *ptr;
    int i;

    ptr =array;
    printf("all element of array \n");
    for(i=0;i<5;i++){
        printf("%d ",*(ptr +i));
    }
}
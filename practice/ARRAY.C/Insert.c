#include<stdio.h>
int main(){
    int item;
    int size;
    int i;
    int position;
    printf("ENTER THE SIZE OF ARRAY :");
    scanf("%d",&size);
    int array[size];
    printf("ENTER THE ELEMENT OF ARRAY :\n");
    for(i=0;i<size;i++){
        printf("ARR[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("ENTER THE ELEMENT FOR INSERT : ");
    scanf("%d",&item);
    printf("ENTER THE POSITION OF ARRY ");
    scanf("%d",position);
    for(i=size;i>position;i--){
        array[i]=array[i-1];
    }
    array[position]=item;
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
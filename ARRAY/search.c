//Search an Element in an Array
#include<stdio.h>
int main(){
    int size;
    int search;
    int found =0;
    int i=0;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&size);
    int array[size];
    printf("ENTER THE ELEMENTS OF ARRAY :\n");
    for(i=0;i<size;i++){
        printf("ARRAY[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("ENTER THE ELEMENT FOR SEARCH ");
    scanf("%d",&search);

    for(i =0;i<size;i++){
        if(search==array[i]){
            printf("THE ELEMENT FOUND IN INDEX %d\n",i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("ELEMENT NOT FOUND \n");
    }
}

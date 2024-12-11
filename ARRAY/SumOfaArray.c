#include<stdio.h>
int main(){
    int size;
    int i;
    int sum=0;
    printf("ENTER THE SIZE OF THE ARRAY : \n");
    scanf("%d",&size);
    int arr[size];
    printf("ENTER THE ELEMENTS OF ARRAY :\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        sum=sum+arr[i];

    }
    printf("THIS IS THE SUM OF  THE ARRAY ELEMENTS : %d\n",sum);
    return 0;

}
// Sum of All Elements in an Array
#include<stdio.h>
int main(){
    int size;
    int sum = 0;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&size);

     int array[size];
     printf("ENTER THE ELEMENT OF ARRAY :\n");
     for(int i=0;i<size;i++){
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
        sum = sum + array[i];
     }
     printf("THE SUM OF ARRAY : %d\n",sum);
     return 0;
  
}

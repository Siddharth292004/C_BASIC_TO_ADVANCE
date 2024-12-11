#include<stdio.h>
int size;
int main(){
printf("ENTER THE SIZE OF ARRAY : ");
scanf("%d",&size);
int array[size];

printf("ENTER THE ELEMENT IN ARRAY :\n");
for(int i=0;i<size;i++){
    printf("array[%d] = ",i);
    scanf("%d",&array[i]);
}
printf("THE REVERSE OF ARRAY : \n");
for(int i = size - 1; i >= 0; i--)
{    
    printf("array[%d] = %d\n", i, array[i]);
}

return 0;

}


#include<stdio.h>

int main(){
    int num1,num2,largest;
    
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
   
    if (num1 > num2){
        largest = num1;
    }
    else{
        largest = num2;
    }

    printf("\nLargest number is %d\n",largest);
    return 0;
}

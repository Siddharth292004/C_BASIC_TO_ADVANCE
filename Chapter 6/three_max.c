#include<stdio.h>

int maximum();
int main(){
    int a,b,c,max;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the thrid number: ");
    scanf("%d",&c);

    max = maximum(a,b,c);
    printf("%d is largest number",max);
    return 0;
}

int maximum(int x,int y,int z){
    int largest;
    if(x>=y && x>=z){
        largest = x;
    }
    else if(y>=x && y>=z){
        largest = y;
    }
    else{
        largest = z;
    }
    return largest;
}
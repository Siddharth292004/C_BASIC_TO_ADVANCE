#include<stdio.h>

int cube(int a){
    return a * a * a;
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result = cube(num);
    printf("cube: %d",result);
    return 0;
}
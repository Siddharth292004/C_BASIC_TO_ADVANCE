#include<stdio.h>

int main(){
    float radius,PI = 3.14,area;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    area = PI * radius * radius ;
    
    printf("Area of circle is %2f",area);
    
    return 0;
}
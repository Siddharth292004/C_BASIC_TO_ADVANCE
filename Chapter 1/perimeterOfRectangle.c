#include<stdio.h>

int main(){
    float length,width,perimeter;
    
    printf("Enter the lenght of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);

    perimeter = 2 * (length + width);

    printf("Perimeter of rectangle is %2f",perimeter);

    return 0;
}
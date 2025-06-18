/*
Give the lenght and breadth of a rectangle,
write a program to find wheter the area of the 
rectangle is greater than its perimeter.
*/

#include<stdio.h>

int main(){
    float lenght,breadth,area,perimeter;
    printf("Enter the lenght: ");
    scanf("%f",&lenght);
    printf("Enter the breadth: ");
    scanf("%f",&breadth);

    area = lenght * breadth;
    perimeter = 2 * (lenght + breadth);

    if(area > perimeter){
        printf("Area of reactangle is greater than its perimeter.\n");
    }
    else{
        printf("perimeter of reactangle is greater than its area.\n");
    }
    return 0; 
}
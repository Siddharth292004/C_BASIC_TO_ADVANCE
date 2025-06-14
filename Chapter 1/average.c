#include<stdio.h>

int main(){
    int math,science,english,hindi,chemistry;
    float average;

    printf("Enter the math's marks: ");
    scanf("%d",&math);
    printf("Enter the science's marks: ");
    scanf("%d",&science);
    printf("Enter the english's marks: ");
    scanf("%d",&english);
    printf("Entert the hindi's marks: ");
    scanf("%d",&hindi);
    printf("Enter the chemistry's marks: ");
    scanf("%d",&chemistry);

    average = (math + science + english + hindi + chemistry) / 5; 
    
    printf("Average of subject's marks: %2f",average);
}
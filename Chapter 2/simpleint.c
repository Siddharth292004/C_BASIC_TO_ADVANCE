#include<stdio.h>

int main(){
    float P,T,R,SI;

    printf("Enter the principal (p):");
    scanf("%f",&P);
    printf("Enter the Time (T): ");
    scanf("%f",&T);
    printf("Enter the Rate (R): ");
    scanf("%f",&R);

    SI = (P * T * R) / 100;

    printf("Simple intersed = %.2f",SI);

    return 0;
}
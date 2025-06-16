// Check if a person is eligible to vote (age ≥ 18).

#include<stdio.h>

int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("Eligible for vote.\n");
    }
    else{
        printf("Not Eligible for vote.\n");
    }

    return 0;
}
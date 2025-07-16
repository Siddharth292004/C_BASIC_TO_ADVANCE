// A record contains name of cricketer hisage,number oftest matches that he has 
//played and average runs that he has scored in each test match.
// create an array of strcuture to hold records of 3  such cricketer and then 
//write a program to read these records 


#include <stdio.h>

typedef struct cricketer {
    char firstname[20];
    char lastname[20];
    int age;
    int noOfmatches;
    float average;
} cricketer;

int main() {
    cricketer arr[3];

    printf("---- Fill the Cricketer Records ----\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Cricketer %d:\n", i + 1);

        printf("First Name: ");
        scanf("%s", arr[i].firstname);

        printf("Last Name: ");
        scanf("%s", arr[i].lastname);

        printf("Age: ");
        scanf("%d", &arr[i].age);

        printf("Number of Test Matches Played: ");
        scanf("%d", &arr[i].noOfmatches);

        printf("Average Runs per Match: ");
        scanf("%f", &arr[i].average);

        printf("\n");
    }

    printf("\n---- Cricketer Records ----\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Cricketer %d:\n", i + 1);
        printf("Name       : %s %s\n", arr[i].firstname, arr[i].lastname);
        printf("Age        : %d\n", arr[i].age);
        printf("Matches    : %d\n", arr[i].noOfmatches);
        printf("Avg. Runs  : %.2f\n", arr[i].average);
        printf("-----------------------------\n");
    }

    return 0;
}

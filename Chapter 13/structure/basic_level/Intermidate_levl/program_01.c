// Write a program to store information of multiple students using array of structures.
#include <stdio.h>

typedef struct Student {
    char Name[30];
    int RollNo;
    int age;
    float marks;
} student;

int main() {
    student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].Name);
        printf("Roll Number: ");
        scanf("%d", &s[i].RollNo);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        printf("\n");
    }

    printf("\n----- Student Information -----\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name       : %s\n", s[i].Name);     
        printf("Roll Number: %d\n", s[i].RollNo);
        printf("Age        : %d\n", s[i].age);
        printf("Marks      : %.2f\n", s[i].marks);
        printf("---------------------------\n");
    }

    return 0;
}

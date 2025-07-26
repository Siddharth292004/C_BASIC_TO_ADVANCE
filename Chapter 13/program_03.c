#include <stdio.h>
#include <string.h>

struct employee {
    int ID;
    char name[30];
    int age;
    int salary;
};

int main() {
    struct employee emp;

    // Taking input from the user
    printf("Enter Employee ID: ");
    scanf("%d", &emp.ID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);  // reads string with spaces

    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);

    printf("Enter Employee Salary: ");
    scanf("%d", &emp.salary);

    // Displaying the employee details
    printf("\n----- Employee Details -----\n");
    printf("ID      : %d\n", emp.ID);
    printf("Name    : %s\n", emp.name);
    printf("Age     : %d\n", emp.age);
    printf("Salary  : %d\n", emp.salary);

    return 0;
}

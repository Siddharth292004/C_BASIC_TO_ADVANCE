

#include <stdio.h>
#include <string.h>

struct employee
{
    int ID;
    char name[30];
    int age;
    int salary;
};
int main()
{

    struct employee emp;

    emp.ID = 101;
    emp.age = 24;
    emp.salary = 24000;
    strcpy(emp.name, "siddu");

    printf("-----Employee Details------\n");
    printf("ID\t\t: %d\n", emp.ID);
    printf("Name\t\t: %s\n", emp.name);
    printf("Age\t\t: %d\n", emp.age);
    printf("Salary\t\t: %d", emp.salary);

    return 0;
}
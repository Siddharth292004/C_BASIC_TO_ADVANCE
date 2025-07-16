// Create an Employee structure that includes a nested Department structure with dept_name and manager.

#include<stdio.h>
#include<string.h>

typedef struct  Department
{
    char dept_name[50];
    char manager[50];
}department;

typedef struct Employee{
    char name[50];
    int ID;
    department dept;
}Employee;

int main(){
   
    Employee emp;

    printf("Enter Employee Name: ");
    fgets(emp.name,sizeof(emp.name),stdin);
    emp.name[strcspn(emp.name,"\n")] = '\0';

    printf("Enter Employee ID: ");
    scanf("%d",&emp.ID);
    getchar();
    printf("Enter Department Name: ");
    fgets(emp.dept.dept_name,sizeof(emp.dept.dept_name),stdin);
    emp.dept.dept_name[strcspn(emp.dept.dept_name,"\n")] ='\0';
    
    printf("Enter Manager Name: ");
    fgets(emp.dept.manager,sizeof(emp.dept.manager),stdin);
    emp.dept.manager[strcspn(emp.dept.manager,"\n")] ='\0';
    
    
    printf("\n---Employee Details---\n");

    printf("Name       : %s\n",emp.name);
    printf("ID         : %d\n",emp.ID);
    printf("Department : %s\n",emp.dept.dept_name);
    printf("Manager    : %s\n",emp.dept.manager);
    
    return 0;
                 
}
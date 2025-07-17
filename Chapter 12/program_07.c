//Create a structure `College` that contains college name, 
//and a nested `Student` structure with name, roll, and marks. 

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int RollNo;
    float marks;

} Student;

typedef struct
{
    char CollegeName[100];
    Student stu;
}College;

int main(){
   
    College col;
     
    // input
    printf("Enter the College name: ");
    fgets(col.CollegeName,sizeof(col.CollegeName),stdin);
    col.CollegeName[strcspn(col.CollegeName,"\n")] = '\0';

    printf("Enter Student Name: ");
    fgets(col.stu.name,sizeof(col.stu.name),stdin);
    col.stu.name[strcspn(col.stu.name,"\n")] = '\0';

    printf("Enter Roll Number: ");
    scanf("%d",&col.stu.RollNo);
    getchar();
    
    printf("Enter Marks: ");
    scanf("%f",&col.stu.marks);

    //output
    printf("\n--- College and Student Details ----\n\n");
    printf("College Name : %s\n",col.CollegeName);
    printf("Student Name : %s\n",col.stu.name);
    printf("Roll Number  : %d\n",col.stu.RollNo);
    printf("Marks        : %.2f\n",col.stu.marks);

   return 0;
}

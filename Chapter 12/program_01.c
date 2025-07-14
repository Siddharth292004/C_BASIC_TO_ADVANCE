// Create a structure to store student information and print it.

#include<stdio.h>
#include<string.h>

struct Student{
    int rollNo;
    char name[50];
    float marks;
};

int main(){
    struct Student s1;

    s1.rollNo = 101;
    s1.marks = 10.4;
    strcpy(s1.name,"jitendra");

    printf("Roll No: %d\n",s1.rollNo);
    printf("Name: %s\n",s1.name);
    printf("Marks %.2f\n",s1.marks);

    return 0;
}
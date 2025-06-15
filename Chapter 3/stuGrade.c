// 6. Write a program to display grade of student.

#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter the marks of student (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 80 && marks < 90)
    {
        grade = 'B';
    }
    else if (marks >= 70 && marks < 80)
    {
        grade = 'C';
    }
    else if (marks >= 60 && marks < 70)
    {
        grade = 'D';
    }
    else if (marks >= 50 && marks < 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("The grade of the student is: %c\n",grade);

    return 0;
}

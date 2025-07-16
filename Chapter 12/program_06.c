// Store marks of 3 students in 3 subjects and find average using structure.

#include<stdio.h>

typedef struct student{
   int marks[3];
   float average;
}student;

int main(){

    student s[3];
    for(int i =0;i<3;i++){
        printf("Enter marks for student %d\n",i+1);
        int sum = 0;
        for(int j =0;j<3;j++){
            printf("Subject %d: ",j+1);
            scanf("%d",&s[i].marks[j]);
            sum+=s[i].marks[j];
        }
        s[i].average = sum/3.0;
        printf("\n");
    }

    printf("----Average Marks----\n");
    for(int i =0;i<3;i++){
        printf("Student %d: %.2f\n",i+1,s[i].average);
    }
   
    return 0;
}

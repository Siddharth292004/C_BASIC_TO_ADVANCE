#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

typedef struct {
    char college_name[50];
    Student students[50];
    int student_count;
} College;

typedef struct {
    char university_name[50];
    College Colleges[10];
    int college_count;
} University;

int main() {
    University uni;

    // Input university name
    printf("Enter University Name: ");
    fgets(uni.university_name, sizeof(uni.university_name), stdin);
    uni.university_name[strcspn(uni.university_name, "\n")] = '\0';

    // Number of colleges
    printf("Enter number of colleges: ");
    scanf("%d", &uni.college_count);
    getchar(); // clear buffer

    // Loop over colleges
    for (int i = 0; i < uni.college_count; i++) {
        printf("\nEnter name of college %d: ", i + 1);
        fgets(uni.Colleges[i].college_name, sizeof(uni.Colleges[i].college_name), stdin);
        uni.Colleges[i].college_name[strcspn(uni.Colleges[i].college_name, "\n")] = '\0';

        printf("Enter number of students in %s: ", uni.Colleges[i].college_name);
        scanf("%d", &uni.Colleges[i].student_count);
        getchar(); // clear buffer

        // Loop over students in this college
        for (int j = 0; j < uni.Colleges[i].student_count; j++) {
            printf("\nEnter details for student %d in %s:\n", j + 1, uni.Colleges[i].college_name);

            printf("Name: ");
            fgets(uni.Colleges[i].students[j].name, sizeof(uni.Colleges[i].students[j].name), stdin);
            uni.Colleges[i].students[j].name[strcspn(uni.Colleges[i].students[j].name, "\n")] = '\0';

            printf("Roll Number: ");
            scanf("%d", &uni.Colleges[i].students[j].roll);

            printf("Marks: ");
            scanf("%f", &uni.Colleges[i].students[j].marks);
            getchar(); // clear newline
        }
    }

    // Display all data
    printf("\n\n--- University Details ---\n");
    printf("University: %s\n", uni.university_name);

    for (int i = 0; i < uni.college_count; i++) {
        printf("\nCollege %d: %s\n", i + 1, uni.Colleges[i].college_name);

        for (int j = 0; j < uni.Colleges[i].student_count; j++) {
            printf("  Student %d:\n", j + 1);
            printf("    Name : %s\n", uni.Colleges[i].students[j].name);
            printf("    Roll : %d\n", uni.Colleges[i].students[j].roll);
            printf("    Marks: %.2f\n", uni.Colleges[i].students[j].marks);
        }
    }

    return 0;
}

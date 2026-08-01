#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    s->id = 101;
    s->marks = 89.5;

    printf("ID: %d\n", s->id);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}
#include <stdio.h>

struct Address {
    char city[30];
    char state[30];
    int pincode;
};

struct Student {
    char name[30];
    int roll;
    struct Address addr;
};

int main() {
    struct Student s;

    // Input
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    getchar();  // consume newline

    printf("Enter City: ");
    fgets(s.addr.city, sizeof(s.addr.city), stdin);

    printf("Enter State: ");
    fgets(s.addr.state, sizeof(s.addr.state), stdin);

    printf("Enter Pincode: ");
    scanf("%d", &s.addr.pincode);

    // Output
    printf("\n--- Student Info ---\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);
    printf("City: %s", s.addr.city);
    printf("State: %s", s.addr.state);
    printf("Pincode: %d\n", s.addr.pincode);

    return 0;
}

#include <stdio.h>
#include <math.h>

// Function declarations
void print_menu();
double Add(double x, double y);
double Subtract(double x, double y);
double Multiply(double x, double y);
double Divide(double x, double y);
int Modulus(int x, int y);
double Power(double base, double exponent);

int main()
{
    int choice;
    double first, second, result;

    while (1)
    {
        print_menu();
        scanf("%d", &choice);

        if (choice == 7)
        {
            printf("Exiting Calculator. Goodbye!\n");
            break;
        }

        // Input numbers
        printf("Enter the first number: ");
        scanf("%lf", &first);
        printf("Enter the second number: ");
        scanf("%lf", &second);

        // Operation switch
        switch (choice)
        {
        case 1:
            result = Add(first, second);
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            result = Subtract(first, second);
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            result = Multiply(first, second);
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            if (second != 0)
            {
                result = Divide(first, second);
                printf("Result: %.2lf\n", result);
            }
            else
            {
                printf("Invalid input! Division by zero.\n");
            }
            break;

        case 5:
            if ((int)second != 0)
            {
                int mod_result = Modulus((int)first, (int)second);
                printf("Result: %d\n", mod_result);
            }
            else
            {
                printf("Invalid input! Modulus by zero.\n");
            }
            break;

        case 6:
            result = Power(first, second);
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Invalid choice! Please enter a valid option.\n");
            break;
        }
    }

    return 0;
}

// Menu Function
void print_menu()
{
    printf("\n----- Welcome to Simple Calculator -----\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

// Arithmetic Functions
double Add(double x, double y) {
    return x + y;
}

double Subtract(double x, double y) {
    return x - y;
}

double Multiply(double x, double y) {
    return x * y;
}

double Divide(double x, double y) {
    return x / y;
}

int Modulus(int x, int y) {
    return x % y;
}

double Power(double base, double exponent) {
    return pow(base, exponent);
}

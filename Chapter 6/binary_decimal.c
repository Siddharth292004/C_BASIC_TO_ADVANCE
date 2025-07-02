#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;  // represents 2^0 initially
    int rem;

    while (binary > 0) {
        rem = binary % 10;           // Get last digit (0 or 1)
        decimal += rem * base;      // Add to decimal result
        binary = binary / 10;       // Remove last digit
        base = base * 2;            // Increase power of 2
    }

    return decimal;
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int result = binaryToDecimal(binary);
    printf("Decimal equivalent = %d\n", result);

    return 0;
}

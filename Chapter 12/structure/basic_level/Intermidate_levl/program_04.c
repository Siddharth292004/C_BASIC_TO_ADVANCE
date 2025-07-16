// Create a Car structure that contains brand, model,
// and a nested structure Engine with power and fuelType.

#include <stdio.h>
#include <string.h>

typedef struct Engine {
    int power;
    char fuelType[20];  // changed to string
} Engine;

typedef struct Car {
    char brand[30];
    char model[30];
    Engine eng;
} Car;

int main() {
    Car c;

    printf("Enter Car Brand: ");
    fgets(c.brand, sizeof(c.brand), stdin);
    c.brand[strcspn(c.brand, "\n")] = '\0';

    printf("Enter Car Model: ");
    fgets(c.model, sizeof(c.model), stdin);
    c.model[strcspn(c.model, "\n")] = '\0';

    printf("Enter Engine Power (in HP): ");
    scanf("%d", &c.eng.power);
    getchar(); // to consume newline

    printf("Enter Fuel Type: ");
    fgets(c.eng.fuelType, sizeof(c.eng.fuelType), stdin);
    c.eng.fuelType[strcspn(c.eng.fuelType, "\n")] = '\0';

    printf("\n--- Car Information ---\n");
    printf("Brand     : %s\n", c.brand);
    printf("Model     : %s\n", c.model);
    printf("Power     : %d HP\n", c.eng.power);
    printf("Fuel Type : %s\n", c.eng.fuelType);

    return 0;
}

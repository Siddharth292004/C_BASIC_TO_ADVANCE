// Create a structure Order which contains order ID, and a nested structure 
// Product with name, quantity, and price. Create array of orders and find total 
// price of each.

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    int quantity;
    float price;
} Product;

typedef struct {
    int orderID;
    Product prod;
} Order;

int main() {
    int num;

    printf("Enter number of orders: ");
    scanf("%d", &num);
    getchar(); // consume leftover newline

    Order ord[num];

    for (int i = 0; i < num; i++) {
        printf("\nEnter details for Order %d:\n", i + 1);

        printf("Order ID      : ");
        scanf("%d", &ord[i].orderID);
        getchar(); // to consume newline after integer input

        printf("Product Name  : ");
        fgets(ord[i].prod.name, sizeof(ord[i].prod.name), stdin);
        ord[i].prod.name[strcspn(ord[i].prod.name, "\n")] = '\0'; // remove newline

        printf("Quantity      : ");
        scanf("%d", &ord[i].prod.quantity);

        printf("Unit Price ₹  : ");
        scanf("%f", &ord[i].prod.price);
        getchar(); // to consume newline
    }

    printf("\n----- Order Summary -----\n");

    for (int i = 0; i < num; i++) {
        float total_price = ord[i].prod.quantity * ord[i].prod.price;

        printf("\nOrder ID      : %d\n", ord[i].orderID);
        printf("Product Name  : %s\n", ord[i].prod.name);
        printf("Quantity      : %d\n", ord[i].prod.quantity);
        printf("Unit Price ₹  : %.2f\n", ord[i].prod.price);
        printf("Total Price ₹ : %.2f\n", total_price);
        printf("------------------------------");
    }
    
    return 0;
}

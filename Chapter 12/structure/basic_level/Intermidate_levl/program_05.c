
#include <stdio.h>
#include <string.h>

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

typedef struct Book
{
    char title[50];
    char author[50];
    float price;
    Date published;
} Book;

int main()
{

    Book B;

    printf("Enter Book Title: ");
    fgets(B.title, sizeof(B.title), stdin);
    B.title[strcspn(B.title, "\n")] = '\0';

    printf("Enter the Author Name: ");
    fgets(B.author, sizeof(B.author), stdin);
    B.author[strcspn(B.author, "\n")] = '\0';

    printf("Enter Book Price: ");
    scanf("%f", &B.price);

    printf("Enter Publish Date (DD MM YYYY): ");
    scanf("%d%d%d", &B.published.day, &B.published.month, &B.published.year);

    printf("\n-----Book Details-----\n");
    printf("Title       :%s\n", B.title);
    printf("Author      :%s\n", B.author);

    printf("Price       : %.2f\n", B.price);
    printf("Publish Date: %02d-%02d-%04d\n", B.published.day, B.published.month, B.published.year);

    return 0;
}
// Read and display book information using structure.

#include <stdio.h>
#include <string.h>

struct book
{
    char title[50];
    char author[50];
    int page;
    float price;

} book;

int main()
{

    printf("Enter Book Title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("Enter Number of Pages: ");
    scanf("%d", &book.page);

    printf("Enter Price: ");
    scanf("%f", &book.price);
    
    printf("\n-----Book Details-----\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Pages: %d\n", book.page);
    printf("Price: %.2f\n", book.price);

    return 0;
}

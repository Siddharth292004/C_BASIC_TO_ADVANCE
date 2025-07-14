#include <stdio.h>
#include <string.h>

// Define a structure for Book information
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};

int main() {
    struct Book book;

    printf("📖 Enter Book Title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0';  // Remove newline

    printf("👨‍💼 Enter Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0';  // Remove newline

    printf("📄 Enter Number of Pages: ");
    while (scanf("%d", &book.pages) != 1 || book.pages < 1) {
        printf("❌ Invalid input. Please enter a valid positive number: ");
        while (getchar() != '\n');  // Clear input buffer
    }

    printf("💰 Enter Price: ");
    while (scanf("%f", &book.price) != 1 || book.price < 0) {
        printf("❌ Invalid input. Please enter a valid price: ");
        while (getchar() != '\n');  // Clear input buffer
    }

    // Display book details
    printf("\n📚 ----- Book Details ----- 📚\n");
    printf("Title   : %s\n", book.title);
    printf("Author  : %s\n", book.author);
    printf("Pages   : %d\n", book.pages);
    printf("Price   : ₹%.2f\n", book.price);

    return 0;
}

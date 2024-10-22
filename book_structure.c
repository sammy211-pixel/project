#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    // Declare a variable of the structure type and initialize it
    struct book book1 = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    // Print the values of the fields
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Publication Year: %d\n", book1.publication_year);
    printf("ISBN: %s\n", book1.ISBN);
    printf("Price: %.2f\n", book1.price);

    // Repeat the above: prompt the user to enter the declared variables
    struct book book2;
    printf("\nEnter the book details:\n");
    printf("Title: ");
    fgets(book2.title, 30, stdin);
    book2.title[strcspn(book2.title, "\n")] = 0;  // Remove trailing newline

    printf("Author: ");
    fgets(book2.author, 30, stdin);
    book2.author[strcspn(book2.author, "\n")] = 0; // Remove trailing newline

    printf("Publication Year: ");
    scanf("%d", &book2.publication_year);
    getchar(); // Consume leftover newline

    printf("ISBN: ");
    fgets(book2.ISBN, 13, stdin);
    book2.ISBN[strcspn(book2.ISBN, "\n")] = 0; // Remove trailing newline

    printf("Price: ");
    scanf("%f", &book2.price);

    // Print the values of the fields
    printf("\nBook Details:\n");
    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Publication_year: %d\n", book2.publication_year);
    printf("Price: %f\n", book2.price);
    
    return 0;
    
}

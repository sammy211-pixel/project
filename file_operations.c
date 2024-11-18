#include <stdio.h>  
#include <stdlib.h>  

#define FILENAME "output.txt"  
#define MAX_LENGTH 200  

// Function to write a paragraph to the file  
void writeParagraph() {  
    FILE *file = fopen(FILENAME, "w"); // Open the file for writing  
    if (file == NULL) {  
        perror("Error opening file for writing");  
        return;  
    }  

    char paragraph[MAX_LENGTH + 1]; // +1 for null terminator  
    printf("Enter a paragraph (up to 200 characters):\n");  
    fgets(paragraph, sizeof(paragraph), stdin); // Read user input  

    // Write to file  
    if (fputs(paragraph, file) == EOF) {  
        perror("Error writing to file");  
    }  

    fclose(file); // Close the file  
}  

// Function to read and display content from the file  
void readParagraph() {  
    FILE *file = fopen(FILENAME, "r"); // Open the file for reading  
    if (file == NULL) {  
        perror("Error opening file for reading");  
        return;  
    }  

    char ch;  
    printf("Content of '%s':\n", FILENAME);  
    while ((ch = fgetc(file)) != EOF) { // Read and print character by character  
        putchar(ch);  
    }  

    fclose(file); // Close the file  
}  

// Function to append a paragraph to the file  
void appendParagraph() {  
    FILE *file = fopen(FILENAME, "a"); // Open the file for appending  
    if (file == NULL) {  
        perror("Error opening file for appending");  
        return;  
    }  

    char paragraph[MAX_LENGTH + 1]; // +1 for null terminator  
    printf("Enter an additional paragraph (up to 200 characters):\n");  
    fgets(paragraph, sizeof(paragraph), stdin); // Read user input  

    // Write to file  
    if (fputs(paragraph, file) == EOF) {  
        perror("Error appending to file");  
    }  

    fclose(file); // Close the file  
}  

// Main function to run the program  
int main() {  
    int choice;  

    do {  
        printf("\nFile Operations Menu:\n");  
        printf("1. Write a paragraph\n");  
        printf("2. Read content\n");  
        printf("3. Append a paragraph\n");  
        printf("4. Exit\n");  
        printf("Enter your choice: ");  
        scanf("%d", &choice);  
        getchar(); // To consume the newline character left by scanf  

        switch (choice) {  
            case 1:  
                writeParagraph();  
                break;  
            case 2:  
                readParagraph();  
                break;  
            case 3:  
                appendParagraph();  
                break;  
            case 4:  
                printf("Exiting the program.\n");  
                break;  
            default:  
                printf("Invalid choice. Please try again.\n");  
        }  
    } while (choice != 4);  

    return 0;  
}

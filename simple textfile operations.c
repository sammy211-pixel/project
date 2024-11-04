#include <stdio.h>  
#include <stdlib.h>  

void writeSentenceToFile(const char *filename) {  
    char sentence[101];  // Buffer for the sentence (100 chars + null terminator)  

    printf("Enter a sentence (up to 100 characters): ");  
    fgets(sentence, sizeof(sentence), stdin);  

    FILE *file = fopen(filename, "w"); // Open file for writing  
    if (file == NULL) {  
        perror("Error opening file");  
        return;  
    }  

    fputs(sentence, file); // Write the sentence to the file  
    fclose(file); // Close the file  
    printf("Sentence written to %s\n", filename);  
}  

void readContentFromFile(const char *filename) {  
    char line[101]; // Buffer for reading a line  

    FILE *file = fopen(filename, "r"); // Open file for reading  
    if (file == NULL) {  
        perror("Error opening file");  
        return;  
    }  

    printf("\nContent of %s:\n", filename);  
    while (fgets(line, sizeof(line), file) != NULL) {  
        printf("%s", line); // Display the line read from the file  
    }  

    fclose(file); // Close the file  
}  

void appendSentenceToFile(const char *filename) {  
    char sentence[101]; // Buffer for the new sentence  

    printf("Enter another sentence to append (up to 100 characters): ");  
    fgets(sentence, sizeof(sentence), stdin);  

    FILE *file = fopen(filename, "a"); // Open file for appending  
    if (file == NULL) {  
        perror("Error opening file");  
        return;  
    }  

    fputs(sentence, file); // Append the new sentence to the file  
    fclose(file); // Close the file  
    printf("Sentence appended to %s\n", filename);  
}  

int main() {  
    const char *filename = "data.txt";  

    writeSentenceToFile(filename);  
    readContentFromFile(filename);  
    appendSentenceToFile(filename);  
    readContentFromFile(filename);  

    return 0;  
}

#include <stdio.h>

int main() {
    int terms;
    char choice;

    do {
        // Prompt the user for the number of terms
        printf("Input number of terms: ");
        scanf("%d", &terms);

        // Using a for loop to display the cubes
        printf("Expected Output:\n");
        for (int i = 1; i <= terms; i++) {
            printf("Number is: %d and cube of the %d is: %d.\n", i, i, i * i * i);
        }

        // Ask user if they want to start over
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any newline character

    } while (choice == 'y' || choice == 'Y'); // Repeat if the user enters 'y' or 'Y'

    return 0;
}

#include <stdio.h>

int main() {
    // Define a 1D array of integers
    int numbers[5];
    
    // Fill the array with values
    for (int i = 0; i < 5; i++) {
        numbers[i] = i * 2; // Example: storing even numbers
    }
    
    // Print the values in the array
    printf("Array values:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

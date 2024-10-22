#include <stdio.h>

int main() {
    // Define a 2D array (3x3 matrix)
    int matrix[3][3];

    // Fill the array with values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = i + j; // Example: sum of indices
        }
    }

    // Print the values in the 2D array
    printf("Matrix values:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

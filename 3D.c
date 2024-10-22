#include <stdio.h>

int main() {
    // Define a 3D array (2x3x4)
    int array[2][3][4];

    // Fill the array with values
    int value = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                array[i][j][k] = value; // Example: fill with sequential values
                value++;
            }
        }
    }

    // Print the values in the 3D array
    printf("3D Array values:\n");
    for (int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

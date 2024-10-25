#include <stdio.h>

void forestPath();
void mountainPath();

void startGame() {
    int choice;
    printf("Welcome to the game 'Ann'!\n");
    printf("You are Ann, a brave adventurer in a mysterious land.\n");
    printf("One day, you find yourself at a crossroads.\n");
    printf("Do you want to:\n");
    printf("1. Go left towards the forest.\n");
    printf("2. Go right towards the mountains.\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        forestPath();
    } else if (choice == 2) {
        mountainPath();
    } else {
        printf("Invalid choice! Please restart the game.\n");
    }
}

void forestPath() {
    int choice;
    printf("\nYou have entered the forest. It's dark and eerie.\n");
    printf("You hear rustling in the bushes. Do you want to:\n");
    printf("1. Investigate the sound.\n");
    printf("2. Continue walking deeper into the forest.\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nYou find a friendly fox who offers to guide you! You win!\n");
    } else if (choice == 2) {
        printf("\nYou get lost in the forest and can't find your way out. Game over.\n");
    } else {
        printf("Invalid choice! Please restart the game.\n");
    }
}

void mountainPath() {
    int choice;
    printf("\nYou have entered the mountains. The path is steep and rocky.\n");
    printf("You see a cave. Do you want to:\n");
    printf("1. Enter the cave.\n");
    printf("2. Climb higher up the mountain.\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nInside the cave, you find hidden treasure! You win!\n");
    } else if (choice == 2) {
        printf("\nYou slip and fall down the mountain. Game over.\n");
    } else {
        printf("Invalid choice! Please restart the game.\n");
    }
}

int main() {
    startGame();
    return 0;
}

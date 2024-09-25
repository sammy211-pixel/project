//Grading System Program
#include <stdio.h>

int main() {
    int marks[3];
    float average;
    char grade;

    // Prompt user to enter marks for 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate the average marks
    int total = marks[0] + marks[1] + marks[2];
    average = total / 3.0;

    // Determine the grade based on average
    if (average >= 70 && average <= 100) {
        grade = 'A';
    } else if (average >= 60 && average < 70) {
        grade = 'B';
    } else if (average >= 50 && average < 60) {
        grade = 'C';
    } else if (average >= 40 && average < 50) {
        grade = 'D';
    } else {
        grade = 'E'; // Fail
    }

    // Display the results
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}

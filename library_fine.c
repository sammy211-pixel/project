//C program to calculate the fine for overdue library books
#include <stdio.h>

int main() {
    int bookID;
    int dueDate, returnDate, daysOverdue;
    int fineAmount = 0;
    int fineRate;

    // Input from user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date: ");
    scanf("%d", &dueDate);

    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate
    if (daysOverdue <= 0) {
        fineAmount = 0;  // No fine if returned on or before due date
    } else if (daysOverdue <= 7) {
        fineRate = 20;
        fineAmount = fineRate;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
        fineAmount = fineRate;
    } else {
        fineRate = 100;
        fineAmount = fineRate;
    }

    // Display the results
    printf("\n--- Fine Details ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d\n", fineRate);
    printf("Total Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}

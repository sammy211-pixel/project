#include <stdio.h>

#define MAX_EMAIL_LENGTH 50
#define MAX_PHONE_LENGTH 15

struct student {
    int reg_no;                     // Registration number
    char email[MAX_EMAIL_LENGTH];   // Email address
    int ID;                         // Student ID
    char phone[MAX_PHONE_LENGTH];    // Phone number
    float marks;                    // Marks
};

int main() {
    // Example of how to use the structure
    struct student s1;

    // Assigning values to the structure
    s1.reg_no = 123456;
    snprintf(s1.email, sizeof(s1.email), "student@example.com");
    s1.ID = 7890;
    snprintf(s1.phone, sizeof(s1.phone), "123-456-7890");
    s1.marks = 85.5;

    // Displaying the student information
    printf("Registration No: %d\n", s1.reg_no);
    printf("Email: %s\n", s1.email);
    printf("ID: %d\n", s1.ID);
    printf("Phone: %s\n", s1.phone);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

#include <stdio.h>  

struct Student {  
    char name[30];  
    int marks;  
};  

int main() {  
    struct Student students[5];  
    FILE *file;  

    // Input student details  
    for (int i = 0; i < 5; i++) {  
        printf("Enter name of student %d: ", i + 1);  
        scanf("%s", students[i].name);  
        printf("Enter marks of student %d: ", i + 1);  
        scanf("%d", &students[i].marks);  
    }  

    // Write to file  
    file = fopen("students.bin", "wb");  
    if (file == NULL) {  
        printf("Error opening file!\n");  
        return 1;  
    }  
    fwrite(students, sizeof(struct Student), 5, file);  
    fclose(file);  

    // Read from file and display  
    file = fopen("students.bin", "rb");  
    if (file == NULL) {  
        printf("Error opening file!\n");  
        return 1;  
    }  

    printf("\nStudent Details:\n");  
    fread(students, sizeof(struct Student), 5, file);  
    for (int i = 0; i < 5; i++) {  
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);  
    }  

    fclose(file);  
    return 0;  
}

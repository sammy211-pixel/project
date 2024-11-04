#include <stdio.h>  

int main() {  
    FILE *file = fopen("students.txt", "w");  
    if (file == NULL) {  
        printf("Error opening file!\n");  
        return 1;  
    }  

    char name[30];  
    int marks;  

    for (int i = 0; i < 5; i++) {  
        printf("Enter name of student %d: ", i + 1);  
        scanf("%s", name);  
        printf("Enter marks of student %d: ", i + 1);  
        scanf("%d", &marks);  

        fprintf(file, "Name: %s, Marks: %d\n", name, marks);  
    }  

    fclose(file);  
    return 0;  
}

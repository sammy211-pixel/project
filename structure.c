#include<stdio.h>
#include<string.h>

struct student{
    char name[22];
    char reg_no[16];
    int ID;
    int phone_no;
    float marks;
    char email[20];
}student1, student2;
int main(){
    strcpy(student1.name, "Sammy");
    strcpy(student1.reg_no, "BCS-05-0025/2024");
    strcpy(student1.email, "sammy@gmail.com");
    student1.ID = 453623;
    student1.phone_no = 759555009;
    student1.marks = 89.5;
    
    printf("enter student2 name");
    scanf("%s", student2.name);
    printf("enter student2 reg_no");
    scanf("%s", student2.reg_no);
    printf("enter student2 email");
    scanf("%s", student2.email);
    student2.ID = 456723;
    student2.phone_no = 734562422;
    student2.marks = 78.5;
    
    
    printf("Name: %s\n", student1.name);
    printf("Reg_no: %s\n", student1.reg_no);
    printf("ID is: %d\n", student1.ID);
    printf("phone_no: %d\n", student1.phone_no);
    printf("marks: %lf\n", student1.marks);
    printf("email: %s\n", student1.email);
    
    printf("Name: %s\n", student2.name);
    printf("Reg_no: %s\n", student2.reg_no);
    printf("ID is: %d\n", student2.ID);
    printf("phone_no: %d\n", student2.phone_no);
    printf("marks: %lf\n", student2.marks);
    printf("email: %s\n", student2.email);
    
    return 0;
}

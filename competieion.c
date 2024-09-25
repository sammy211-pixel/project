#include<stdio.h>
int main(){
    int age;
    printf("enter student age:");
    scanf("%d",&age);
    
    int schoolfees;
    printf("enter school fees:");
    scanf("%d",&schoolfees);
    
    if(age>16 &&schoolfees>15000){
        printf("you can go for the competition");
    }
    else{
        printf("cannot qualify for the competition");
    }
    return 0;
}

//Bank loan
#include<stdio.h>
int main() {
    int age, income;
    
    printf("enter your age and income:");
    scanf("%d%d",&age, &income);
    
    if(age>=21 &&income>21000){
        printf("congratulations you qualify for the loan");
    }
    else{
        printf("Unfortunately, we are unable to offer you a loan at this time .");
    }
    
    return 0;
}

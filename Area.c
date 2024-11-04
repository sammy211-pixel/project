// Online C compiler to run area of a rectangle
#include <stdio.h>

int main() {
    float length, width, area;
    
    printf("enter the length of the rectangle:");
    scanf("%f", &length);
    
    printf("enter the width of the rectangle:");
    scanf("%f", &width);
    
    area = length * width;
    printf("the area of the rectangle is %f\n", area);

    return 0;
}

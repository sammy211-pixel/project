#include<stdio.h>
int main(){
    int i=20, sum=0;
    //for(start; stop; step)
    while(i>0){
        printf("%d\n", i);
        i--;
        sum+=i;
    }
    printf("The sum is %d", sum);
    return 0;
}

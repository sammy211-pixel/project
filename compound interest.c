#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;
    int n;

    // Accept user input
    printf("Compound Interest Calculator\n");

    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &n);

    // Calculate amount using the compound interest formula
    amount = principal * pow((1 + (rate / (100 * n))), (n * time));

    // Calculate compound interest
    compound_interest = amount - principal;

    // Display results
    printf("\nTotal amount after %.2lf years: $%.2lf\n", time, amount);
    printf("Compound Interest: $%.2lf\n", compound_interest);

    return 0;
}

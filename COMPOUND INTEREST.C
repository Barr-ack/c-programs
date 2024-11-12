//PROGRAM TO FIND COMPOUND INTEREST

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest;
    int n;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate : ");
    scanf("%lf", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%lf", &time);
    
    printf("Enter the number of times interest  per year: ");
    scanf("%d", &n);


    compound_interest = principal * pow((1 + rate / (n * 100)), n * time) - principal;

    
    printf("The compound interest is: %.2lf\n", compound_interest);

    return 0;
}
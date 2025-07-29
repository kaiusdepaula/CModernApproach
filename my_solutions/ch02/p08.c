/*
Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments
*/

#include <stdio.h>

float loan, interest, payment;

int main(void){
    printf("Enter a amount of loan: \n");
    scanf("%f", &loan);
    printf("Enter a amount of interest rate: \n");
    scanf("%f", &interest);
    printf("Enter a amount of monthly payment: \n");
    scanf("%f", &payment);

    interest = (interest / 100.00) / 12.0;
    loan = loan + (loan * interest) - payment;
    printf("Balance remaining after first payment: $%f\n", loan);
    loan = loan + (loan * interest) - payment;
    printf("Balance remaining after second payment: $%f\n", loan);
    loan = loan + (loan * interest) - payment;
    printf("Balance remaining after third payment: $%f\n", loan);
    return 0;
}
/*
Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
amount of income tax. When passed an amount of taxable income, the function will return
the lax due.
*/

#include <stdio.h>

float due_tax(int income);

int main(void){
    int income;
    printf("Enter amount of income: ");
    scanf("%d", &income);
    
    printf("Tax due is: %.2f\n", due_tax(income));
    return 0;
}

float due_tax(int income){
    float due_tax;
    if (income <= 750) {
        due_tax = income * 0.01f;
    } else if (income <= 2250) {
        due_tax = 7.5f + ((income - 750) * 0.02f);
    } else if (income <= 3750) {
        due_tax = 37.5f + ((income - 2250) * 0.03f);
    } else if (income <= 5250) {
        due_tax = 82.5f + ((income - 3750) * 0.04f);
    } else if (income <= 7000) {
        due_tax = 142.5f + ((income - 5250) * 0.05f);
    } else {
        due_tax = 230.0f + ((income - 7000) * 0.06f);
    }
    return due_tax;
}
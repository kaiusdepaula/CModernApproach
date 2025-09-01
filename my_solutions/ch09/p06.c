/*
Write a function that computes the value of the following polynomial:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Write a program that asks the user to enter a value for x, calls the function to compute the
value of the polynomial, and then displays the value relumed by the function.
*/
#include <stdio.h>
#include <math.h>

int compute_poly(int x);

int main(void){
    int x, result;
    printf("Enter a value for x: ");
    scanf("%d", &x);

    result = compute_poly(x);
    printf("The result for the polynomial expresssion is: %d\n", result);
    return 0;
}

int compute_poly(int x){
    return (int) 3*pow(x, 5) + 2*pow(x, 4) - 5*pow(x,3) - pow(x,2) + 7*x - 6;
}
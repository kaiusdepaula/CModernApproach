/*
Write a recursive version of the gcd function (see Exercise 3). Here's the strategy to use for
computing gcd (m, n): If n is 0. return m. Otherwise, call gcd recursively, passing n as
the first argument and m % n as the second.
*/
#include <stdio.h>
int compute_gcd(int m, int n);

int main(void){
    int numerator, denominator, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    gcd = compute_gcd(numerator, denominator);
    printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);
}

int compute_gcd(int m, int n) {
    return n == 0 ? m : compute_gcd(n, m % n);
}
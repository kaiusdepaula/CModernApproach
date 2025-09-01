/*
Write a I unction ged (m, n) that calculates the greatest common divisor of the integers m
GCD (Programming Pr°ject 2 in Chapter 6 describes Euclid's algorithm for computing the GCD)
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
    int gcd, remainder;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}
/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:
Enter a fraction: 6/12
In lowest terms: 1/2
Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int compute_gcd(int m, int n) {
    int gcd, remainder;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}

int main(void){
    int numerator, denominator, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    gcd = compute_gcd(numerator, denominator);
    printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);
}
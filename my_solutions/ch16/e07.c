/*
Assume that the fraction structure contains two members: numerator and denomi¬
nator (both of type int). Write functions that perform the following operations on frac¬
tions:
(a) Reduce the fraction f to lowest terms. Hint: To reduce a fraction to lowest terms, first
compute the greatest common divisor (GCD) of the numerator and denominator. Then
divide both the numerator and denominator by the GCD.
(b) Add the fractions fl and f 2.
(c) Subtract the fraction f2 from the fraction f 1.
(d) Multiply the fractions f 1 and f 2.
(e) Divide the fraction f 1 by the fraction f 2.
The fractions f , f 1, and f 2 will be arguments of type struct fraction: each function
will return a value of type struct fraction. The fractions returned by the functions in
parts (b)-(e) should be reduced to lowest terms. Hint: You may use the function from pan
(a) to help write the functions in parts (bMe).
*/

#include <stdio.h>

struct fraction{
    int numerator, denominator;
};

struct fraction add_fraction(struct fraction f1, struct fraction f2);
struct fraction subtract_fraction(struct fraction f1, struct fraction f2);
struct fraction multiply_fraction(struct fraction f1, struct fraction f2);
struct fraction divide_fraction(struct fraction f1, struct fraction f2);

int main(void) {
    struct fraction a = {1, 2};
    struct fraction b = {1, 3};

    struct fraction sum = add_fraction(a, b);
    struct fraction diff = subtract_fraction(a, b);
    struct fraction prod = multiply_fraction(a, b);
    struct fraction quot = divide_fraction(a, b);

    printf("Sum: %d/%d\n", sum.numerator, sum.denominator);
    printf("Diff: %d/%d\n", diff.numerator, diff.denominator);
    printf("Prod: %d/%d\n", prod.numerator, prod.denominator);
    printf("Quot: %d/%d\n", quot.numerator, quot.denominator);

    return 0;
}

void lowest_terms(struct fraction *s){
    int gcd, remainder;
    int m = s->numerator, n = s->denominator;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    gcd = m;
    s->numerator /= gcd;
    s->denominator /= gcd;
}

struct fraction add_fraction(struct fraction f1, struct fraction f2){
    struct fraction f3;
    if(f1.denominator == f2.denominator){
       f3.denominator = f1.denominator;
       f3.numerator = f1.numerator + f2.numerator; 
    } else {
       f3.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
       f3.denominator = f1.denominator * f2.denominator;
    }
    lowest_terms(&f3);
    return f3;
}
struct fraction subtract_fraction(struct fraction f1, struct fraction f2){
    struct fraction f3;
    if(f1.denominator == f2.denominator){
       f3.denominator = f1.denominator;
       f3.numerator = f1.numerator - f2.numerator; 
    } else {
       f3.numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
       f3.denominator = f1.denominator * f2.denominator;
    }
    lowest_terms(&f3);
    return f3;
}
struct fraction multiply_fraction(struct fraction f1, struct fraction f2){
    struct fraction f3;
    f3.numerator = f1.numerator * f2.numerator;
    f3.denominator = f1.denominator * f2.denominator;
    
    lowest_terms(&f3);
    return f3;
}
struct fraction divide_fraction(struct fraction f1, struct fraction f2){
    struct fraction f3;
    f3.numerator = f1.numerator * f2.denominator;
    f3.denominator = f1.denominator * f2.numerator;
    
    lowest_terms(&f3);
    return f3;
}
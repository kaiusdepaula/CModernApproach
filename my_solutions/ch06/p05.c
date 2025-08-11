/*
Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
number with its digits reversed. Generalize the program so that the number can have one.
two. three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10.
stopping when it reaches 0
*/

#include <stdio.h>

int main(void) {
    /*
    Note: This program is limited by the size of the data type used.
    On most modern systems:
    - An int is 4 bytes (32 bits), which can hold up to about 2.1 billion (~10 decimal digits).
    - A long long is 8 bytes (64 bits), which can hold values up to about 9.22 × 10^18 (~19 decimal digits).
    Unsigned types can store larger positive numbers, and some compilers offer non-standard 128-bit integers.
    */
    long long number; 
    int digits = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    do {
        digits++;
        number /= 10;
    } while (number != 0);

    printf("The number has %d digit%s.\n", digits, digits == 1 ? "" : "s");
    return 0;
}
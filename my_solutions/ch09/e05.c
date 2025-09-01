/*
Write a function num_digits (n) that returns the number of digits in n (a positive inte¬
ger). Hint: To determine the number of digits in a number n. divide it by 10 repeatedly.
When n reaches 0. the number of divisions indicates how many digits n originally had
*/

#include <stdio.h>

int num_digits(int n);

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The number has %d digits.\n", num_digits(n));
    return 0;
}

int num_digits(int n) {
    int digits = 1;
    while(n / 10 > 0) {
        digits++;
        n = n / 10;
    }
    return digits;
}
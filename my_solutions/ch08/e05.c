/*
The Fibonacci numbers are 0. 1. 1. 2. 3. 5. 8. 13.where each number is the sum of the
two preceding numbers. Write a program fragment that declares an array named
f ib numbers of length 40 and fills the array with the first 40 Fibonacci numbers. Hint:
Fill in the first two numbers individually, then use a loop to compute the remaining num¬
bers
*/

#include <stdio.h>

int main(void) {
    int fib_sequence[40] = {0, 1};
    int l, r;
    printf("Fibonacci sequence: ");
    for (int i = 2; i < sizeof(fib_sequence) / sizeof(fib_sequence[0]); i++) {
        l = i - 2;
        r = i - 1;
        fib_sequence[i] = fib_sequence[l] + fib_sequence[r];
    }
    for (int i = 0; i < sizeof(fib_sequence) / sizeof(fib_sequence[0]); i++){
        printf("%d ", fib_sequence[i]);
    }
    printf("\n");
    return 0;
}
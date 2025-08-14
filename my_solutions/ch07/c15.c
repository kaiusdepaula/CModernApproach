/*
Write a program that computes the factorial of a positive integer:
Enter a positive integer: 6
Factorial of 6: 720
*/

#include <stdio.h>

int main(void) {
    int x;
    long double factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Factorial is not defined for negative integers.\n");
    return 1;
    }

    for (int i = x; i > 0; i--) {
        factorial *= i;
    }
    printf("Factorial of %d: %Lf\n", x, factorial);
}

/*
(a) Use a short variable to store the value of the factorial. What is the largest value of n
for which the program correctly prints the factorial of «?
A: 7 is max as short holds ~2 bytes that can hold 2^16 = 32765 which is < 8!

(b) Repeat part (a), using an int variable instead.
A: 16 is max as integers (on my system) hold 2^32 = 4294967296 being < 17!

(c) Repeat part (a), using a long variable instead.
A: 20 is max. 21! > 2^64

(d) Repeat part (a), using a long long variable instead (if your compiler supports the
long long type).
Same as long. 

(e) Repeat part (a), using a float variable instead.
A: 34 is max.

(f) Repeat part (a), using a double variable instead.
A: 170 is max.

(g) Repeat part (a), using a long double variable instead.
In cases (e)-(g). the program will display a close approximation of the factorial, not neces¬
sarily the exact value.
A: 1754 is max.
*/
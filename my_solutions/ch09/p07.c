/*
The power function of Section 9.6 can be made faster by having it calculate .v" in a difler-
ent way. We first notice that if n is a power of 2. then .v" can be computed by squaring. For
example, x4 is the square of r, so .v4 can be computed using only two multiplications instead
of three. As it happens, this technique can be used even when // is not a power of 2. If n is
even, we use the formula.v" = (x"/2):. If n is odd. then x" =.vx x"_l. Write a recursive func¬
tion that computes x". (The recursion ends when n = 0. in which case the function returns 1.)
To test your function, write a program that asks the user to enter values for x and n, calls
power to compute x", and then displays the value returned by the function.
*/

#include <stdio.h>

int power(int x, int n);

int main(void){
    int x, n;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value to power by: ");
    scanf("%d", &n);

    printf("%d powered by %d is %d\n", x, n, power(x, n));
    return 0;
}

int power(int x, int n){
    int result;
    if (n == 0){
        return 1;
    } else if (n % 2 == 0){
        result = power(x, n / 2);
        return  result * result;
    } else {
        return x * power(x, n-1);
    }
}
/*
write the following parameterized macros.
(a) CHECK (x,y,n) - Has the value I if both x and y fall between 0 and n - 1. inclusive.
(b) MEDIAN (x,y, z) - Finds the median of x. y. and z.
(c) POLYNOMIAL (x) - Computes the polynomial 3.x-' + 2x4 - 5xJ - x2 + lx - 6.
*/

#include <stdio.h>

#define CHECK(x, y, n) ((x) >= 0 && (y) >= 0 && (x) <= (n) - 1 && (y) <= (n) - 1 ? 1 : 0)
#define MEDIAN(x, y, z) (\
    ((x) >= (y) && (x) <= (z)) || ((x) >= (z) && x <= (y)) ? (x) : \
    ((y) >= (x) && (y) <= (z)) || ((y) >= (z) && (y) <= (x)) ? (y) : \
    (z) \
    )
#define POLYNOMIAL(x) ( \
    (3*((x)*(x)*(x)*(x)*(x))) + \
    (2*((x)*(x)*(x)*(x))) - \
    (5*((x)*(x)*(x))) - \
    ((x) * (x)) + \
    (7*(x)) + 6 \
    )

int main(void){
    printf("%d\n", CHECK(2, 12, 10));
    printf("%d\n", MEDIAN(30, 0, 20));
    printf("%d\n", POLYNOMIAL(2));
    return 0;
}
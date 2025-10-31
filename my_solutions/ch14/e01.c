/*
Write parameterized macros that compute the following values.
(a) The cube of x.
(b) The remainder when n is divided by 4.
(c) 1 if the product of x and y is less than 100, 0 otherwise.
Do your macros always work? If not, describe what arguments would make them fail.
*/

#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define TEST(x, y) ((x) * (y) < 100 ? 1 : 0)

int main(void){
    int x = 4;
    printf("%d\n", CUBE(x));
    printf("%d\n", REMAINDER(x));
    printf("%d\n", TEST(x, x));
    return 0;
}
/*
Suppose that s is the following structure:
struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4] ;
}s;
If char values occupy one byte, int values occupy four bytes, and double values occupy
eight bytes, how much space will a C compiler allocate for s? (Assume that the compiler
leaves no “holes” between members.)

On my system (x86_64), assuming no padding:
doubles hold 8 bytes in size.
Inside the union, the biggest datatype holds 8 bytes as well.
An array of 4 chars needs 4 bytes.
8 + 8 + 4 = 20 bytes.

But the compiler will pad the structs in multiples of 8. So:
8 + 8 + 8 = 24 bytes.
*/

#include <stdio.h>

struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4] ;
}s;

int main(void) {
    printf("%zu\n", sizeof(s));
    return 0;
}

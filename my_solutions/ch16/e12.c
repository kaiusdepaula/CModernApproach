/*
Suppose that u is the following union:
union {
    double a;
    struct {
        char b[4] ;
        double c;
        int d ;
    } e;
    char f[4];
} u;
If char values occupy one byte, int values occupy four bytes, and double values occupy
eight bytes, how much space will a C compiler allocate for u? (Assume that the compiler
leaves no “holes” between members.)

The union will store the biggest datatype, which is the struct inside the members.
The struct will store 4 bytes for the char array, 8 bytes for the double and 4 bytes for the
integer on a 64 bit system.

With no padding:
4 + 8 + 4 = 16

Likewise, last exercise I've printed the size of the datatype, this program will probably print
the same value as the previous because of padding in multiples of 8.
*/

#include <stdio.h>

union {
    double a;
    struct {
        char b[4];
        double c;
        int d ;
    } e;
    char f[4];
} u;

int main(void){
    printf("%zu\n", sizeof(u));
    return 0;
}
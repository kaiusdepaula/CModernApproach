/*
The following program fragments illustrate the logical operators. Show the output produced
by each, assuming that i, j, and k are int variables.
*/

// note to self: this gave me nightmares
// mixing binary with decimal numbers is never a good idea.

#include <stdio.h>

int main(void){
    int i, j, k;
    i = 10; j = 5;
    printf("%d", !i < j);

    i = 2; j = 1;
    printf("\n%d", !!i + !j);

    i = 5; j = 0; k = -5;
    printf("\n%d", i && j || k);

    i = 1; j = 2; k = 3;
    printf("\n%d\n", i < j || k);
}
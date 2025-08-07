/*
The following program fragments illustrate the short-circuit behavior of logical expressions.
Show the output produced by each, assuming that i, j. and k are int variables.
*/

#include <stdio.h>

int main(void){
    int i,j,k;
    i = 3; j = 4; k = 5;
    printf("a) %d ", i < j || ++j < k);
    printf("%d %d %d ", i, j, k);

    i = 7; j = 8; k = 9;
    printf("b) %d ", i - 7 && j++ < k);
    printf("%d %d %d ", i, j, k);

    i = 7; j = 8; k = 9;
    printf("c) %d ", (i = j) || (j = k));
    printf("%d %d %d ", i, j, k);

    i = 1; j = 1; k = 1;
    printf("d) %d ", ++i || ++j && ++k);
    printf("%d %d %d ", i, j, k);
    return 0;
}
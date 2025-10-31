/*
Write a macro NELEMS (a) that computes the number of elements in a one-dimensional
array a. Hint: See the discussion of the sizeof operator in Section 8.1
*/

#include <stdio.h>
#define NELEMS(a) (sizeof((a)) / sizeof(*(a)))

int main(void){
    int x[101] = {0};
    printf("%d\n", NELEMS(x));
    return 0;
}
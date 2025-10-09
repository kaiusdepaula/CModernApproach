/*
Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
other words, eliminate the variables i and j and all uses of the [] operator.) Use a single
loop instead of nested loops.
int sum_two_dimensional_array(const int a[][LEN], int n) {
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a [i] [j] ;
    return sum;
}
*/

#include <stdio.h>

int sum_two_dimensional_array(const int *a, int n, int len); 

int main(void){
    return 0;
}

int sum_two_dimensional_array(const int *a, int n, int len) {
    int sum = 0;
    for (const int *p = a; p < a + (n * len); p++){
        sum += *p;
    }
    return sum;
}
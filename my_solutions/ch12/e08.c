/*
Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
other words, eliminate the variable i and all uses of the [] operator.) Make as few changes
as possible.
void storezeros(int at], int n) {
int i ;
for (i = 0; i < n; i++)
a[i] = 0;
}
*/

#include <stdio.h>
void storezeros(int *a, int n);

int main(void){
    int n = 10, a[n];
    storezeros(a, n);
    for (int *p = a; p < a + n; p++){
        printf("%d", *p);
    }
    return 0;
}

void storezeros(int *a, int n){
    for (int *p = a; p < a + n; p++){
        *p = 0;
    }
}

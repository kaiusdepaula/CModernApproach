/*
Write the following function:
double inner_product(const double *a, const double *b,
int n);
a and b both point to arrays of length n. The function should return a[0] * b [0] +
a [1] * b [1] + ... + a [n-1] * b [n-1]. Use pointer arithmetic—not subscripting—to
visit array elements.
*/
#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void){
    int n = 10;
    double a[10] = {1, 3, 4, 5, 1, 5, 6, 1, 23, 3};
    double b[10] = {12, 3, 3, 5, 5, 1, 61, 6, 3, 5};
    double c;
    c = inner_product(a, b, n);
    printf("Inner product result: %lf \n", c);
    return 0;
}

double inner_product(const double *a, const double *b, int n){
    double result=0;
    double const *l = a, *r = b;
    while (l < a + n && r < b + n){
        result += *l * *r;
        l++; r++;
    }
    return result;    
}
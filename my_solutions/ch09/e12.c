/*
Write the following function:
double inner_product (double a[], double b[], int n);
The function should return a [0] * b [0] +a[l] * b [1] + ... + a [n-1] *b[n-l].
*/

#include <stdio.h>
#define N 5

double inner_product (double a[], double b[], int n);

int main(void) {
    double a[N] = {1.0, 2.5, 3.4, 4.1, 5.8};
    double b[N] = {4.2, 3.5, 1.2, 8.1, 10.8};
    int n = N;

    printf("Array a: ");
    for (int i = 0; i < N; i++) {
        printf("%g ", a[i]);
    }
    printf("\nArray b: ");
    for (int i = 0; i < N; i++) {
        printf("%g ", b[i]);
    }
    printf("\nInner Product: %.2g\n", inner_product(a, b, n));
    return 0;
}

double inner_product (double a[], double b[], int n){
    double product = 0;
    for (int i = 0; i < n; i++){
        product += a[i] * b[i];
    }
    return product;
}

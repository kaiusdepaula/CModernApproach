/*
The following function supposedly computes the sum and average of the numbers in the
array a. which has length n. avg and sum point to variables that the function should mod¬
ify. Unfortunately, the function contains several errors; find and correct them.
*/


#include <stdio.h>
void avg_sum(double a[], int n, double *avg, double *sum);

int main(void) {
    double a[] = {0.1, 2.9, 10.0};
    int n = 3;
    double avg=0, sum=0;

    avg_sum(a, n, &avg, &sum);
    printf("Average: %f", avg);
    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += a[i];
    }
    *avg = *sum / n;
}
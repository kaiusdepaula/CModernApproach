/*
Write functions that return the following values. (Assume that a and n are parameters,
where a is an array of int values and n is the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
*/

#include <stdio.h>

int max(int a[], int n);
float avg(int a[], int n);
int positive_nums(int a[], int n);

int main(void) {
    int a[10] = {-3, 7, 14, 8, -12, 9, 0, -1, -3, 4};

    printf("Array: ");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d ", a[i]);
    }
    printf("\nLargest element: %d", max(a, 10));
    printf("\nAverage: %f", avg(a, 10));
    printf("\nPositive Count: %d\n", positive_nums(a, 10));
    return 0;
}

int max(int a[], int n){
    int maximum =  a[0];
    for (int i = 1; i < n; i++) {
        maximum = a[i] >=  maximum ? a[i] : maximum;
    }
    return maximum;
}
float avg(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum+= a[i];
    }
    return (float) sum / n;
}
int positive_nums(int a[], int n){
    int pos_count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0){
            pos_count++;
        }
    }
    return pos_count;
}

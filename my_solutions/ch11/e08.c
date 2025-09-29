/*
Write the following function:
int *find_largest(int a[], int n) ;
When passed an array a of length n. the function will return a pointer to the array’s largest
element.
*/
#include <stdio.h>

int *find_largest(int a[], int n);

int main(void){
    int a[] = {0, 19, 29, 39, 11, 44, 9, 13};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Largest element: %d\n", *find_largest(a, n));
    return 0;
}

int *find_largest(int a[], int n){
    int *largest = &a[0];

    for (int i = 1; i < n; i++){
        if (a[i] > *largest){
            largest = &a[i];
        }
    }
    return largest;
}

/*
Write the following function:
void find_two_largest(int a[], int n, int ‘largest, int *second_largest)

When passed an array a of length n. the function will search a for its largest and second-
largest elements, storing them in the variables pointed to by largest and
second_largest, respectively.
*/

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void){
    int a[] = {1, 2, 4, 5, 19, 2, 17};
    int n = sizeof(a) / sizeof(a[0]);
    int largest, second_largest;

    find_two_largest(a, n, &largest, &second_largest);

    printf("Largest: %d, second largest: %d\n", largest, second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    *largest = a[0];
    *second_largest = a[0]; // Ideally checking if the array is size >2 is best here.
    for (int i = 0; i < n; i++){
        if (a[i] > *second_largest){
            *second_largest = a[i];
            if (*second_largest > *largest){
                *second_largest = *largest;
                *largest = a[i];
            }
        }
    }
}
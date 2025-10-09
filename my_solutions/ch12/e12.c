/*
Write the following function:
void find_two_largest(const int *a, int n, int ‘largest, int *second_largest);
a points to an array of length n. The function searches the array for its largest and second-
largest elements, storing them in the variables pointed to by largest and
second_largest, respectively. Use pointer arithmetic—not subscripting—to visit array
elements.
*/

#include <stdio.h>
#define N 10

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void){
    int a[] = {1, 2, 4, 5, 19, 2, 17};
    int n = sizeof(a) / sizeof(a[0]);
    int largest, second_largest;

    find_two_largest(a, n, &largest, &second_largest);

    printf("Largest: %d, second largest: %d\n", largest, second_largest);
    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    *largest = *a;
    *second_largest = *a;
    
    for (int const *p = a; p < a + n; p++){
        if (*p > *second_largest){
            *second_largest = *p;
            if (*second_largest > *largest){
                *second_largest = *largest;
                *largest = *p;
            }
        }
    }
}
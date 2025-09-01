/*
Write a program that asks the user to enter a series of integers (which it stores in an array),
then sorts the integers by calling the function selection_sort. When given an array
with n elements, select ion_sort must do the following:
1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first n - 1 elements of the array.
*/

#include <stdio.h>

void selection_sort(int a[], int n);

int main(void) {
    int a[30];
    int integer;

    printf("Enter integers (0 to stop): ");
    int i = 0;
    while (i < 30) {
        int integer;
        scanf("%d", &integer);

        if (integer == 0) break;  // stop early

        a[i] = integer;
        i++;
    }
    selection_sort(a, i);

    printf("Ordered list: ");
    for (int j = 0; j < i; j++){
        printf("%d ", a[j]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n) {
    if (n == 1) return;

    int max_idx = 0;
    for (int i = 1; i < n; i++){
        if (a[i] > a[max_idx]) {
            max_idx = i;
        }
    }
    //swap values on index
    int temp = a[max_idx];
    a[max_idx] = a[n - 1];
    a[n - 1] = temp;
    
    selection_sort(a, n-1);
}
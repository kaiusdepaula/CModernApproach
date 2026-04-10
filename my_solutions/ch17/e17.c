/*
Let a be an array of 100 integers. Write a call of qsort that sorts only the last 50 elements
in a. (You don't need to write the comparison function).
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int main(void){
    int array[100] = {};
    qsort(array + 50, 50, sizeof(int), compare);
    return 0;
}
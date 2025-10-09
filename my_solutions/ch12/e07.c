/*
Write the following function:
bool search(const int a[], int n, int key);
a is an array to be searched, n is the number of elements in the array, and key is the search
key. search should return true if key matches some element of a. and false if it
doesn’t. Use pointer arithmetic—not subscripting—to visit array elements.
*/

#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void){
    int a[] = {1, 3, 19, 22};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Key %s.\n", search(a, n, 10)? "found" : "not found");
    return 0;
}

bool search(const int a[], int n, int key){
    for (const int *p = &a[0]; p < a + n; p++){
        if (*p == key){
            return true;
        }
    }
    return false;
}
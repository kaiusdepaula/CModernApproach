/*
Section 8.2 had a program fragment in which two nested for loops initialized the array
ident lor use as an identity matrix. Rewrite this code, using a single pointer to step
through the array one element at a time. Hint: Since we won't be using row and col index
variables, it won't be easy to tell where to store I. Instead, we can use the fact that the first
element of the array should be 1. the next N elements should be 0. the next element should
be 1. and so forth. Use a variable to keep track of how many consecutive Os have been
stored: when the count reaches N. it’s time to store I
*/

#include <stdio.h>
void create_identity(int *a, int n);

int main(void){
    int n = 100, a[n][n];
    create_identity(&a[0][0], n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void create_identity(int *a, int n){
    int counter = 0;
    for (int *p = a; p < a + (n * n); p++){
        if (counter == 0 || counter == n+1){
            *p = 1;
            counter = 0;
        } else {
            *p = 0;
        }
        counter++;
    }
}

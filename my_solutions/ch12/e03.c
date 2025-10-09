/*
What will be the contents of the a array after the following statements are executed?
#define N 10
int a [N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p = &a[0], *q = &a[N-l], temp;
while (p < q) {
temp = *p;
*p++ = *q;
*q-- = temp;
}
*/

#include <stdio.h>
#define N 10
int main(void){
    int a [N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N-1], temp;
    while (p < q) {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
    for (int i = 0; i < N; i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
}

/*
The array is inversed. Temp stores the value that p points to, which starts at 1.
Using the *p++ operator is the same as using a[p++], but p on this case is a pointer
and not a scalar. So the ++ operator in its postfix form will first execute the 
operation then add 1 to the value of p. The opposite is happening in q.

The while loop is essentially going trough the beggining of the array (going forward) and the ending
(going backwards), swapping each entry until p is < q.
*/
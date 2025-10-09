/*
Suppose that a is a one-dimensional array and p is a pointer variable. Assuming that the
assignment p = a has just been performed, which of the following expressions are illegal
because of mismatched types? Of the remaining expressions, which are true (have a nonzero
value)?
(a) p == a [0]
(b) p == &a [0]
(c) *p == a [0]
(d) p [0] == a [0]
*/

#include <stdio.h>

int main(void){
    int a[3] = {1, 2, 3};
    int *p;
    p = a;
    //printf("a: %d ", p == a[0]); Compares pointer to integer.
    printf("b: %d ", p == &a[0]);
    printf("c: %d ", *p == a[0]);
    printf("d: %d\n", p[0] == a[0]);
    return 0;
}

/*
b) Comparing p with &a[0] after p=a is legal because we are comparing two pointers.
p = a initializes p with the first index of a, as a is the same as &a[0] == &*(a+0)
c) Is legal because we compare the values both pointers point to. The indirection operator
gets the value for the pointer, and the [] can be written as *(&a + idx).
d) Again, the [] is being used to indirectly call the indirection operator. This is legal.
*/
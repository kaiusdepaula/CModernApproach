/*
Suppose that the following declarations are in effect:
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[l], *q = &a [5] ;
(a) What is the value of * (p+3)?
(b) What is the value of * (q-3) ?
(c) What is the value of q - p?
(d) Is the condition p < q true or false?
(e) Is the condition *p < *q true or false?
*/

#include <stdio.h>

int main(void){

    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a [5] ;
    printf("a: %d\n", * (p + 3));
    printf("b: %d\n", * (p - 3));
    printf("c: %d\n", q - p);
    printf("d: %d\n", p < q);
    printf("e: %d\n", *p < *q);
    return 0;
}

/*
a) It's 14 because p points to a address of the value 15, by adding 3 to the pointer,
we add 3 * 4 bytes (the size of an integer on my system) to the address it points to, resulting in 14.
b) It's undefined. p points to the second value of an array, subtracting 3 positions from it would result
in an address space prior to the creation of the array.
c) Pointer subtraction makes a lot of sense in a same array, as one is created sequentially, one address minus another
is the difference of distance between both. In this case is 4, b/c 5 - 1 = 4. 
d) 1. As the address of a latter element on an array is bigger than the previous.
e) 0. The element on the index 1 of the array is 15 which is bigger than 2 at index 5.
*/
/*
Write the following function:
void swap(int *p, int *q) ;
When passed the addresses of two variables, swap should exchange the values of the vari¬
ables:
swap(&i, &j); /* exchanges values of i and j 
*/

#include <stdio.h>

void swap(int *p, int *q);

int main(void){
    int p=2, q=1;
    swap(&p, &q);
    printf("p:%d q:%d\n", p, q);
    return 0;
}

void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
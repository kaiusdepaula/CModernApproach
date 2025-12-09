/*
True or false: If x is a structure and a is a member of that structure, then (&x)->a is the
same as x.a. Justify your answer.
It's the same. If we apply the deference operator to a struct pointer, we can access it's members through
the operator `->` whereas if we have a struct, accessing it's members is done by simply using . 
*/

#include <stdio.h>

int main(void){
    struct {int a;} x = {.a=42};
    printf("%d\n", x.a);
    printf("%d\n", (&x)->a);
    printf("These are the same.");
    return 0;
}
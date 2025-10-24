/*
The following function supposedly creates an identical copy of a string. What's wrong with
the function?
char *duplicate(const char *p) { 
    char *q;
    strcpy(q, p);
    return q;
}

A: the function declares a simple pointer without
initializing size or even null terminating the value the pointer
should be pointing towards. In that case, the result is undefined
or even won't compile as strcpy might expected a null terminated
array. To fix it, we can either pass a pointer to a initialized
array before the function execution or return a pointer to an array
initialized inside the function.
*/

#include <stdio.h>

int main(void){

    return 0;
}
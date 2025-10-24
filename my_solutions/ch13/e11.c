/*
The Q&A section at the end of this chapter shows how the strcmp function might be writ¬
ten using array subscripting. Modify the function to use pointer arithmetic instead.
*/

#include <stdio.h>
int strcmp(char *s, char *t);

int main(void){

    return 0;
}

int strcmp(char *s, char *t) {
    for (; *s == *t; s++, t++){
        if (*s == '\0'){
            return 0;
        }
    }
    return *s - *t;
}
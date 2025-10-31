/*
C99) C programmers often use the f printf function to write error messages 
fprintf (stderr, "Range error: index = %d\n", index);
stderr is C's “standard error" stream: the remaining arguments are the same as those for
printf, starting with the format string. Write a macro named ERROR that generates the
call of fprintf shown above when given a format string and the items to be displayed:
ERROR("Range error: index = %d\n", index);
*/

#include <stdio.h>

#define ERROR(s, ...) fprintf(stderr, s, __VA_ARGS__)

int main(void){
    int index = 12;
    ERROR("Range error: index = %d\n", index);
    return 1;
}
/*
Suppose that p has been declared as follows:
char *p = "abc";
Which of the following function calls are legal? Show the output produced by each legal
call, and explain why the others are illegal.
(a) putchar(p);
(b) putchar(*p);
(c) puts (p) ;
(d) puts(*p) ;
*/

#include <stdio.h>

int main(void){
    char *p = "abc";

    // putchar(p); this is illegal. putchar expects a char, not a pointer.;
    putchar(*p);
    puts(p);
    // puts(*p); puts expect a string or a pointer to a char that terminates with null terminator.
    return 0;
}
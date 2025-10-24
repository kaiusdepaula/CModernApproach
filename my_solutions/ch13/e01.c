/*
The following function calls supposedly write a single new-line character, but some are
incorrect. Identify which calls don’t work and explain why.
(a) printf ("%c",
(b) printf ("%c" ,
(c) printf ( "%s",
(d) printf ( "%s" ,
(e) printf (’ \n‘ ) ;
(f) printf("\n");
' \n' ) ; (g) putchar ( ' \n' ) ;
"\n") ; (h) putchar ("\n") ;
' \n*) ; (i) puts (• \n') ;
"\n"); 0) puts("\n"); (k) puts (" ") ;
*/

#include <stdio.h>

int main(void){
    // a
    printf("%c", '\n');
    // b
    // printf("%c", "\n"); GCC without the Wall flag won't raise errors about this one, but
    // this is definitively wrong. We can't pass a pointer to the %c as it expects a char.
    // c
    // printf("%s", 'n'); %s expects a string type. When passed as such, it would look for the
    // value that 'n' represents and it would make no sense to do as such.
    // d
    printf("%s", "s");
    // e
    // printf('\n'); printf expects a pointer or a named array (which is a pointer)
    // f
    printf("\n");
    // g
    putchar('\n');
    // h
    // putchar("\n"); putchar expects a value, not a pointer.
    // i
    // puts('n'); same reason as line 28.
    // j
    puts("n");
    // k
    puts("");

    return 0;
}
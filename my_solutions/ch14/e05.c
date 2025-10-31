/*
Let TOUPPER be the following macro:
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
Let s be a siring and let i be an int variable. Show the output produced by each of the fol¬
lowing program fragments.
(a) strcpy(s, "abed");
i = 0;
putchar(TOUPPER(s[ + + i] ) ) ;
(b) strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i] )) ;
*/

#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void){
    char s[10];
    strcpy(s, "abed");
    int i = 0;
    printf("a) ");
    putchar(TOUPPER(s[++i]));
    printf("\n");

    strcpy(s, "0123");
    i = 0;
    printf("b) ");
    putchar(TOUPPER(s[++i]));
    printf("\n");

    return 0;
}

/*
Quick comment: using ++ operator inside a macro will result in undefined behavior
as the char reference inside the string will constantly increase everytime it's called.
eg:
the string "abed" will pass a[0] = 'a' as reference to the function.
('a'<=(c[i])&&(c[i+1])<='z'?(c[i+2])-'a'+'A':(c[i+3]))
on this case, the resulting value will be D as c[4] = d and the expression turns it into 'D'
*/
/*
Show what the following program will look like after preprocessing. You may ignore
any lines added to the program as a result of including the <stdio.h> header.
#include <stdio.h>
#define N 100
void f(void);
int main(void)
{
f 0 ;
#ifdef N
#undef N
#endif
return 0;
}
void f(void)
{
#if defined(N)
printf("N is %d\n", N);
#else
printfC'N is undef ined\n" ) ;
#endif
}
(b) What will be the output of this program?
The preprocessor will undefine N before its tested by the function. The result will be
the printf inside the function scope and the preprocessor will basically remove every reference to N.
*/

#include <stdio.h>
#define N 100

int main(void) {
    printf("N is undefined\n");
    return 0;
}
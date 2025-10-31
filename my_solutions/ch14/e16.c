/*
(C99) Assume that the following macro definitions are in effect:
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
What will the following line look like after macro expansion?
IDENT(foo)
*/

#include <stdio.h>
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void){
    IDENT(foo); // expands to _Pragma("ident \"foo\"")
    return 0;
}
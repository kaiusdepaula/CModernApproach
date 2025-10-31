/*
Let GENERIC MAX be the following macro:
#define GENERICMAX(type) \
type type##_max(type x, type y) \
{ \
return x > y ? x : y; \
(a) Show the preprocessor's expansion of GENERIC_MAX (long).
(b) Explain why GENERIC_MAX doesn’t work for basic types such as unsigned long.
(c) Describe a technique that would allow us to use GENER I C_MAX with basic types such
as unsigned long. Hint: Don't change the definition of GENERIC MAX
*/

#include <stdio.h>

#define GENERICMAX(type) \
        type type##_max(type x, type y) \
        { \
        return x > y ? x : y; \
        }

int main(void){

    return 0;
}

/*
a) For example, for int:
GENERICMAX(int) -> 
int int_max(int x, int y) {
    return x > y ? x : y;
}
b) The issue is that identifiers (function names) can’t contain spaces or certain punctuation.
c) We could use typedef to create the type name into a single identifier, such as:
typedef unsigned long ulong;
GENERICMAX(ulong)
*/
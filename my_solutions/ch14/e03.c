/*
Let DOUBLE be the following macro:
#define DOUBLE(x) 2*x
(a) What is the value of DOUBLE (1+2) ? 
The prepocessor translates this to 2*1+2. As the product operation
takes precedence over the sum, 2 * 2 = 4
(b) What is the value of 4 /DOUBLE (2) ?
The expression becomes 4 / 2 * 2. The compiler will mess up the order of this expression
the way to fix this is enclose x on the macro definition with ().
(c) Fix the definition of DOUBLE
*/

#include <stdio.h>
#define DOUBLE(x) (2*(x))

int main(void){
    printf("%d\n", DOUBLE(1+2));
    printf("%d\n", 4 / DOUBLE(2));
    return 0;
}
/*
Suppose that the macro M has been defined as follows:
#define M 10
Which of the following tests will fail?
(a) #if M (V)
(b) #ifdef M (V)
(c) #ifndef M (X)
(d) #if defined (M) (V)
(e) #if !defined(M) (X)
*/
#include <stdio.h>
#define M 10
int main(void){
    #if M
        printf("Test a success.\n");
    #endif

    #ifdef M
        printf("Test b success.\n");
    #endif

    #ifndef M
        printf("Test c success\n");
    #endif

    #if defined(M)
        printf("Test d sucess.\n");
    #endif

    #if !defined(M)
        printf("Test e sucess.\n")
    #endif
    return 0;
}

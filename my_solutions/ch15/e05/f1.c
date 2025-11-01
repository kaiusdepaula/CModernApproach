#include <stdio.h>
#include "f1.h"
#include "f2.h"

// a change
int foo(int x){
    printf("Hello from %s\n", __FILE__);
    return boo(x);
}
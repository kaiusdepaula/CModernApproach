#include <stdio.h>
#include "f1.h"
#include "f2.h"

int boo(int x){
    printf("Hello from %s\n", __FILE__);
    return x;
}
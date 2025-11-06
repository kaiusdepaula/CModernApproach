/*
In the following declarations, the x and y sUuctures have members named x and y:
struct { int x, y; x;
struct { int x, y; y;
Are these declarations legal on an individual basis? Could both declarations appear as
shown in a program? Justify your answer.

Yeah, so both of those declarations are totally fine.

Each line creates its own anonymous struct type, meaning:
struct { int x, y; } x; // defines one struct type and a variable x
struct { int x, y; } y; // defines another struct type and a variable y
Even though they look the same, they’re considered different types internally.
The only catch is that since the types are distinct, you can’t assign one to the other,
like x = y; — that would give you a type error.

So yeah, they both compile and work fine together, 
but they’re separate “versions” of the same-looking struct.
*/

#include <stdio.h>

int main(void){
    struct {int x, y;} x;
    struct {int x, y;} y;
    x.x = 1;
    x.y = 2;
    y.x = 3;
    y.y = 4;

    printf("From struct x: %d, %d", x.x, x.y);
    printf("From stuct y: %d, %d", y.x, y.y);
    return 0;
}
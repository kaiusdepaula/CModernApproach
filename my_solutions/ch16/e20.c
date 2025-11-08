/*
Suppose that the direction variable is declared in the following way:
enum {NORTH, SOUTH, EAST, WEST} direction;
Let x and y be int variables. Write a switch statement that tests the value of direc¬
tion. incrementing x if direction is EAST, decrementing x if direction is WEST,
incrementing y if direction is SOUTH, and decrementing y if direction is NORTH
*/

#include <stdio.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void){
    int x = 1, y = 2;
    direction = EAST;
    switch (direction) {
        case NORTH:
            y--;
            break;
        case SOUTH:
            y++;
            break;
        case EAST:
            x++;
            break;
        case WEST:
            x--;
            break;
        default:
            break;
    }
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
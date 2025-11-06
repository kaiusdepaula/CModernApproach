/*
Let color be the following structure:
struct color {
int red;
int green;
int blue;
};
(a) Write a declaration for a const variable named MAGENTA of type struct color
whose members have the values 255, 0. and 255. respectively.
(b) (C99) Repeat pan (a), but use a designated initializer that doesn't specify the value of
green, allowing it to default to 0.
*/

#include <stdio.h>

struct color {
    int red;
    int green;
    int blue;
};

int main(void){
    struct color magenta = {
        .red = 255, 
        .green = 0, 
        .blue=255
    };
    struct color red = {255};

    printf("a) Red: %d, Green: %d, Blue: %d\n", magenta.red, magenta.green, magenta.blue);
    printf("b) Red: %d, Green: %d, Blue: %d\n", red.red, red.green, red.blue);
    return 0;
}
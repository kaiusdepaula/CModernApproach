/*
For each of the following macros, give an example that illustrates a problem with the macro
and show how to fix it.
(a) #define AVG(x,y) (x-y)/2
The values for x and y should be enclosed with parenthesis. Any expression that may change the value
of x or y using expressions will result on undefined behaviors.
(b) #define AREA (x, y) (x) * (y)
If I read the book correctly, there is a space between the macro name and the arguments. 
We can fix the macro by removing this space. Macro function definitions wont be able to replace the
arguments that come before their definitions without doing such.
*/

#include <stdio.h>
#define AVG(x, y) (((x) - (y)) / 2)
#define AREA(x, y) (x) * (y)

int main(void){
    printf("%d", AREA(2, 2));
    return 0;
}
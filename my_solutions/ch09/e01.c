/*
Hie following function, which computes the area of a triangle, contains two errors. Locate
the errors and show how to fix them. {Hint: There are no errors in the formula.)
double triangle_area(double base, height)
double product
{
product = base * height;
return product / 2;
}
*/

#include <stdio.h>
double triangle_area(double base, double height);

int main(void) {
    printf("Area of a triangle of base 3 and height 5: %f\n", triangle_area(3, 5));
    return 0;
}

double triangle_area(double base, double height) {
    double product = base * height;
    return product / 2;
};
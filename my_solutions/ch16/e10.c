/*
The following structures are designed to store information about objects on a graphics
screen:
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
A point structure stores the x and y coordinates of a point on the screen. A rectangle
stniclure stores the coordinates of the upper left and lower right corners of a rectangle. Write
functions that perform the following operations on a rectangle structure r passed as an
argument:
(a) Compute the area of r.
(b) Compute the center of r. returning it as a point value. If either the x or y coordinate of
the center isn't an integer, store its truncated value in the point structure.
(c) Move r by x units in the x direction and y units in the y direction, returning the modi¬
fied version of r. (x and y are additional arguments to the function.)
(d) Determine whether a point p lies within r. returning true or false, (p is an addi¬
tional argument of type struct point.)
*/

/*Quick note:
Pixels are drawn from top left to bottom right and they go from (0,0).
I'll save rectangles based on this concept.
*/

#include <stdio.h>
#include <stdbool.h>

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int r_area(struct rectangle r);
struct point r_center(struct rectangle r);
struct rectangle r_move(struct rectangle r, int by_x, int by_y);
bool r_isin(struct rectangle r, struct point p);

int main(void){
    struct rectangle rect = {
        .upper_left = {10, 10},
        .lower_right = {20, 20}
    };
    int by_x = 10, by_y = 5;
    printf("Calculated area: %d\n", r_area(rect));
    struct point center = r_center(rect);
    printf("Center point: (%d, %d)\n", center.x, center.y);
    printf(
        "Moving rect ((%d,%d), (%d,%d)) x=%d and y=%d\n",
        rect.upper_left.x, rect.upper_left.y, rect.lower_right.x, rect.lower_right.y,
        by_x, by_y 
    );
    struct point random_point = {11, 19};
    printf(
        "Is the point (%d,%d) inside the rect? %s\n", 
        random_point.x, random_point.y,
        r_isin(rect, random_point)? "Yes." : "No."
    );
    rect = r_move(rect, by_x, by_y);
    printf(
        "Rect moved to ((%d,%d), (%d,%d))\n",
        rect.upper_left.x, rect.upper_left.y, rect.lower_right.x, rect.lower_right.y
    );

    return 0;
}
int r_area(struct rectangle r){
    int width = r.lower_right.x - r.upper_left.x;
    int height = r.lower_right.y - r.upper_left.y;
    return width * height;
}
struct point r_center(struct rectangle r){
    int x = (r.upper_left.x + r.lower_right.x) / 2;
    int y = (r.upper_left.y + r.lower_right.y) / 2;
    return (struct point){x, y};
}

struct rectangle r_move(struct rectangle r, int by_x, int by_y){
    return (struct rectangle) {
        .upper_left = {
            .x = r.upper_left.x + by_x,
            .y = r.upper_left.y + by_y
        },
        .lower_right = {
            .x = r.lower_right.x + by_x,
            .y = r.lower_right.y + by_y
        }
    };
}
bool r_isin(struct rectangle r, struct point p){
    if(
        r.upper_left.x <= p.x && p.x <= r.lower_right.x &&
        r.upper_left.y <= p.y && p.y <= r.lower_right.y
    ) return true;
    return false;
}
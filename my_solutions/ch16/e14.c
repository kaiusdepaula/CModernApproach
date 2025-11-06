/*
Let shape be the structure tag declared in Exercise 13. Write functions that perform the
following operations on a shape structure s passed as an argument:
(a) Compute the area of s.
(b) Move s by x units in the a- direction and y units in the y direction, returning the modi¬
fied version of s. (x and y are additional arguments to the function.)
(c) Scale s by a factor of c (a double value), returning the modified version of s. (c is an
additional argument to the function.)
*/

#include <stdio.h>
#include <math.h>

struct point {
    int x, y;
};

struct shape {
    int shape_kind; /* RECTANGLE or CIRCLE */
    struct point center; /* coordinates of center */
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
};

int compute_area(struct shape s);
struct shape move_by(struct shape s, int byx, int byy);
struct shape scale_by(struct shape s, double c);

int main(void) {
    /* Rectangle centered at (10, 10), width=8, height=5 */
    struct shape rect = {
        .shape_kind = 0,
        .center = {10, 10},
        .u.rectangle = {5, 8}
    };

    /* Circle centered at (5, 5), radius=3 */
    struct shape circ = {
        .shape_kind = 1,
        .center = {5, 5},
        .u.circle = {3}
    };

    printf("=== RECTANGLE ===\n");
    printf("Initial center: (%d, %d)\n", rect.center.x, rect.center.y);
    printf("Area: %d\n", compute_area(rect));

    rect = move_by(rect, 3, -2);
    printf("Moved center: (%d, %d)\n", rect.center.x, rect.center.y);

    rect = scale_by(rect, 1.5);
    printf("Scaled height: %d, width: %d\n", rect.u.rectangle.height, rect.u.rectangle.width);
    printf("New area: %d\n\n", compute_area(rect));

    printf("=== CIRCLE ===\n");
    printf("Initial center: (%d, %d)\n", circ.center.x, circ.center.y);
    printf("Area: %d\n", compute_area(circ));

    circ = move_by(circ, -2, 4);
    printf("Moved center: (%d, %d)\n", circ.center.x, circ.center.y);

    circ = scale_by(circ, 2.0);
    printf("Scaled radius: %d\n", circ.u.circle.radius);
    printf("New area: %d\n", compute_area(circ));

    return 0;
}
int compute_area(struct shape s){
    if (s.shape_kind == 0){
        return s.u.rectangle.height * s.u.rectangle.width;
    } else {
        return 3.14 * s.u.circle.radius * s.u.circle.radius;
    }
}
struct shape move_by(struct shape s, int byx, int byy){
    s.center.x += byx;
    s.center.y += byy;
    return s;
}
struct shape scale_by(struct shape s, double c){
    if (s.shape_kind == 0){
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    } else {
        s.u.circle.radius *= c;
    }
    return s;
}
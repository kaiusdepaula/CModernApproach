/*
Suppose that s is the following structure (point is a structure tag declared in Exercise 10):
If the value of shape kind is RECTANGLE, the height and width members store the
dimensions of a rectangle. If the value of shape kind is CIRCLE, the radius member
stores the radius of a circle. Indicate which of the following statements are legal, and show
how to repair the ones that aren't:
(a) s.shape_kind = RECTANGLE ;
Illegal. It could be legal, if a ENUM was declared.

enum { RECTANGLE, CIRCLE };
s.shape_kind = RECTANGLE;
Or with macros.

(b) s.center.x = 10;
Legal.
(c) s.height = 25; 
Illegal. height is not a direct member of s; it’s inside the nested union
s.u.rectangle.height = 25;

(d) s.u.rectangle.width = 8;
Legal.

(e) s.u.circle = 5;
Illegal. The expression is missing a .radius on declaration.
s.u.circle.radius = 5;

(f) s.u.radius = 5;
Illegal. There is no member radius directly inside the union u.
s.u.circle.radius = 5;

*/

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
} s;

int main(void){
    return 0;
}
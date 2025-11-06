/*
Write the following functions. (The color structure is defined in Exercise 8.)
(a) struct color make_color(int red, int green, int blue);
Returns a color stmcture containing the specified red. green, and blue values. If any argu¬
ment is less than zero, the corresponding member of the structure will contain zero instead.
If any argument is greater than 255. the corresponding member of the structure will contain
255.
(b) int getRed(struct color c);
Returns the value of c’s red member.
(c) bool equal_color(struct color colorl, struct color color2);
Returns true if the corresponding members of colorl and color2 are equal.
(d) struct color brighter(struct color c);
Returns a color structure that represents a brighter version of the color c. The structure is
identical to c. except that each member has been divided by 0.7 (with the result truncated to
an integer). However, there are three special cases: (1) If all members of c are zero, the
function returns a color whose members all have the value 3. (2) If any member of c is
greater than 0 but less than 3. it is replaced by 3 before the division by 0.7. (3) If dividing by
0.7 causes a member to exceed 255, it is reduced to 255.
(e) struct color darker (struct color c) ;
Returns a color structure that represents a darker version of the color c. The structure is
identical to c. except that each member has been multiplied by 0.7 (with the result truncated
to an integer).
*/

#include <stdio.h>
#include <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color *c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void){
    struct color c1, c2;

    c1 = make_color(255, 209, 240);
    c2 = make_color(1, 250, 33);

    printf("Red from c1: %d\n", getRed(&c1));
    printf("Are c1 and c2 the same? %s\n", equal_color(c1, c2) ? "Yes." : "No.");
    printf("Are c1 and c1 the same? %s\n", equal_color(c1, c1) ? "Yes." : "No.");
    
    c2 = brighter(c1);
    printf(
        "C1(%d,%d,%d), but brighter: (%d,%d,%d)\n", 
        c1.red, c1.green, c2.blue,
        c2.red, c2.green, c2.blue
    );
    c2 = darker(c1);
    printf(
        "C1(%d,%d,%d), but darker: (%d,%d,%d)\n", 
        c1.red, c1.green, c2.blue,
        c2.red, c2.green, c2.blue
    );
    return 0;
}

struct color make_color(int red, int green, int blue){
    struct color temp = {
       .red = red,
       .green = green,
       .blue = blue, 
    };
    return temp;
}

int getRed(struct color *c){
    return c->red;
}
bool equal_color(struct color color1, struct color color2){
    return (
        color1.red == color2.red &&
        color1.green == color2.green &&
        color1.blue == color2.blue
    ) ? true : false;
}
struct color brighter(struct color c){
    if(c.red == 0 && c.green == 0 && c.blue == 0){
        c.red = c.green = c.blue = 3;
        return c;
    }
    c.red = (c.red > 0 && c.red < 3) ? 3 / 0.7 : c.red / 0.7;
    c.green = (c.green > 0 && c.green < 3) ? 3 / 0.7 : c.green / 0.7;
    c.blue = (c.blue > 0 && c.blue < 3) ? 3 / 0.7 : c.blue / 0.7;

    c.red = c.red > 256 ? 256 : c.red;
    c.green = c.green > 256 ? 256 : c.green;
    c.blue = c.blue > 256 ? 256 : c.blue;
    return c;

}
struct color darker(struct color c){
    if(c.red == 0 && c.green == 0 && c.blue == 0){
        c.red = c.green = c.blue = 3;
        return c;
    }
    c.red = (c.red > 0 && c.red < 3) ? 3 * 0.7 : c.red * 0.7;
    c.green = (c.green > 0 && c.green < 3) ? 3 * 0.7 : c.green * 0.7;
    c.blue = (c.blue > 0 && c.blue < 3) ? 3 * 0.7 : c.blue * 0.7;

    c.red = c.red < 0 ? 0 : c.red;
    c.green = c.green < 0 ? 0 : c.green;
    c.blue = c.blue < 0 ? 0 : c.blue;
    return c;
}
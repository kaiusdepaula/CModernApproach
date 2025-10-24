/*
Let f be the following function:
int f(char *s, char *t)
{
char *pl, *p2;
for (pi = s; *pl; pl++) {
for (p2 = t; *p2; p2++)
if (*pl == *p2) break;
^ if (*p2 == '\0') break;
return pi - s;
}
(a) What is the value of f ("abed", "babe")?
(b) What is the value off ("abed", "bed")?
(c) In general, what value does f return when passed two strings s and t?
Number of consecutive starting characters of s that can be found in t.
*/

#include <stdio.h>
int f(char *s, char *t);

int main(void){
    printf("a) %d\n", f("abed", "babe"));
    printf("b) %d\n", f("abed", "bed"));
    return 0;
}

int f(char *s, char *t){
    char *p1, *p2;

    for(p1 = s; *p1; p1++){
        for(p2 = t; *p2; p2++){
            if (*p1 == *p2){
                break; // if letter is found, this break will garantee the outer loop will execute.
            }
        }
        if (*p2 == '\0') break;
    }
    return p1 - s;
}

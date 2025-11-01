/*
The following questions refer to the program described in Exercise 5.
(a) Which files need to be compiled when the program is built for the first time?
A: f1.c f2.c and main.c

(b) If f1.c is changed after the program has been built, which files need to be recompiled?
A: Only f1.c

(c) If f 1.h is changed after the program has been built, which files need to be recompiled?
A: main.c and f1.c but probably because I used a function from f1 in those files.

(d) If f 2.h is changed after the program has been built, which files need to be recompiled?
A: Only f2.c
*/

int main(void){
    return 0;
}
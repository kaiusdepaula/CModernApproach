/*
Use the techniques of Section 13.6 to condense the count spaces function of Section
13.4. In particular, replace the for statement by a while loop.
*/

#include <stdio.h>
int count_spaces(const char *s);

int main(void){

    return 0;
}

int count_spaces(const char *s) {
    int count = 0;
    while (*s){
        if (*s == ' ') {
            count++;
        }
        s++;
    }
    return count;
}
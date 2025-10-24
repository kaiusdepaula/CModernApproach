/*
Suppose that we call scanf as follows:
scanf("%d%s%d", &i, s, & j) ;
If the user enters 12abc34 56def78, what will be the values of i, s, and j after the
call? (Assume that i and j are int variables and s is an array of characters.)
*/

#include <stdio.h>

int main(void){
    char s[100];
    int i, j;
    scanf("%d%s%d", &i, s, &j);
    printf("i: %d, s: %s, j: %d", i, s, j);
    return 0;
}

// i: 12, s: abc35, j: 56
// scanf saves 12 as integer as the next "token" is a char.
// then, saves abc35 as string, as it stops on the empty char.
// Finally, takes 56 as number for the same reason as 12.
// The rest of the input will remain on stdin buffer.
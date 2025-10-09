/*
Simplify Programming Project 1(b) by taking advantage of the fact that an array name can
be used as a pointer.
*/

#include <stdio.h>
#define N 100

int main(void){
    char message[N], c;
    char *pos = message;

    printf("Enter a message: ");
    while((c = getchar()) != '\n' && pos < message + N){
        *pos++ = c;
    }
    while (--pos >= message) {
        printf("%c", *pos);
    }
    printf("\n");
    return 0;
}
/*
a) Write a function named capitalize that capitalizes all letters in its argument. The
argument will be a null-terminated string containing arbitrary characters, not just letters.
Use array subscripting to access the characters in the string. Hint: Use the toupper func¬
tion to convert each character to upper-case.
(b) Rewrite the capitalize function, this time using pointer arithmetic to access the
characters in the string
*/

#include <stdio.h>
#include <ctype.h>
#define N 100

void capitalize(char input[], int n);
int main(void){
    int n = N;
    char phrase[N] = "A random phrase 1 is something to be pr0ud of.";
    capitalize(phrase, n);
    printf("%s\n", phrase);
    return 0;
}

void capitalize(char input[], int n){
   while(*input++ != '\0') {
        if (isalpha(*input)) {
            *input = toupper(*input);
        }
    }
}
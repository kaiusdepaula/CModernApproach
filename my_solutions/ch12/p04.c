/*
Simplify Programming Project 2(b) by taking advantage of the fact that an array name can
be used as a pointer.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_palindrome(char *start, char *end);
#define N 100

int main(void){
    char message[N], c;
    char *end_pos = message;

    printf("Enter a message: ");
    while((c = getchar()) != '\n' && end_pos < message + N){
        if (isalpha(c)){
            *end_pos++ = tolower(c);
        }
    }
    printf("%salindrome.\n", is_palindrome(message, end_pos - 1)? "P": "Not p");
}

bool is_palindrome(char *start, char *end){
    while(start < end){
        if (*start != *end){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
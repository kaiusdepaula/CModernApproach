/*
Modify Programming Project 2 from Chapter 12 so that it includes the following function:
bool is_palindrome(const char ‘message);
The function returns true if the string pointed to by message is a palindrome.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char *message);
#define N 100

int main(void){
    char message[N], c;

    printf("Enter a message: ");
    fgets(message, N, stdin);
    message[strcspn(message, "\n")] = '\0';

    printf("%salindrome.\n", is_palindrome(message)? "P": "Not p");
}

bool is_palindrome(char *message){
    char *p = message;
    while(*p) p++;
    p--;

    while(p > message){
        if (*p != *message){
            return false;
        }
        message++;
        p--;
    }
    return true;
}
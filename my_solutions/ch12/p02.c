/*
a) Write a program that reads a message, then checks whether it’s a palindrome (the letters
in the message are the same from left to right as from right to left):
Enter a message: He lived as a devil, eh?
Palindrome
Enter a message: Madam, I am Adam,
Not a palindrome
Ignore all characters that aren’t letters. Use integer variables to keep track of positions in the
array.
(b) Revise the program to use pointers instead of integers to keep track of positions in the
array.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_palindrome(char *start, char *end);
#define N 100

int main(void){
    char message[N], c;
    char *end_pos = &message[0];

    printf("Enter a message: ");
    while((c = getchar()) != '\n' && end_pos < message + N){
        if (isalpha(c)){
            *end_pos = tolower(c);
            end_pos++; 
        }
    }
    printf("%salindrome.\n", is_palindrome(&message[0], end_pos - 1)? "P": "Not p");
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
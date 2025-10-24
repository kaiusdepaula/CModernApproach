/*
Modify the read_line function in each of the following ways:
(a) Have it skip white space before beginning to store input characters.
(b) Have it stop reading at the first white-space character. Hint: To determine whether or
not a character is white space, call the is space function
c) Have it stop reading at the first new-line character, then store the new-line character in
the string.
(d) Have it leave behind characters that it doesn't have room to store.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int read_line(char str[], int n);

int main(void){
    
    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;
    bool begin = true;
    while ((ch = getchar()) != EOF) {
        if (begin && isspace(ch) && ch != '\n'){
            continue;
        }
        if (begin) {
            begin = false;
        } 
        
        if (ch == '\n'){
            if (i  < n - 1) {
                str[i++] = '\n';
            }
            break;
        } 
        if (isspace(ch)){
            break;
        }
        if (i < n - 1){
            str[i++] = ch;
        }
    } 

    str[i] = '\0';
    return i; /* number of characters stored */
}
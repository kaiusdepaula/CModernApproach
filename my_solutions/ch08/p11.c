/*
Modify Programming Project 4 from Chapter 7 so that the program labels its output:
Enter phone number: 1-800-CQL-LECT
In numeric form: 1-800-265-5328
The program will need to store the phone number (cither in its original form or in its
numeric form) in an array of characters until it can be printed. You may assume that the
phone number is no more than 15 characters long
*/

#include <stdio.h>

int main(void){
    char c, telephone[15];
    printf("Enter a phone number: ");

    for (int i = 0; i < 15; i++) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        switch (c)
        {
        case 'A': case 'B': case 'C':
            telephone[i] = '2';
            break;
        case 'D': case 'E': case 'F':
            telephone[i] = '3';
            break;
        case 'G': case 'H': case 'I':
            telephone[i] = '4';
            break;
        case 'J': case 'K': case 'L':
            telephone[i] = '5';
            break;
        case 'M': case 'N': case 'O':
            telephone[i] = '6';
            break;
        case 'P': case 'Q': case 'R': case 'S':
            telephone[i] = '7';
            break;
        case 'T': case 'U': case 'V':
            telephone[i] = '8';
            break;
        case 'W': case 'X': case 'Y': case 'Z':
            telephone[i] = '9';
            break;
        default:
            telephone[i] = c;
            break;
        }
    }
    printf("In numeric form: ");
    for (int i = 0; i< 15; i++){
        printf("%c", telephone[i]);
    }
    printf("\n");
    return 0;
}
/*
The prototypical Internet newbie is a fellow named BIFF, who has a unique way of writing
messages. Here’s a typical BIFF communique.
H3Y DUD3, C 15 R1LLY COOL11!!11!11i
Write a “BIFF filter” that reads a message entered by the user and translates it into B1FF-
speak:
Enter message: Hey dude, C is rilly cool
In BIFF-speak: H3Y DUD3, C 15 RILLY CO0L tl1!!!I!!!
Your program should convert the message to upper-case letters, substitute digits for certain
letters (A-»4, B->8. E-»3,1—> 1. ()—>(), S-»5). and then append 10 or so exclamation marks.
Hint: Store the original message in an array of characters, then go back through the array,
translating and printing characters one by one.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c, message[100] = {""};
    int i;
    
	printf("Enter message: ");
    for (i = 0; (c = toupper(getchar())) != '\n'; i++) {
        switch (c)
        {
        case 'A':
            message[i] = '4';
            break;
        case 'B':
            message[i] = '8';
            break;
        case 'E':
            message[i] = '3';
            break;
        case 'I':
            message[i] = '1';
            break;
        case 'O':
            message[i] = '0';
            break;
        case 'S':
            message[i] = '5';
            break;
        default:
            message[i] = c;
            break;
        }    
    }
    message[i] = '\n';

	printf("In B1FF-speak: ");
    for (i = 0; message[i] != '\n'; i++) {
        printf("%c", message[i]);
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
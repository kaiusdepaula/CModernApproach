/*
Write a program that translates an alphabetic phone number into numeric form:
Enter phone number: CALLATT
2255288
(In case you don't have a telephone nearby, here arc the letters on the keys: 2=ABC, 3=DEF,
4=GHI, 5=JKL, 6=MNO, 7=PRS. 8=TUV. 9=WXY.) If the original phone number contains
nonalphabelic characters (digits or punctuation, for example), leave them unchanged:
Enter phone number: 1-800-CQL-LECT
1-800-265-5328
You may assume that any letters entered by the user are upper case.
*/
#include <stdio.h>

int main(void){
    char c;
    printf("Enter a phone number: ");

    while ((c = getchar()) != '\n') {
        switch (c)
        {
        case 'A': case 'B': case 'C':
            printf("2");
            break;
        case 'D': case 'E': case 'F':
            printf("3");
            break;
        case 'G': case 'H': case 'I':
            printf("4");
            break;
        case 'J': case 'K': case 'L':
            printf("5");
            break;
        case 'M': case 'N': case 'O':
            printf("6");
            break;
        case 'P': case 'Q': case 'R': case 'S':
            printf("7");
            break;
        case 'T': case 'U': case 'V':
            printf("8");
            break;
        case 'W': case 'X': case 'Y': case 'Z':
            printf("9");
            break;
        default:
            printf("%c", c);
            break;
        }
    }
    printf("\n");
    return 0;
}
/*
Modify Programming Project 5 from Chapter 7 so that it includes the following function:
int compute_scrabble_value(const char *word);
The function returns the SCRABBLE value of the siring pointed to by word.
*/

#include <stdio.h>
#include <ctype.h>
int compute_scrable_value(const char *word);

int main(void) {
    char word[20];
    int sum = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    sum = compute_scrable_value(word);
    printf("Scrabble value: %d\n", sum);
    return 0;
}

int compute_scrable_value(const char *word){
    int sum = 0;
    char c;
    while (*word) {
        c = toupper(*word);
        switch (c) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            default:
                break;
        }
        word++;
    }
    return sum;
}
/*
Modify Programming Project 14 from Chapter 8 so that it stores the words in a two-
dimensional char array as it reads the sentence, with each row of the array storing a sin¬
gle word. Assume that the sentence contains no more than 30 words and no word is more
than 20 characters long. Be sure to store a null character at the end of each word so that it
can be treated as a string.
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_WORDS 30
#define MAX_LETTERS 20

int main(void) {
    char c, sentence[MAX_WORDS][MAX_LETTERS + 1];
    printf("Enter a sentence: ");
    int word_pos = 0, letter_pos = 0;
    while ((c = getchar()) != '\n' && c != '.' && c != '?' && c != '!') {
        if (isspace(c)) {
            if (letter_pos > 0) {
                sentence[word_pos++][letter_pos] = '\0';
                letter_pos = 0;
                if (word_pos >= MAX_WORDS){
                    break;
                }
            }
        } else {
            if (letter_pos < MAX_LETTERS){
                sentence[word_pos][letter_pos++] = c;
            }
        }
    }
    sentence[word_pos][letter_pos] = '\0';
    printf("Reversal of sentence: ");
    for (int i = word_pos; i >= 0; i--) {
        printf("%s ", sentence[word_pos]);
    }
    printf("\n");
    return 0;
}
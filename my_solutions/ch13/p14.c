/*
Modify Programming Project 16 from Chapter 8 so that it includes die following function:
bool are_anagrams(const char *wordl, const char *word2);
The function returns true if the strings pointed to by wordl and word2 are anagrams.

NOTE: there will be a bug on this program as I'm trying to simply rewrite the p16.c from chapter 8.
If I really wanted something flawless, fget should be used to capture stdin from both words
or maybe using pointer arithmetic instead of indexing the array with a simple for loop.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_WORD 15

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
    char word1[MAX_WORD + 1], word2[MAX_WORD + 2];
    char c;
    int i;

    printf("Enter first word: ");
    for (i = 0; (c = getchar()) != '\n' && i < MAX_WORD; i++) {
        word1[i] = c;
    }
    word1[i] = '\0';

    printf("Enter second word: ");
    for (i = 0; (c = getchar()) != '\n' && i < MAX_WORD; i++) {
        word2[i] = c;
    }
    word2[i] = '\0';

    printf("The words are%s anagrams.\n", are_anagrams(word1, word2) ? "" : " not");
    
    return 0;
}

bool are_anagrams(const char *word1, const char *word2){
    int letter_counter[26]={0}, sum_counter=0;
    char c;
    while(*word1){
        if(isalpha(*word1)){
            c = tolower(*word1);
            letter_counter[(c - 'a')]--;
        }
        word1++;
    }
    while(*word2){
        if(isalpha(*word2)){
            c = tolower(*word2);
            letter_counter[(c - 'a')]++;
        }
        word2++;
    }
    for (int i = 0; i < (sizeof(letter_counter) / sizeof(letter_counter[0])); i++) {
        sum_counter += letter_counter[i] * letter_counter[i];
    }
    return sum_counter > 0 ? false : true;
}

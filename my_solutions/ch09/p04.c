/*
Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
void read_word(int counts[26]);
bool equal_array(int countsl[26], int counts2 [26]);
main will call read_word twice, once for each of the two words entered by the user. As it
reads a word. read_word will use the letters in the word to update the counts array, as
described in the original project, (main will declare two arrays, one for each word. These
arrays are used to track how many times each letter occurs in the words.) main will then
call equal_array, passing it the two arrays, equalarray will return true if the ele¬
ments in the two arrays are identical (indicating that the words are anagrams) and false
otherwise.
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int countsl[26], int counts2 [26]);

int main(void) {
    int A_word_array[26]={0};
    int B_word_array[26]={0};
    bool words_are_equal;
    char c;

    printf("Enter first word: ");
    read_word(A_word_array);

    printf("Enter second word: ");
    read_word(B_word_array);

    words_are_equal = equal_array(A_word_array, B_word_array);
    printf("The words are%s anagrams.\n", words_are_equal ? "" : " not");
    return 0;
}

void read_word(int counts[26]) {
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
            counts[(c - 'a')]++;
        }
    }
}
bool equal_array(int countsl[26], int counts2[26]) {
    for (int i = 0; i < 26; i++) {
        if (countsl[i] - counts2[i] != 0) {
            return false;
        }
    }
    return true;
}
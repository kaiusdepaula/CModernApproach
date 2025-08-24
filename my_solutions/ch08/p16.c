/*
Write a program that tests whether two words are anagrams (permutations of the same let¬
ters):
Enter first word: smartest
Enter second word: mattress
The words are anagrams.
Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.
Write a loop that reads the first word, character by character, using an array of 26 integers to
keep track of how many times each letter has been seen. (For example, after the word smelli¬
est has been read, the array should contain the values 1 000 I 000 0 00 0 1 0000 1 220
0 0 0 0 0. reflecting the fact that smartest contains one a. one e. one m. one r, two s’s and
two f s.) Use another loop to read the second word, except this time decrementing the corre¬
sponding array element as each letter is read. Both loops should ignore any characters that
aren't letters, and both should treat upper-case letters in the same way as lower-case letters.
After the second word has been read, use a third loop to check whether all the elements in
the array are zero. If so. the words are anagrams. Hint: You may wish to use functions from
<cCype .h>, such as isalpha and tolower
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    int letter_counter[26]={0}, sum_counter=0;
    char c;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
            letter_counter[(c - 'a')]++;
        }
    }

    printf("Enter second word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            c = tolower(c);
            letter_counter[(c - 'a')]--;
        }
    }

    for (int i = 0; i < (sizeof(letter_counter) / sizeof(letter_counter[0])); i++) {
        sum_counter += letter_counter[i] * letter_counter[i];
    }
    printf("The words are%s anagrams.\n", sum_counter > 0 ? " not" : "");
    
    return 0;
}
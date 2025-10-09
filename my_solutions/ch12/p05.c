/*
Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an inte¬
ger to keep track of the current position in the array that contains the sentence.
*/

#include <stdio.h>

int main(void) {
    char c, sentence[200];
    char *pos = sentence;
    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n' && c != '.' && c != '?' && c != '!') {
        *pos++ = c;
    }
    *pos = '\0';  // null-terminate
    pos--;        // move back to last valid character

    printf("Reversal of sentence: ");
    while (pos >= sentence) {
        if (*pos == ' ') {
            for (char *j = pos + 1; *j != ' ' && *j != '\0'; j++){
                printf("%c", *j);
            }
            printf(" ");
        } else if (pos == sentence) {
           for (char *j = pos; *j != ' ' && *j != '\0'; j++){
                printf("%c", *j);
            }
        }
        pos--;
    }
    printf("%c\n", c);
    return 0;
}

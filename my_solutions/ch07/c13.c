/*
Write a program that calculates the average word length for a sentence:
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal place.
*/

#include <stdio.h>

int main(void) {
    char c;
    float sentences = 0.0f, letters = 0.0f;
    
    printf("Enter a sentence: ");
    while((c = getchar()) != '\n') {
        if (c == ' '){
            sentences++;
        } else {
            letters++;
        }
    }
    sentences++;
    printf("Average word length: %.1f.\n", letters / sentences);
    return 0;
}
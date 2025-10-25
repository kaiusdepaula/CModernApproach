/*
Modify Programming Project 10 from Chapter 7 so that it includes the following function:
int compute_vowel_count(const char *sentence);
The function returns the number of vowels in the string pointed to by the sentence
parameter.
*/

#include <stdio.h>
#include <ctype.h>
int compute_vowel_count(const char *sentence);

int main(void){
    char sentence[51];
    int vowel_counter = 0;
    printf("Enter a sequence: ");
    fgets(sentence, sizeof(sentence), stdin);
    vowel_counter = compute_vowel_count(sentence);
    printf(
        "Your sentence contains %d vowel%s.\n", 
        vowel_counter, 
        vowel_counter == 1 ? "" : "s"
    );
    return 0;
}
int compute_vowel_count(const char *sentence){
    int vowel_counter = 0;
    while (*sentence){
        switch (tolower(*sentence)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowel_counter++;
                break;
            default:
                break;
        }
        sentence++;
    }
    return vowel_counter;
}
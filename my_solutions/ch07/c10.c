/*
Write a program that counts the number of vowels (a, et /', o. and u) in a sentence:
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
*/
#include <stdio.h>
#include <ctype.h>

int main(void){
    char letter;
    int vowel_counter = 0;
    printf("Enter a sequence: ");
    while ((letter = getchar()) != '\n'){
        switch (tolower(letter))
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            vowel_counter++;
            break;
        default:
            break;
        }
    }
    printf(
        "Your sentence contains %d vowel%c.\n", 
        vowel_counter, 
        vowel_counter == 1 ? "" : "s"
    );
    return 0;
}
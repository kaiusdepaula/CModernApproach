/*
Modify Programming Project 13 from Chapter 7 so that it includes the following function:
double compute_average_word_length(const char *sentence);
The function returns the average length of the words in the string pointed to by sentence.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

double compute_average_word_length(const char *sentence);

int main(void){
    char sentence[] = "a sentence composed of six words";
    double avg_word_lenght = compute_average_word_length(sentence);

    printf("Avg word lenght: %.2lf\n", avg_word_lenght);
    return 0;
}

double compute_average_word_length(const char *sentence){
    int total_words = 0, total_letters = 0;
    bool in_word = false;
    while(*sentence) { 
        if(isalpha(*sentence)){
            total_letters++;
            if(!in_word){
                total_words++;
                in_word = true;
            }
        } else if(isspace(*sentence)){
            in_word = false;
        } 
        sentence++;
    }
    if (total_words == 0){
        return 0.0;
    }
    return (double) total_letters / total_words;
}

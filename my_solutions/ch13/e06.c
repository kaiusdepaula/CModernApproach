/*
Write a function named censor that modifies a string by replacing every occurrence of
foobyxxx. For example, the string "food fool" would become "xxxd xxxl". Make
the function as short as possible without sacrificing clarity.
*/

#include <stdio.h>
#include <ctype.h>

void censor(char *input);
int main(void){
    char text[] = "food fool foo faoul fee foo faa fae faowfooe";
    censor(text);
    printf("%s\n", text); // prints "xxxd xxxl"
    return 0;
}

void censor(char *input){
    while(*input != '\0'){
       if (tolower(*input) == 'f'){
            if(tolower(*(input+1)) == 'o' && tolower(*(input+2)) == 'o'){
                *input = *(input+1) = *(input+2) = 'x';
            }   
       }
    input++;
    }
}
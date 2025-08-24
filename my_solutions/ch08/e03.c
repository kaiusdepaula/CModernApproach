/*
Write a declaration of an array named weekend containing seven bool values. Include an
initializer that makes the first and last values true; all other values should be false
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool weekend[7] = {[0] = true, [6] = true}; // I did the solution for exercise 4 automatically. 

    for (int i = 0; i < sizeof(weekend) / sizeof(weekend[0]); i++) {
        printf("%d is a weekend day: %s\n", i, weekend[i] ? "true" : "false");
    }
    return 0;
}
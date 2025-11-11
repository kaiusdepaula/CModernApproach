/*
Write a function named duplicate that uses dynamic storage allocation to create a copy
of a string. For example, the call
p = duplicate(str);
would allocate space for a string of the same length as str. copy the contents of str into
the new string, and return a pointer to it. Have duplicate return a null pointer if the
memory allocation fails.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char string[]);

int main(void){
    char string[] = "I'm just a simple string!";
    char *new_string = duplicate(string);

    if (new_string == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("%s\n", new_string);
    free(new_string);

    return 0;
}

char *duplicate(char string[]){
    int n_bytes = strlen(string) + 1;
    void *p = malloc(n_bytes);
    if(!p){
        return NULL;
    }
    strcpy(p, string);
    return p;
}
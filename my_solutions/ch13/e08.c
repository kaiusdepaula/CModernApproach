/*
What will be the value of the string str after the following statements have been executed?
strcpy(str, "tire-bouchon"); will copy the string literal onto str.
strcpy(&str[4], "d-or-wi"); will copy the string literal starting on index 4 of str.
strcat(str, "red?");  will copy string literal onto str.
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char str[100];
    strcpy(str, "tire-bouchon");
    printf("%s\n", str);

    strcpy(&str[4], "d-or-wi");
    printf("%s\n", str);

    strcat(str, "red?");
    printf("%s\n", str);
    return 0;
}
/*
What will be the value of the string si after the following statements have been executed?
strcpy(si, "computer");
strcpy(s2, "science");
if (strcmp(sl, s2) < 0)
strcat(si, s2);
else
strcat(s2, si);
si [strlen(si)-6] = 1\0';
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char str1[50], str2[50];
    strcpy(str1, "computer");
    strcpy(str2, "science");
    if (strcmp(str1, str2) < 0){
        strcat(str1, str2);
    } else {
        strcat(str2, str1);
    }
    str1[strlen(str1) - 6] = '\0';
    printf("%s\n", str1);

    return 0;
}
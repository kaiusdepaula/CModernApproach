#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n)
{
    int ch, i = 0;

    /* Skip leading whitespace */
    while (isspace(ch = getchar()))
        ;

    /* Read characters until newline or EOF */
    while (ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }

    str[i] = '\0';
    return i;
}

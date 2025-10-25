/*
Modify Programming Project 11 from Chapter 7 so that it includes the following function:
void reversename(char *name);
The function expects name to point to a string containing a first name followed by a last
name. It modifies the string so that the last name comes First, followed by a comma, a space,
the first initial, and a period. The original string may contain extra spaces before the first
name, between the first and last names, and after the last name
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reversename(char *name);

int main(void) {
    char name[100];
    printf("Enter a first and last name: ");
    reversename(name);

    printf("%s\n", name);

	return 0;
}
void reversename(char *name) {
    char first_initial;
    char last_name[100];
    int ch;
    while (isspace(ch = getchar())){;}

    first_initial = ch;
    first_initial = toupper(first_initial);

    while (!isspace(getchar())){;}
    while (isspace((ch = getchar()))){;}

    // Read last name
    int i = 0;
    last_name[i++] = ch;
    while ((ch = getchar()) != '\n' && !isspace(ch))
        last_name[i++] = ch;
    last_name[i] = '\0';

    // Build final string: "Last, F."
    sprintf(name, "%s, %c.", last_name, first_initial);
}
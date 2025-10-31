/*
Suppose we want a macro that expands into a string containing the current line number and
file name. In other words, we'd like to write
const char *str = LINE_FILE;
and have it expand into
const char *str = "Line 10 of file foo.c";
where f oo. c is the file containing the program and 10 is the line on which the invocation
of LINE FILE appears. Warning: This exercise is for experts only. Be sure to read the
Q&A section carefully before attempting!
*/

#include <stdio.h>

#define STR(x) #x 
#define STRINGTIZE(x) STR(x)
#define LINE_FILE  ("Line " STRINGTIZE(__LINE__) " of file " __FILE__)

int main(void){

    const char *str = LINE_FILE;
    printf("%s\n", str);
    return 0;
}
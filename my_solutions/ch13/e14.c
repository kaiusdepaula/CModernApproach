/*
What does the following program print?
#include <stdio.h>
int main(void) {
    char s[] = "Hsjodi", *p;
    for (p = s; *p; p++)
    -_*p;
    puts(s);
return 0;
}
*/

#include <stdio.h>
int main(void) {
    char s[] = "Hsjodi", *p;
    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}

/*
It prints Grinch. Instantiates a char array and a char pointer. Pointer is set to the 
begginning of the array and is tested each iteration and incremented by one (or by sizeof(char)).
Inside the for loop, the value the pointer points to is subtracted by one (ASCII TABLE).
puts(s) will print the string s with a newline.
*/
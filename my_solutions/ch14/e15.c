/*
Suppose that a program needs to display messages in either English, French, or Spanish.
Using conditional compilation, write a program fragment that displays one of the following
three messages, depending on whether or not the specified macro is defined:
Insert Disk 1 (if ENGLISH is defined)
Inserez Le Disque 1 (if FRENCH is defined)
Inserte El Disco 1 (if SPANISH is defined)
*/

#include <stdio.h>

//#define ENGLISH
//#define FRENCH
#define SPANISH

int main(void){
    #ifdef ENGLISH
        printf("Insert Disk 1\n");
    #elifdef FRENCH
        printf("Inserez Le Disque 1\n");
    #elifdef SPANISH 
        printf("Inserte El Disco 1\n");
    #endif
    return 0;
}
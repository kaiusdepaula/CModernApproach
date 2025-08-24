/*
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
The program will need to store the last name (but not the first name) in an array of characters
until it can be printed. You may assume that the last name is no more than 20 characters long
*/


#include <stdio.h>

int main(void) {
    char initial, letter, last_name[20];

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);
    while (getchar() != ' '){
        ;
    }
    scanf(" ");
    int i = 0;
    while ((letter = getchar()) != '\n' && letter != ' ') {
		last_name[i] = letter;
        i++;
	}
    last_name[i] = '\n';

    for (int i = 0; last_name[i] != '\n'; i++){
        printf("%c", last_name[i]);
    }
	printf(" %c.\n", initial);

	return 0;
}
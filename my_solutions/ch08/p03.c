/*
Modify the repdigit. c program of Section 8.1 so that the user can enter more than one
number to be tested for repeated digits. The program should terminate when the user enters
a number that’s less than or equal to 0.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int digit_seen[10] = {0};
	int digit;
	long n;
    bool end_program = false;

	printf("Enter a number: ");
	scanf("%ld", &n);

    while (!end_program) {
        while (n > 0) {
            digit = n % 10;
            digit_seen[digit]++;
            n /= 10;
        }

        printf("Digit:       0 1 2 3 4 5 6 7 8 9");
        printf("\nOccurrences: ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", digit_seen[i]);
        }
        printf("\n");
        printf("Enter a number: ");
	    scanf("%ld", &n);
        if (n <= 0) {
            end_program = true;
        }
    }
	return 0;
}
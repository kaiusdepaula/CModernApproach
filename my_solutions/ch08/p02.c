/*
Modify the repdigit, c program of Section 8.1 so that it prints a table showing how
many times each digit appears in the number:
Enter a number: 41271092
Digit: 0123456789
Occurrences: 1220100101
*/

#include <stdio.h>

int main(void)
{
	int digit_seen[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

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

	return 0;
}
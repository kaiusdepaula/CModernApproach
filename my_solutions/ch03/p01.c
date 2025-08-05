/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis¬
plays it in the form yyyymmdd:
*/

#include <stdio.h>

int main(void) {
    int day, month, year;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d /%d /%d", &day, &month, &year);
    printf("%d%d%d", year, month, day);
    return 0;
}
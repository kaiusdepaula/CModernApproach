/*
Write a program that asks the user for a 24-hour time, then displays the lime in 12-hour
form:
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
Be careful not to display 12:00 as 0:00.
*/
#include <stdio.h>

int main(void) {
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    if (hour >= 12) {
        printf("Equivalent 12-hour time: %d:%.2d PM", hour - 12, minute);
    } else {
        printf("Equivalent 12-hour time: %d:%.2d AM", hour, minute);
    }
    printf("\n");
    return 0;
}
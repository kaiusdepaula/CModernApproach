/*
Write a function day_of_year (month, day, year) that returns the day of the year
(an integer between I and 366) specified by the three arguments.
*/
#include <stdio.h>

int day_of_year(int month, int day, int year);

int main(void){
    int month, day, year;
    printf("Enter the today's date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Today is the %d day of the year.\n", day_of_year(month, day, year));
    return 0;
}

int day_of_year(int month, int day, int year){
    int counter = 0;
    // This loop will iterate over every month excluding december
    for (int i = 0; i < month - 1; i++) {
        switch(i){
            case 0: case 2: case 4: case 6:
            case 8: case 10: case 12:
                counter += 31;
                break;
            case 1:
                if (year % 4 == 0){
                    counter += 29;
                } else {
                    counter += 28;
                }
                break;
            case 3: case 5: case 7: case 9:
            case 11:
                counter += 30;
                break;
        }
    }
    counter += day;
    return counter;
}
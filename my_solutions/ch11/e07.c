/*
Write the following function:
void split_date(int day_of_year, int year,
int *month, int *day);
day of year is an integer between I and 366, specifying a particular day within the year
designated by year, month and day point to variables in which the function will store the
equivalent month (1-12) and day within that month (1-31).
*/

#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void){
    int day_of_year, year, month, day;

    printf("Enter a day of year (1-366): ");
    scanf("%d", &day_of_year);
    printf("Enter a year: ");
    scanf("%d", &year);
    
    split_date(day_of_year, year, &month, &day);
    printf("Year: %d, month: %d, day: %d", year, month, day);
    
    return 0;
}
void split_date(int day_of_year, int year, int *month, int *day){
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0) {
        months[1] = 29;
    }
    
    for (int i = 0; i < 12; i++){
        if (((double)day_of_year / (double)months[i]) > 1) {
            day_of_year %= months[i];
        } else {
            *month = i + 1;
            *day = day_of_year;
            break;
        }
    }
}

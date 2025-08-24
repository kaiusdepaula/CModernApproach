/*
Write a declaration for a two-dimensional array named temperature readings that
stores one month of hourly temperature readings. (For simplicity, assume that a month has
30 days.) The rows of the array should represent days of the month; the columns should rep¬
resent hours of the day.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DAYS 30
#define HOURS 24

int main(void){
    int temperature_readings[DAYS][HOURS];
    srand((unsigned) time(NULL));
    for (int i = 0; i < DAYS; i++) {
        printf("Day: %d\n", i + 1);
        for (int j = 0; j < HOURS; j++){
            temperature_readings[i][j] = rand() % 20;
            printf("%2d:00-%dºC ", j, temperature_readings[i][j]);
        }
        printf("\n");
    }
    return 0;
}
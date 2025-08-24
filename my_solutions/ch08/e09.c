/*
Using the array of Exercise 8. write a program fragment that computes the average tempera¬
ture for a month (averaged over all days of the month and all hours of the day)
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DAYS 30
#define HOURS 24

int main(void){
    int temperature_readings[DAYS][HOURS];
    float average_temp, sum=0;

    srand((unsigned) time(NULL));
    for (int i = 0; i < DAYS; i++) {
        printf("Day: %d\n", i + 1);
        for (int j = 0; j < HOURS; j++){
            temperature_readings[i][j] = rand() % 40;
            sum += temperature_readings[i][j];
            printf("%2d:00-%dºC ", j, temperature_readings[i][j]);
        }
        printf("\n");
    }

    printf("Average temperature: %.2fºC\n", sum / (DAYS * HOURS));
    return 0;
}
/*
 * Ch05 Pr08 | C Programming, A Modern Approach
 *
 * The following table shows the daily flights from one city to another:
 * Departure time    Arrival time
 *   8:00 a.m.        10:16 a.m.
 *   9:43 a.m.        11:52 a.m.
 *  11:19 a.m.         1:31 p.m.
 *  12:47 p.m.         3:00 p.m.
 *   2:00 p.m.         4:08 p.m.
 *   3:45 p.m.         5:55 p.m.
 *   7:00 p.m.         9:20 p.m.
 *   9:45 p.m.        11:58 p.m.
 *
 * Write a program that asks the user to enter a time (expressed in hours
 * and minutes, using the 24-hour clock). The program then displays the
 * departure and arrival times for the flight whose departure time is
 * closest to that entered by the user:
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint: convert the input into a time expressed in minutes since midnight,
 * and compare it to the departure times, also expressed in minutes since
 * midnight. For example, 13:15 is 13 x 60 + 15 = 795 minutes since midnight,
 * which is closer to 12:47 p.m. (767 minutes since midnight) than to any
 * of the other departure times.
 */

#include <stdio.h>

int main(void) {
    int hour, minute;
    printf("Enter a time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    int in_min = hour * 60 + minute;
    int departure_times[] = {
        8*60 + 0,
        9*60 + 43,
        11*60 + 19,
        12*60 + 47,
        14*60 + 0,
        15*60 + 45,
        19*60 + 0,
        21*60 + 45
    };
    char* output_ref[] = {
        "8:00 a.m., arriving at 10:16 a.m.",
        "9:43 a.m., arriving at 11:52 a.m.",
        "11:19 a.m., arriving at 1:31 p.m.",
        "12:47 p.m., arriving at 3:00 p.m.",
        "2:00 p.m., arriving at 4:08 p.m.",
        "3:45 p.m., arriving at 5:55 p.m.",
        "7:00 p.m., arriving at 9:20 p.m.",
        "9:45 p.m., arriving at 11:58 p.m."
    };

    int next_index = 0;
    for (int i = 0; i < sizeof(departure_times) / sizeof(int); i++) {
        if (departure_times[i] >= in_min) {
            next_index = i;
            break;
        }
    }
    printf("Next departure is %s\n", output_ref[next_index]);
    return 0;
}
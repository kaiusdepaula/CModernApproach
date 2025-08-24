/*
Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an
array and the arrival times are stored in a second array. (The times are integers, representing
the number of minutes since midnight.) The program will use a loop to search the array of
departure times for the one closest to the time entered by the user.
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
    char output_ref[] = {
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
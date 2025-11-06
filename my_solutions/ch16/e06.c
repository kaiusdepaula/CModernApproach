/*
Write the following function, assuming that the time structure contains three members:
hours, minutes, and seconds (all of type int).
struct time split_time(long total_seconds);
total seconds is a time represented as the number of seconds since midnight. The
function returns a structure containing the equivalent time in hours (0-23). minutes (0-59),
and seconds (0-59).
*/

#include <stdio.h>

struct time {
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main(void){
    int total_seconds;
    struct time my_struct;
    printf("Enter total seconds: ");
    scanf(" %d", &total_seconds);
    my_struct = split_time(total_seconds);
    printf(
        "Hours: %d, minutes: %d, seconds: %d\n", 
        my_struct.hours, 
        my_struct.minutes, 
        my_struct.seconds
    );
    return 0;
}

struct time split_time(long total_seconds){
    int t;
    struct time temp = {0, 0, 0};
    temp.hours = total_seconds / 3600;
    total_seconds %= 3600;

    temp.minutes = total_seconds / 60;
    total_seconds %= 60;

    temp.seconds = total_seconds;
    return temp;
}
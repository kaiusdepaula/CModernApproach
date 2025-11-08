/*
Modify Programming Project 8 from Chapter 5 so that the times are stored in a single array.
The elements of the array will be structures, each containing a departure lime and the corre¬
sponding arrival time. (Each time will be an integer, representing the number of minutes
since midnight.) The program will use a loop to search the array for the departure time clos¬
est to the time entered by the user.
*/


#include <stdio.h>
#define TIME_REF_MAX 51

struct times{
    int departure;
    const char time_ref[TIME_REF_MAX];
};

int main(void) {
    int hour, minute;        
    struct times departures[] = {
        {8*60 + 0, "8:00 a.m., arriving at 10:16 a.m."},
        {9*60 + 43, "9:43 a.m., arriving at 11:52 a.m."},
        {11*60 + 19, "11:19 a.m., arriving at 1:31 p.m."},
        {12*60 + 47, "12:47 p.m., arriving at 3:00 p.m."},
        {14*60 + 0, "2:00 p.m., arriving at 4:08 p.m."},
        {15*60 + 45, "3:45 p.m., arriving at 5:55 p.m."},
        {19*60 + 0, "7:00 p.m., arriving at 9:20 p.m."},
        {21*60 + 45, "9:45 p.m., arriving at 11:58 p.m."}
    };

    printf("Enter a time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);
    int in_min = hour * 60 + minute;

    int next_index = 0;
    for (int i = 0; i < sizeof(departures) / sizeof(departures[0]); i++) {
        if (departures[i].departure >= in_min) {
            next_index = i;
            break;
        }
    }
    printf("Next departure is %s\n", departures[next_index].time_ref);
    return 0;
}